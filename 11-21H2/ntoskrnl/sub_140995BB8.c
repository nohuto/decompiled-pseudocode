/*
 * XREFs of sub_140995BB8 @ 0x140995BB8
 * Callers:
 *     sub_14099C8F8 @ 0x14099C8F8 (sub_14099C8F8.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 */

void __fastcall sub_140995BB8(__int64 a1)
{
  __int128 v2; // xmm1
  __int64 v3; // xmm0_8

  sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
  v2 = xmmword_140C20BE0;
  *(_OWORD *)a1 = xmmword_140C20BD0;
  v3 = qword_140C20BF0;
  *(_OWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 32) = v3;
  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
}
