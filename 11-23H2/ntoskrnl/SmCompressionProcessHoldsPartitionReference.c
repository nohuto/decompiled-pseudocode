/*
 * XREFs of SmCompressionProcessHoldsPartitionReference @ 0x1405CA050
 * Callers:
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmCompressionProcessHoldsPartitionReference(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2520) + 24LL) + 2008LL) == 0LL;
}
