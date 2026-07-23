/*
 * XREFs of sub_1406D16F8 @ 0x1406D16F8
 * Callers:
 *     sub_140689900 @ 0x140689900 (sub_140689900.c)
 *     sub_14068C544 @ 0x14068C544 (sub_14068C544.c)
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_14079B518 @ 0x14079B518 (sub_14079B518.c)
 *     sub_14083D244 @ 0x14083D244 (sub_14083D244.c)
 *     sub_14091A928 @ 0x14091A928 (sub_14091A928.c)
 *     sub_14091AB6C @ 0x14091AB6C (sub_14091AB6C.c)
 * Callees:
 *     sub_14024DE3C @ 0x14024DE3C (sub_14024DE3C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 */

__int64 __fastcall sub_1406D16F8(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
    return sub_14096ED20(a3, a2);
  sub_14024DE3C(a3, a2, 4u);
  return sub_14042A5E0(a3, a2);
}
