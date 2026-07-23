/*
 * XREFs of RtlSetExtendedFeaturesMask @ 0x1801017E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800AE930 (RtlpLocateXStateChunk.c)
 */

void __cdecl RtlSetExtendedFeaturesMask(PCONTEXT_EX ContextEx, ULONG64 FeatureMask)
{
  char *XStateChunk; // rax
  __int64 v3; // r10

  XStateChunk = RtlpLocateXStateChunk(ContextEx);
  *(_QWORD *)XStateChunk = v3 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0xFFFFFFFFFFFFFFFCuLL;
}
