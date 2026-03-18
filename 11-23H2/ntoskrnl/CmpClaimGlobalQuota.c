/*
 * XREFs of CmpClaimGlobalQuota @ 0x140702F9C
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x140616510 (CmpAllocateForNonPagedHive.c)
 *     CmpAllocate @ 0x140702F30 (CmpAllocate.c)
 *     HvpAddBin @ 0x14074F174 (HvpAddBin.c)
 *     HvpMapHiveImageFromViewMap @ 0x1407502D8 (HvpMapHiveImageFromViewMap.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x140826778 (HvpBuildMapForMemoryBackedHive.c)
 *     HvpAllocateNonPagedBin @ 0x140A2A17C (HvpAllocateNonPagedBin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     CmpUpdateGlobalQuotaAllowed @ 0x140702FF0 (CmpUpdateGlobalQuotaAllowed.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

char __fastcall CmpClaimGlobalQuota(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  CmpUpdateGlobalQuotaAllowed(a1, a2, (unsigned int)a1);
  if ( !(_DWORD)v2 || v2 >= CmpGlobalQuotaAllowed - CmpGlobalQuotaUsed )
    return 0;
  _InterlockedExchangeAdd((volatile signed __int32 *)&CmpGlobalQuotaUsed, v2);
  if ( CmpGlobalQuotaUsed > (unsigned __int64)CmpGlobalQuotaWarning
    && !CmpQuotaWarningPopupDisplayed
    && ExReadyForErrors )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 538987843LL);
    if ( Pool2 )
    {
      Pool2->List.Flink = 0LL;
      Pool2->WorkerRoutine = (void (__fastcall *)(void *))CmpQuotaWarningWorker;
      CmpQuotaWarningPopupDisplayed = 1;
      Pool2->Parameter = Pool2;
      ExQueueWorkItem(Pool2, DelayedWorkQueue);
    }
  }
  return 1;
}
