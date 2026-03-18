/*
 * XREFs of PopFxClearDirectedDripsCandidateDeviceList @ 0x1405CB970
 * Callers:
 *     PopDirectedDripsEngage @ 0x1405C9C94 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsResumeDevices @ 0x14098C2AC (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void PopFxClearDirectedDripsCandidateDeviceList()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rax
  struct _KTHREAD *v2; // rsi
  unsigned int v3; // ebp
  unsigned int SessionId; // ecx
  __int64 p_Process; // rdi
  unsigned int v6; // edx
  int v7; // r8d
  struct _KTHREAD *v8; // rdi
  __int64 v9; // rbx
  unsigned int v10; // ecx
  int v11; // r9d

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    _InterlockedAnd((volatile signed __int32 *)(i + 824), 0xFFFFFFBF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  v2 = KeGetCurrentThread();
  v3 = -1;
  if ( (unsigned __int64)&PopFxDeviceListLock - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v2->ApcState.Process);
  _disable();
  p_Process = (__int64)&v2[1].Process;
  v6 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v6;
    p_Process += 96LL;
    if ( v6 >= 6 )
      goto LABEL_15;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_15:
    if ( (*((_DWORD *)&v2->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v2, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
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
  v7 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v2->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v7 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v2, (__int64)&PopFxDeviceListLock, v7);
LABEL_23:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxBlockingDeviceListLock);
  v8 = KeGetCurrentThread();
  if ( (unsigned __int64)&PopFxBlockingDeviceListLock - qword_140C50630 < 0x8000000000LL )
    v3 = MmGetSessionIdEx((__int64)v8->ApcState.Process);
  _disable();
  v9 = (__int64)&v8[1].Process;
  v10 = 0;
  while ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PopFxBlockingDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v9 + 18)
       || (*(_DWORD *)v9 & 1) != 0
       || *(_DWORD *)(v9 + 8) != v3 )
  {
    ++v10;
    v9 += 96LL;
    if ( v10 >= 6 )
      goto LABEL_33;
  }
  *(_BYTE *)(v9 + 18) = 0;
  if ( !v9 )
  {
LABEL_33:
    if ( (*((_DWORD *)&v8->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v8, (ULONG_PTR)&PopFxBlockingDeviceListLock, v3, 0LL);
    _enable();
    goto LABEL_41;
  }
  if ( *(__int64 *)v9 < 0 )
  {
    *(_BYTE *)v9 |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(v9);
    _disable();
  }
  v11 = *(_DWORD *)(v9 + 88);
  *(_DWORD *)(v9 + 88) = 0;
  *(_BYTE *)(v9 + 17) = 0;
  *(_QWORD *)v9 = 0LL;
  v8->AbEntrySummary |= 1 << *(_BYTE *)(v9 + 16);
  _enable();
  if ( v11 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v8, (__int64)&PopFxBlockingDeviceListLock, v11);
LABEL_41:
  KeLeaveCriticalRegion();
}
