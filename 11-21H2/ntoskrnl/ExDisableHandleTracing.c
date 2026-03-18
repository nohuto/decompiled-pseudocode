/*
 * XREFs of ExDisableHandleTracing @ 0x1406399B4
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x1409AD704 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409F8D78 (ExDereferenceHandleDebugInfo.c)
 */

_QWORD *__fastcall ExDisableHandleTracing(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v3; // rdi
  __int64 v4; // r14
  struct _KTHREAD *v5; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v8; // edx
  int v9; // r8d
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 + 56;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v4 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v4 && (*(_DWORD *)(v4 + 8) & 8) == 0 )
    *(_BYTE *)(a1 + 44) &= ~2u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  v5 = KeGetCurrentThread();
  if ( v3 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
  _disable();
  p_Process = (__int64)&v5[1].Process;
  v8 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v8;
    p_Process += 96LL;
    if ( v8 >= 6 )
      goto LABEL_15;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_15:
    if ( (*((_DWORD *)&v5->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, v3, SessionId, 0LL);
    _enable();
    goto LABEL_23;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v9 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v5->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v9 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v5, v3, v9);
LABEL_23:
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 )
    return (_QWORD *)ExDereferenceHandleDebugInfo(a1, v4);
  return result;
}
