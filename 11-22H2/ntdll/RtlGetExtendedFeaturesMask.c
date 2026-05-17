/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1801017A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800AE930 (RtlpLocateXStateChunk.c)
 */

unsigned __int64 __fastcall RtlGetExtendedFeaturesMask(_DWORD *a1)
{
  return *(_QWORD *)RtlpLocateXStateChunk(a1) & 0xFFFFFFFFFFFFFFFCuLL;
}
