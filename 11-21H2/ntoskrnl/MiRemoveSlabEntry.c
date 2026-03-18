/*
 * XREFs of MiRemoveSlabEntry @ 0x1405B1910
 * Callers:
 *     MiFreeSlabEntries @ 0x14023A710 (MiFreeSlabEntries.c)
 *     MmUpdateSlabRangeType @ 0x140B52548 (MmUpdateSlabRangeType.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 */

signed __int64 __fastcall MiRemoveSlabEntry(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  RtlRbRemoveNode(a2, a3);
  if ( a2[3] == a3 )
    a2[3] = 0LL;
  a2[4] -= *(unsigned int *)(a3 + 132);
  --a2[5];
  return _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17536), 0xFFFFFFFFFFFFFE00uLL);
}
