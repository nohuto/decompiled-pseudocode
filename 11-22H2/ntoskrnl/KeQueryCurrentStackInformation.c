/*
 * XREFs of KeQueryCurrentStackInformation @ 0x14034E3B0
 * Callers:
 *     RtlDispatchException @ 0x1402A3CA0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402A4C20 (RtlUnwindEx.c)
 *     RtlpIsFrameInBoundsEx @ 0x1402A6490 (RtlpIsFrameInBoundsEx.c)
 *     EtwpTraceStackWalk @ 0x14046896C (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140469446 (EtwpTraceLastBranchRecord.c)
 *     PnprGetStackLimits @ 0x140563084 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140603428 (EtwpCovSampCaptureKernelStack.c)
 *     VfUtilCaptureViolationKernelStack @ 0x140AC3490 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x140AD9740 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14022E9D0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x14041EA70 (KeGetCurrentStackPointer.c)
 */

bool __fastcall KeQueryCurrentStackInformation(_DWORD *a1, char **a2, unsigned __int64 *a3)
{
  unsigned __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
