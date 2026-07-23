/*
 * XREFs of RtlCaptureStackBackTrace @ 0x18007A3C0
 * Callers:
 *     RtlReleaseActivationContext @ 0x180033D90 (RtlReleaseActivationContext.c)
 *     RtlInitializeResource @ 0x18005C9D0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005CB50 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlActivateActivationContextEx @ 0x1800755B0 (RtlActivateActivationContextEx.c)
 *     LdrpCgLogFailure @ 0x1800DA860 (LdrpCgLogFailure.c)
 *     RtlGetCallersAddress @ 0x1800FA2A0 (RtlGetCallersAddress.c)
 *     RtlpHeapTrkTrackStack @ 0x18010CEAC (RtlpHeapTrkTrackStack.c)
 *     RtlStdLogStackTrace @ 0x18010F5C0 (RtlStdLogStackTrace.c)
 *     RtlpHpHeapHandleError @ 0x180116990 (RtlpHpHeapHandleError.c)
 *     RtlpHpStackTraceAddStack @ 0x180116E50 (RtlpHpStackTraceAddStack.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1801195A0 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x18007A460 (RtlWalkFrameChain.c)
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
