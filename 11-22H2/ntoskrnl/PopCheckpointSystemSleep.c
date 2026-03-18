/*
 * XREFs of PopCheckpointSystemSleep @ 0x140AAA5A8
 * Callers:
 *     PopPrepareSleep @ 0x14058F50C (PopPrepareSleep.c)
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 *     PopDispatchSuperfetchNotification @ 0x140989840 (PopDispatchSuperfetchNotification.c)
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x14098A4E4 (PopResumeApps.c)
 *     PopResumeServices @ 0x14098A55C (PopResumeServices.c)
 *     PopSuspendApps @ 0x14098AAC4 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14098AB18 (PopSuspendServices.c)
 *     PopNotifyCallbacksPreSleep @ 0x14098BB2C (PopNotifyCallbacksPreSleep.c)
 *     PopDecompressHiberBlocks @ 0x140AA23F4 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x140AA2F60 (PopHiberCheckResume.c)
 *     PopHiberChecksumHiberFileData @ 0x140AA320C (PopHiberChecksumHiberFileData.c)
 *     PopRequestRead @ 0x140AA3C40 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140AA4070 (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140AA45CC (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140AA4A40 (PopSaveHiberContext.c)
 *     PopWriteHiberPages @ 0x140AA5AA4 (PopWriteHiberPages.c)
 *     PoBroadcastSystemState @ 0x140AA6B28 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PopRecordSleepCheckpoint @ 0x1409814C0 (PopRecordSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140AAA6B4 (PopCheckpointSystemSleepUnsafe.c)
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
      if ( (unsigned __int8)off_140C01D50[0]() )
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
  qword_140C3D390 += result;
  return result;
}
