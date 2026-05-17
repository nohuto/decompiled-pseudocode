/*
 * XREFs of RtlCaptureStackBackTrace @ 0x180079D50
 * Callers:
 *     RtlReleaseActivationContext @ 0x180033EF0 (RtlReleaseActivationContext.c)
 *     RtlInitializeResource @ 0x18005F860 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005F9E0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlActivateActivationContextEx @ 0x180074F40 (RtlActivateActivationContextEx.c)
 *     LdrpCgLogFailure @ 0x1800DAEB0 (LdrpCgLogFailure.c)
 *     RtlGetCallersAddress @ 0x1800F8E90 (RtlGetCallersAddress.c)
 *     RtlpHeapTrkTrackStack @ 0x18010BA3C (RtlpHeapTrkTrackStack.c)
 *     RtlStdLogStackTrace @ 0x18010E140 (RtlStdLogStackTrace.c)
 *     RtlpHpHeapHandleError @ 0x180115510 (RtlpHpHeapHandleError.c)
 *     RtlpHpStackTraceAddStack @ 0x1801159D0 (RtlpHpStackTraceAddStack.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x180118120 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x180079DF0 (RtlWalkFrameChain.c)
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
