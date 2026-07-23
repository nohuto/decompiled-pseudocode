/*
 * XREFs of sub_140970668 @ 0x140970668
 * Callers:
 *     sub_14027034C @ 0x14027034C (sub_14027034C.c)
 *     sub_14059E4B0 @ 0x14059E4B0 (sub_14059E4B0.c)
 *     sub_1406F48DC @ 0x1406F48DC (sub_1406F48DC.c)
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_14059F224 @ 0x14059F224 (sub_14059F224.c)
 *     sub_140970960 @ 0x140970960 (sub_140970960.c)
 *     sub_140970990 @ 0x140970990 (sub_140970990.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140970668(_DWORD *P)
{
  __int64 v2; // rbx
  unsigned __int64 *i; // rsi
  unsigned __int64 *v4; // rdx

  sub_140970960();
  v2 = 0LL;
  for ( i = (unsigned __int64 *)sub_14059F224(P[1]); (unsigned int)v2 < *P; v2 = (unsigned int)(v2 + 1) )
  {
    v4 = (unsigned __int64 *)&P[12 * v2 + 2];
    if ( v4[4] != 0x8000000000000000uLL )
      RtlAvlRemoveNode(i, v4);
  }
  sub_140970990();
  ExFreePoolWithTag(P, 0);
}
