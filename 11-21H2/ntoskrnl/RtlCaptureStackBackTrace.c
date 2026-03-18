/*
 * XREFs of RtlCaptureStackBackTrace @ 0x140295EF0
 * Callers:
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 *     SepGetStackTraceHash @ 0x140374FC8 (SepGetStackTraceHash.c)
 *     MiAddMdlTracker @ 0x140584030 (MiAddMdlTracker.c)
 *     MiShowBadMapper @ 0x140593B18 (MiShowBadMapper.c)
 *     MiInsertPteTracker @ 0x1405B6C18 (MiInsertPteTracker.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x1405E4840 (RtlStdLogStackTrace.c)
 *     RtlGetCallersAddress @ 0x1405E6FD0 (RtlGetCallersAddress.c)
 *     RtlpHpHeapHandleError @ 0x1405F1F7C (RtlpHpHeapHandleError.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x140601534 (ViKeLogCriticalRegionStackTrace.c)
 *     CarInitializeTelemetryData @ 0x140603A00 (CarInitializeTelemetryData.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 *     CmpLogDirtyVectorUse @ 0x140688290 (CmpLogDirtyVectorUse.c)
 *     ViKeIrqlLogCommon @ 0x140A7F7DA (ViKeIrqlLogCommon.c)
 *     IovpLogStackCallout @ 0x140A80F90 (IovpLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x140A90EA0 (VfPendingFinishLogging.c)
 *     VfCheckUserHandle @ 0x140A9466C (VfCheckUserHandle.c)
 *     ViFaultsInjectionNotification @ 0x140A974B4 (ViFaultsInjectionNotification.c)
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x140A98420 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140A985B4 (VfDeadlockReleaseResource.c)
 *     ViPtLogStackCallout @ 0x140A9DE70 (ViPtLogStackCallout.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v6; // edi
  ULONG v7; // ebx
  ULONG v8; // eax
  unsigned int v9; // edx
  unsigned int i; // ecx
  ULONG v12; // r8d
  __int64 v13; // rax

  v6 = FramesToCapture;
  if ( FramesToCapture > 0xFFFF )
    v6 = 0xFFFF;
  if ( FramesToSkip > 0xFE )
    return 0;
  v7 = FramesToSkip + 1;
  v8 = RtlWalkFrameChain(BackTrace, v7 + v6, v7 << 8);
  v9 = v8;
  if ( v8 <= v7 )
    return 0;
  if ( BackTraceHash )
  {
    v12 = 0;
    for ( i = 0; i < v6; v12 += LODWORD(BackTrace[v13]) )
    {
      if ( i + v7 >= v9 )
        break;
      v13 = i++;
    }
    *BackTraceHash = v12;
  }
  else
  {
    LOWORD(i) = v8 - v7;
  }
  return i;
}
