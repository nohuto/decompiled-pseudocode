/*
 * XREFs of sub_14082EBA4 @ 0x14082EBA4
 * Callers:
 *     sub_1403C5610 @ 0x1403C5610 (sub_1403C5610.c)
 *     sub_14064F770 @ 0x14064F770 (sub_14064F770.c)
 *     sub_140B0EC60 @ 0x140B0EC60 (sub_140B0EC60.c)
 *     sub_140B0ED44 @ 0x140B0ED44 (sub_140B0ED44.c)
 *     sub_140B0F0F4 @ 0x140B0F0F4 (sub_140B0F0F4.c)
 *     sub_140B0F180 @ 0x140B0F180 (sub_140B0F180.c)
 *     sub_140B105C4 @ 0x140B105C4 (sub_140B105C4.c)
 *     sub_140B4F8C4 @ 0x140B4F8C4 (sub_140B4F8C4.c)
 *     sub_140B4FA10 @ 0x140B4FA10 (sub_140B4FA10.c)
 *     sub_140B501D0 @ 0x140B501D0 (sub_140B501D0.c)
 *     sub_140B503E0 @ 0x140B503E0 (sub_140B503E0.c)
 *     sub_140B50770 @ 0x140B50770 (sub_140B50770.c)
 * Callees:
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 */

__int64 __fastcall sub_14082EBA4(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return sub_14077FFEC(v7, a2, a3, a4, a5, a6);
}
