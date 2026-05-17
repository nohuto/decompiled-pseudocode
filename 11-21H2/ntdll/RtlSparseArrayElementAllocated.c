/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x180057CA8
 * Callers:
 *     RtlpHpVaMgrRangeFind @ 0x180055ECC (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrCtxFree @ 0x180057B70 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrCtxQuery @ 0x180058C48 (RtlpHpVaMgrCtxQuery.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x180057D04 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
