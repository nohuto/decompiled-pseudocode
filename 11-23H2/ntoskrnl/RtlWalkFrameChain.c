/*
 * XREFs of RtlWalkFrameChain @ 0x140227760
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x1402276E0 (RtlCaptureStackBackTrace.c)
 *     SepCreateTokenEx @ 0x140229710 (SepCreateTokenEx.c)
 *     EtwpTraceStackWalk @ 0x140468FCC (EtwpTraceStackWalk.c)
 *     KiDpcWatchdogCaptureStack @ 0x14056B214 (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x1405B7C3C (SepGetStackTraceHash.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405FFB3C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1406033B8 (EtwpCovSampCaptureKernelStack.c)
 *     CmpThreadInfoLogStack @ 0x14061600C (CmpThreadInfoLogStack.c)
 *     SepDuplicateToken @ 0x140729B80 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x1407F1C00 (SepFilterToken.c)
 *     PoDiagCaptureUsermodeStack @ 0x140865128 (PoDiagCaptureUsermodeStack.c)
 *     EtwpCovSampCaptureUserStack @ 0x1408A87B6 (EtwpCovSampCaptureUserStack.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409EA688 (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpUpdateDebugInfo @ 0x1409F9258 (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlEnoughStackSpaceForStackCapture @ 0x140227800 (RtlEnoughStackSpaceForStackCapture.c)
 *     MmCanThreadFault @ 0x14022784C (MmCanThreadFault.c)
 *     RtlpWalkFrameChain @ 0x1402A42A0 (RtlpWalkFrameChain.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  ULONG v4; // ebx
  BOOL v5; // esi
  ULONG v6; // edi
  ULONG v7; // ebp
  ULONG result; // eax

  if ( (Flags & 0xFFFF00FC) != 0 )
    return 0;
  v4 = Flags & 3;
  if ( Flags >> 8 > 0xFE )
    return 0;
  if ( Count == -1 )
    return 0;
  v5 = (Flags & 2) == 0;
  v6 = v5 + (Flags >> 8);
  v7 = v5 + Count;
  if ( !(unsigned int)MmCanThreadFault() && (v4 & 1) != 0 )
    return 0;
  if ( !(unsigned int)RtlEnoughStackSpaceForStackCapture() )
    return 0;
  result = RtlpWalkFrameChain(Callers, v7, v4, v6);
  if ( result )
    return (__PAIR64__(result, v4 & 2) - 1) >> 32;
  return result;
}
