/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x1406BF984
 * Callers:
 *     NtTraceEvent @ 0x1402579A0 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x1403697B4 (EtwGetProviderIdFromHandle.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE840 (EtwpAddRegEntryToGroup.c)
 *     EtwpDeleteRegistrationObject @ 0x1406BEDC0 (EtwpDeleteRegistrationObject.c)
 *     EtwpGetNextGuidEntry @ 0x1406BF110 (EtwpGetNextGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x1406BF240 (EtwpRegisterUMProvider.c)
 *     EtwpFindOrCreateGuidEntry @ 0x1406BF720 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406BFE70 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x14077FBD8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14077FEF0 (EtwpEnableGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140780A68 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x140781A68 (EtwpAddGuidEntry.c)
 *     EtwpRegisterKMProvider @ 0x14078DAB4 (EtwpRegisterKMProvider.c)
 *     EtwUnregister @ 0x1407C10D0 (EtwUnregister.c)
 *     EtwpFreeGuidEntry @ 0x1407D9764 (EtwpFreeGuidEntry.c)
 *     EtwpGetTraceGuidInfo @ 0x140852888 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetTraceGroupInfo @ 0x1408A75C2 (EtwpGetTraceGroupInfo.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E7760 (EtwpNotifyDisallowedGuidChange.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409ED060 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x1407D9764 (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(__int64 *BugCheckParameter2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r10
  __int64 v6; // r9
  volatile signed __int64 *v7; // rbp
  __int64 *v8; // rcx
  __int64 **v9; // rax

  v2 = _InterlockedDecrement64(BugCheckParameter2 + 4);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = ((unsigned __int8)*((_DWORD *)BugCheckParameter2 + 11) ^ (unsigned __int8)(*((_DWORD *)BugCheckParameter2 + 12) ^ *((_DWORD *)BugCheckParameter2 + 13) ^ *((_DWORD *)BugCheckParameter2 + 10))) & 0x3F;
    v6 = BugCheckParameter2[49] + 512;
    --CurrentThread->KernelApcDisable;
    v7 = (volatile signed __int64 *)(v6 + 56 * v5);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
    v8 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v9 = (__int64 **)BugCheckParameter2[1], *v9 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v9 = v8;
    v8[1] = (__int64)v9;
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KeLeaveCriticalRegion();
    EtwpFreeGuidEntry(BugCheckParameter2);
  }
  return v2;
}
