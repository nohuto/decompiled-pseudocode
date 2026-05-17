/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x1800648B4
 * Callers:
 *     RtlpHpVaMgrRangeFind @ 0x18004AE98 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrCtxQuery @ 0x180064680 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVaMgrCtxFree @ 0x180064760 (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x180064910 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
