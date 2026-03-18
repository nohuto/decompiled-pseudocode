/*
 * XREFs of CmpClaimGlobalQuota @ 0x14070304C
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x140616580 (CmpAllocateForNonPagedHive.c)
 *     CmpAllocate @ 0x140702FE0 (CmpAllocate.c)
 *     HvpAddBin @ 0x14074F684 (HvpAddBin.c)
 *     HvpMapHiveImageFromViewMap @ 0x1407507E8 (HvpMapHiveImageFromViewMap.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1408272D8 (HvpBuildMapForMemoryBackedHive.c)
 *     HvpAllocateNonPagedBin @ 0x140A2A22C (HvpAllocateNonPagedBin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     CmpUpdateGlobalQuotaAllowed @ 0x1407030A0 (CmpUpdateGlobalQuotaAllowed.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
