/*
 * XREFs of KeQueryCurrentStackInformation @ 0x140294D90
 * Callers:
 *     RtlDispatchException @ 0x140295210 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x140296110 (RtlpWalkFrameChain.c)
 *     RtlpIsFrameInBoundsEx @ 0x140297A70 (RtlpIsFrameInBoundsEx.c)
 *     EtwpTraceLastBranchRecord @ 0x1404608E8 (EtwpTraceLastBranchRecord.c)
 *     PnprGetStackLimits @ 0x140562EBC (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 *     EtwpTraceStackWalk @ 0x140631A8C (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140636208 (EtwpCovSampCaptureKernelStack.c)
 *     VfUtilCaptureViolationKernelStack @ 0x140A81B20 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x140A98E28 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402AB9C0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x14041FAB0 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KeQueryCurrentStackInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
