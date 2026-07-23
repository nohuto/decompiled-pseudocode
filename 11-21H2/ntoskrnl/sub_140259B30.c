/*
 * XREFs of sub_140259B30 @ 0x140259B30
 * Callers:
 *     sub_14035F4C8 @ 0x14035F4C8 (sub_14035F4C8.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140259B30(PEX_SPIN_LOCK SpinLock, int a2, int a3)
{
  int v5; // edi
  ULONG ActiveProcessorCount; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned __int64 v9; // rbp
  __int64 result; // rax
  __int64 **i; // r14
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  bool v14; // zf

  if ( a2 == 4 )
    v5 = 7;
  else
    v5 = *((_DWORD *)qword_14001BFE0 + a2);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v7 = ActiveProcessorCount;
  if ( !a3 )
    goto LABEL_4;
  if ( v5 <= 7 )
  {
    v7 = 3 * ActiveProcessorCount;
LABEL_10:
    v8 = v7 >> 2;
    goto LABEL_11;
  }
  if ( v5 > 8 )
  {
    if ( v5 <= 10 )
      goto LABEL_10;
    v8 = ActiveProcessorCount >> 3;
  }
  else
  {
    v8 = ActiveProcessorCount >> 1;
  }
LABEL_11:
  if ( !v8 )
  {
LABEL_4:
    v8 = 1;
    goto LABEL_5;
  }
  if ( v8 >= 0x10 )
    v8 = 16;
LABEL_5:
  v9 = ExAcquireSpinLockExclusive(SpinLock);
  if ( *((_DWORD *)SpinLock + 32) != v5 )
  {
    *((_DWORD *)SpinLock + 32) = v5;
    for ( i = (__int64 **)*((_QWORD *)SpinLock + 9); i != (__int64 **)(SpinLock + 18); i = (__int64 **)*i )
      KeSetActualBasePriorityThread((ULONG_PTR)i[2]);
  }
  *((_DWORD *)SpinLock + 22) = v8;
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v14 = ((unsigned int)result & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= result;
        if ( v14 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
