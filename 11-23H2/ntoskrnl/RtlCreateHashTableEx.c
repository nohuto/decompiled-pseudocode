/*
 * XREFs of RtlCreateHashTableEx @ 0x1403C7B20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateHashTable @ 0x14036F840 (RtlpCreateHashTable.c)
 */

char __fastcall RtlCreateHashTableEx(__int64 *a1, unsigned int a2, int a3, int a4)
{
  return RtlpCreateHashTable(a1, a2, a3, a4);
}
