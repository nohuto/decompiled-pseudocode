/*
 * XREFs of RtlCaptureStackBackTrace @ 0x1402277F0
 * Callers:
 *     PsBoostThreadIoEx @ 0x140230040 (PsBoostThreadIoEx.c)
 *     RtlGetCallersAddress @ 0x1403C2DE0 (RtlGetCallersAddress.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x1405A9A64 (RtlStdLogStackTrace.c)
 *     RtlpHpHeapHandleError @ 0x1405B55E4 (RtlpHpHeapHandleError.c)
 *     SepGetStackTraceHash @ 0x1405B81AC (SepGetStackTraceHash.c)
 *     CarInitializeTelemetryData @ 0x1405D4300 (CarInitializeTelemetryData.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F8E34 (DifGetReturnAddressForWrappers.c)
 *     MiAddMdlTracker @ 0x14061CA3C (MiAddMdlTracker.c)
 *     MiShowBadMapper @ 0x14063160C (MiShowBadMapper.c)
 *     MiInsertPteTracker @ 0x1406618D4 (MiInsertPteTracker.c)
 *     CmpLogDirtyVectorUse @ 0x1406BBF58 (CmpLogDirtyVectorUse.c)
 *     ViKeIrqlLogCommon @ 0x140AC0672 (ViKeIrqlLogCommon.c)
 *     IovpLogStackCallout @ 0x140AC1DC0 (IovpLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x140AD1848 (VfPendingFinishLogging.c)
 *     VfCheckUserHandle @ 0x140AD3D04 (VfCheckUserHandle.c)
 *     ViFaultsInjectionNotification @ 0x140AD6978 (ViFaultsInjectionNotification.c)
 *     VfDeadlockAcquireResource @ 0x140AD6DCC (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x140AD7758 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140AD7EEC (VfDeadlockReleaseResource.c)
 *     ViPtLogStackCallout @ 0x140ADEF20 (ViPtLogStackCallout.c)
 *     ViIrqlLogCRStackTrace @ 0x140AE85B4 (ViIrqlLogCRStackTrace.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140227870 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // edi
  ULONG v7; // ebx
  ULONG v8; // eax
  unsigned int v9; // r8d
  ULONG v10; // edx
  unsigned int i; // ecx
  __int64 v13; // rax

  v4 = 0xFFFF;
  if ( FramesToCapture <= 0xFFFF )
    v4 = FramesToCapture;
  if ( FramesToSkip > 0xFE )
    return 0;
  v7 = FramesToSkip + 1;
  v8 = RtlWalkFrameChain(BackTrace, v4 + v7, v7 << 8);
  v9 = v8;
  if ( v8 <= v7 )
    return 0;
  v10 = 0;
  if ( BackTraceHash )
  {
    for ( i = 0; i < v4; v10 += LODWORD(BackTrace[v13]) )
    {
      if ( i + v7 >= v9 )
        break;
      v13 = i++;
    }
    *BackTraceHash = v10;
  }
  else
  {
    LOWORD(i) = v8 - v7;
  }
  return i;
}
