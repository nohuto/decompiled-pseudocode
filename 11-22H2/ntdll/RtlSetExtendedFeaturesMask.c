/*
 * XREFs of RtlSetExtendedFeaturesMask @ 0x1801017E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800AE930 (RtlpLocateXStateChunk.c)
 */

char *__fastcall RtlSetExtendedFeaturesMask(_DWORD *a1)
{
  char *result; // rax
  __int64 v2; // r10

  result = RtlpLocateXStateChunk(a1);
  *(_QWORD *)result = v2 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}
