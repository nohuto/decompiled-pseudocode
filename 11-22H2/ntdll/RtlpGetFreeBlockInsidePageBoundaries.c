/*
 * XREFs of RtlpGetFreeBlockInsidePageBoundaries @ 0x180046C3C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x1800450BC (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x18004691C (RtlpCommitBlock.c)
 *     RtlpDecommitBlock @ 0x180046B04 (RtlpDecommitBlock.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpGetFreeBlockInsidePageBoundaries(__int64 a1, __int64 a2, unsigned __int64 *a3, _QWORD *a4)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax

  v4 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
  *a3 = v4;
  if ( v4 == a2 + 80 )
  {
    v4 += 4096LL;
    *a3 = v4;
  }
  v5 = (a2 + 16 * (*(unsigned __int16 *)(a2 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
  if ( v5 <= v4 )
    return 0;
  *a4 = v5 - v4;
  return 1;
}
