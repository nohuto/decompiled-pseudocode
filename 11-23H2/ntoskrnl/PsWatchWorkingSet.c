/*
 * XREFs of PsWatchWorkingSet @ 0x140463CC0
 * Callers:
 *     KiPageFault @ 0x14042FD00 (KiPageFault.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeSignalGate @ 0x14035D4DC (KeSignalGate.c)
 */

signed __int64 __fastcall PsWatchWorkingSet(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 result; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rdi
  signed __int32 v9; // ecx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v11; // eax
  int v12; // ecx
  signed __int32 v13; // ett
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  signed __int32 v18; // eax
  signed __int64 v19; // rdx
  bool v20; // zf

  CurrentThread = KeGetCurrentThread();
  result = (signed __int64)CurrentThread->ApcState.Process;
  v7 = *(_QWORD *)(result + 1328);
  if ( v7 )
  {
    v8 = 0x4000000000000000LL;
    result = 0x8000000000000000uLL;
    if ( a1 >= 276 )
      v8 = 0x8000000000000000uLL;
    _m_prefetchw((const void *)v7);
    v9 = *(_DWORD *)v7;
    CurrentIrql = KeGetCurrentIrql();
    if ( !CurrentIrql )
      --CurrentThread->KernelApcDisable;
    if ( (v9 & 1) != 0 )
      goto LABEL_19;
    do
    {
      result = (unsigned __int16)v9 & 0xFFFE;
      if ( (unsigned int)result >= 0x800 )
        break;
      v11 = v9;
      v12 = ((unsigned __int16)v9 ^ (unsigned __int16)(v9 + 2)) & 0xFFFE ^ v9;
      v13 = v11;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)v7,
                               (v12 ^ (v12 + 0x10000)) & 0x7FFF0000 ^ v12,
                               v11);
      v9 = result;
      if ( v13 == (_DWORD)result )
        break;
    }
    while ( (result & 1) == 0 );
    if ( (v9 & 1) != 0 || (result = (unsigned __int16)v9 & 0xFFFE, (unsigned int)result >= 0x800) )
    {
LABEL_19:
      _m_prefetchw((const void *)(v7 + 8));
      v19 = *(_QWORD *)(v7 + 8);
      if ( v19 != -1 )
      {
        do
        {
          result = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8), v19 + 1, v19);
          v20 = v19 == result;
          v19 = result;
        }
        while ( !v20 && result != -1 );
      }
    }
    else
    {
      v14 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      v15 = (unsigned __int16)v9 >> 1;
      v16 = a3 | 1;
      if ( a1 >= 276 )
        v16 = v14;
      v17 = 3 * v15;
      *(_QWORD *)(v7 + 8 * v17 + 40) = a2;
      *(_QWORD *)(v7 + 24 * v15 + 48) = v16;
      *(_QWORD *)(v7 + 8 * v17 + 56) = *(_QWORD *)&CurrentThread[1].CurrentRunTime;
      v18 = _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFF0000);
      if ( (v18 & 1) != 0 && (v18 & 0x7FFF0000) == 0x10000 )
        KeSignalGate(v7 + 16, 0);
      result = (signed __int64)CurrentThread->WaitBlock[0].SparePtr;
      if ( result )
        _InterlockedOr64((volatile signed __int64 *)result, v8);
    }
    if ( !CurrentIrql )
      return (signed __int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return result;
}
