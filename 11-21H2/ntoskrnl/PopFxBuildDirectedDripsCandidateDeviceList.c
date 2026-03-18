/*
 * XREFs of PopFxBuildDirectedDripsCandidateDeviceList @ 0x1405CAE90
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x14098BDD4 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     PopFxAddRefDevice @ 0x140355350 (PopFxAddRefDevice.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall PopFxBuildDirectedDripsCandidateDeviceList(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  struct _KTHREAD *v6; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v9; // edx
  __int64 result; // rax
  int v11; // r9d

  a1[1] = a1;
  *a1 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(i + 824), 0, 0) & 0x40) != 0 )
    {
      PopFxAddRefDevice(i);
      v4 = (_QWORD *)a1[1];
      v5 = (_QWORD *)(i + 872);
      if ( (_QWORD *)*v4 != a1 )
        __fastfail(3u);
      *v5 = a1;
      *(_QWORD *)(i + 880) = v4;
      *v4 = v5;
      a1[1] = v5;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  v6 = KeGetCurrentThread();
  if ( (unsigned __int64)&PopFxDeviceListLock - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  _disable();
  p_Process = (__int64)&v6[1].Process;
  v9 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v9;
    p_Process += 96LL;
    if ( v9 >= 6 )
      goto LABEL_19;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_19:
    result = *((unsigned int *)&v6->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    _enable();
    return result;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v11 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  result = *(unsigned __int8 *)(p_Process + 16);
  v6->AbEntrySummary |= 1 << result;
  _enable();
  if ( v11 )
    return KiAbThreadRemoveBoostsSlow((ULONG_PTR)v6, (__int64)&PopFxDeviceListLock, v11);
  return result;
}
