/*
 * XREFs of PopCheckpointSystemSleep @ 0x140AAA358
 * Callers:
 *     PopPrepareSleep @ 0x14058F96C (PopPrepareSleep.c)
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 *     PopDispatchSuperfetchNotification @ 0x140989990 (PopDispatchSuperfetchNotification.c)
 *     PopIssueActionRequest @ 0x140989EA4 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x14098A634 (PopResumeApps.c)
 *     PopResumeServices @ 0x14098A6AC (PopResumeServices.c)
 *     PopSuspendApps @ 0x14098AC14 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14098AC68 (PopSuspendServices.c)
 *     PopNotifyCallbacksPreSleep @ 0x14098BC7C (PopNotifyCallbacksPreSleep.c)
 *     PopDecompressHiberBlocks @ 0x140AA21A4 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x140AA2D10 (PopHiberCheckResume.c)
 *     PopHiberChecksumHiberFileData @ 0x140AA2FBC (PopHiberChecksumHiberFileData.c)
 *     PopRequestRead @ 0x140AA39F0 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140AA3E20 (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140AA437C (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140AA47F0 (PopSaveHiberContext.c)
 *     PopWriteHiberPages @ 0x140AA5854 (PopWriteHiberPages.c)
 *     PoBroadcastSystemState @ 0x140AA68D8 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140AA840C (PopInvokeSystemStateHandler.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopRecordSleepCheckpoint @ 0x140981610 (PopRecordSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140AAA464 (PopCheckpointSystemSleepUnsafe.c)
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
  qword_140C3D2F0 += result;
  return result;
}
