/*
 * XREFs of sub_18001C6E8 @ 0x18001C6E8
 * Callers:
 *     sub_180027E8C @ 0x180027E8C (sub_180027E8C.c)
 *     sub_18003B9D0 @ 0x18003B9D0 (sub_18003B9D0.c)
 *     sub_18004093C @ 0x18004093C (sub_18004093C.c)
 *     sub_1800412EC @ 0x1800412EC (sub_1800412EC.c)
 *     sub_18004FDD4 @ 0x18004FDD4 (sub_18004FDD4.c)
 *     sub_180065CC0 @ 0x180065CC0 (sub_180065CC0.c)
 *     sub_18006F004 @ 0x18006F004 (sub_18006F004.c)
 *     sub_1800707C4 @ 0x1800707C4 (sub_1800707C4.c)
 *     sub_1800734B8 @ 0x1800734B8 (sub_1800734B8.c)
 *     sub_180082034 @ 0x180082034 (sub_180082034.c)
 *     sub_18008301C @ 0x18008301C (sub_18008301C.c)
 *     sub_180085154 @ 0x180085154 (sub_180085154.c)
 *     sub_180085280 @ 0x180085280 (sub_180085280.c)
 *     sub_1800856EC @ 0x1800856EC (sub_1800856EC.c)
 *     sub_1800858DC @ 0x1800858DC (sub_1800858DC.c)
 *     sub_18009A23C @ 0x18009A23C (sub_18009A23C.c)
 *     sub_18009D490 @ 0x18009D490 (sub_18009D490.c)
 *     sub_1800A58E8 @ 0x1800A58E8 (sub_1800A58E8.c)
 *     sub_1800A78BC @ 0x1800A78BC (sub_1800A78BC.c)
 *     sub_1800A7DC0 @ 0x1800A7DC0 (sub_1800A7DC0.c)
 *     sub_1800AF488 @ 0x1800AF488 (sub_1800AF488.c)
 *     sub_1800AF71C @ 0x1800AF71C (sub_1800AF71C.c)
 *     sub_1800AFAA8 @ 0x1800AFAA8 (sub_1800AFAA8.c)
 *     sub_1800B1B34 @ 0x1800B1B34 (sub_1800B1B34.c)
 * Callees:
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 */

_QWORD *__fastcall sub_18001C6E8(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v4; // r9
  __int64 v5; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a2 + v4) );
  v5 = sub_18001DF1C(a3);
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v5;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 15LL;
  *(_BYTE *)v5 = 0;
  return a1;
}
