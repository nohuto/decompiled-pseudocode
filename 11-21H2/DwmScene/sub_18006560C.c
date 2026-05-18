/*
 * XREFs of sub_18006560C @ 0x18006560C
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     sub_180063F5C @ 0x180063F5C (sub_180063F5C.c)
 *     sub_18006532C @ 0x18006532C (sub_18006532C.c)
 *     sub_180065394 @ 0x180065394 (sub_180065394.c)
 *     sub_18006558C @ 0x18006558C (sub_18006558C.c)
 *     sub_180065994 @ 0x180065994 (sub_180065994.c)
 *     sub_180070DA0 @ 0x180070DA0 (sub_180070DA0.c)
 *     sub_1800729F8 @ 0x1800729F8 (sub_1800729F8.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_180078514 @ 0x180078514 (sub_180078514.c)
 *     sub_18009DA30 @ 0x18009DA30 (sub_18009DA30.c)
 *     sub_18009E1E0 @ 0x18009E1E0 (sub_18009E1E0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18006560C(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 544) |= a2;
  if ( (a2 & 4) != 0 )
    *(_BYTE *)(a1 + 1612) = 1;
}
