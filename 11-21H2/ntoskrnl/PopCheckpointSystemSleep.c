/*
 * XREFs of PopCheckpointSystemSleep @ 0x140A4B974
 * Callers:
 *     PopPrepareSleep @ 0x14038BAA8 (PopPrepareSleep.c)
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PopSuspendApps @ 0x1407FFCB0 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1407FFD04 (PopSuspendServices.c)
 *     PopResumeApps @ 0x1407FFD64 (PopResumeApps.c)
 *     PopResumeServices @ 0x1407FFDDC (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x1407FFE58 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x1407FFEBC (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x140A4A768 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140A4AF0C (PopInvokeSystemStateHandler.c)
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 *     PopRequestWrite @ 0x140A4C5B4 (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140A4C960 (PopRestoreHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x140A4CD9C (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140A4D4A4 (PopRequestRead.c)
 *     PopHiberChecksumHiberFileData @ 0x140A4DA40 (PopHiberChecksumHiberFileData.c)
 *     PopWriteHiberPages @ 0x140A4DC74 (PopWriteHiberPages.c)
 *     PopHiberCheckResume @ 0x140A4E0E0 (PopHiberCheckResume.c)
 *     PopUnlockAfterSleepWorker @ 0x140A4E3A0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopRecordSleepCheckpoint @ 0x1407FFF0C (PopRecordSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140A6BEC8 (PopCheckpointSystemSleepUnsafe.c)
 */

unsigned __int64 __fastcall PopCheckpointSystemSleep(int a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax

  v1 = a1;
  PopSleepCheckpoint = a1;
  v2 = __rdtsc();
  if ( PopBootStatCheckpointAvailable )
    PopRecordSleepCheckpoint(a1);
  if ( PopCheckpointSystemSleepEnabled
    && ((PopCheckpointSystemSleepSimulateFlags & 1) == 0
     || (unsigned int)v1 <= HIBYTE(PopCheckpointSystemSleepSimulateFlags)) )
  {
    if ( PoAllProcIntrDisabled )
    {
      if ( KeGetCurrentPrcb()->Number )
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 1uLL, 0LL);
      if ( (unsigned __int8)off_140C01F90[0]() )
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 2uLL, 0LL);
    }
    else if ( !_InterlockedExchangeAdd(&PopPagingEnabled, 0) )
    {
      KeBugCheckEx(0xA0u, 0x10FuLL, v1, 0LL, 0LL);
    }
    PopCheckpointSystemSleepUnsafe((unsigned int)v1);
  }
  v3 = __rdtsc();
  result = (((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3) - v2;
  qword_140C22D10 += result;
  return result;
}
