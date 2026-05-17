/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x180101AA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x180102198 (RtlpLocateXStateChunk.c)
 */

unsigned __int64 __fastcall RtlGetExtendedFeaturesMask(__int64 a1)
{
  return *(_QWORD *)RtlpLocateXStateChunk(a1) & 0xFFFFFFFFFFFFFFFCuLL;
}
