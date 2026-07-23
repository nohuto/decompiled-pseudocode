/*
 * XREFs of sub_1402EE0E0 @ 0x1402EE0E0
 * Callers:
 *     sub_1402358D4 @ 0x1402358D4 (sub_1402358D4.c)
 *     sub_14028E8E0 @ 0x14028E8E0 (sub_14028E8E0.c)
 *     sub_1402AD610 @ 0x1402AD610 (sub_1402AD610.c)
 *     sub_1402CF630 @ 0x1402CF630 (sub_1402CF630.c)
 *     sub_1402ECEB0 @ 0x1402ECEB0 (sub_1402ECEB0.c)
 *     sub_1402EE0C8 @ 0x1402EE0C8 (sub_1402EE0C8.c)
 *     sub_14030B440 @ 0x14030B440 (sub_14030B440.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_140353858 @ 0x140353858 (sub_140353858.c)
 *     sub_14059519C @ 0x14059519C (sub_14059519C.c)
 *     sub_1405AAFD8 @ 0x1405AAFD8 (sub_1405AAFD8.c)
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_140982B6C @ 0x140982B6C (sub_140982B6C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1402EE0E0(__int64 a1, int a2)
{
  unsigned __int64 result; // rax

  for ( result = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; result; result = *(_QWORD *)result )
  {
    if ( (a2 & *(_DWORD *)(result + 64)) != 0 )
      break;
  }
  return result;
}
