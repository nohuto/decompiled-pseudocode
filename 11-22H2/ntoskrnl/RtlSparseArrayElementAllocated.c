/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x14024FAFC
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x140210A8C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14024FA60 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVaMgrRangeFind @ 0x14036004C (RtlpHpVaMgrRangeFind.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x14024FB60 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
