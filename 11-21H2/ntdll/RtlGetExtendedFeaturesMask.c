/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x180101AA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x180102198 (RtlpLocateXStateChunk.c)
 */

ULONG64 __cdecl RtlGetExtendedFeaturesMask(PCONTEXT_EX ContextEx)
{
  return *(_QWORD *)RtlpLocateXStateChunk(ContextEx) & 0xFFFFFFFFFFFFFFFCuLL;
}
