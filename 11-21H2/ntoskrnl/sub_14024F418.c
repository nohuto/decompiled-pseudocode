/*
 * XREFs of sub_14024F418 @ 0x14024F418
 * Callers:
 *     sub_140540BD0 @ 0x140540BD0 (sub_140540BD0.c)
 *     sub_1406D3128 @ 0x1406D3128 (sub_1406D3128.c)
 *     sub_14076BA8C @ 0x14076BA8C (sub_14076BA8C.c)
 *     sub_14077386C @ 0x14077386C (sub_14077386C.c)
 *     sub_1408621F8 @ 0x1408621F8 (sub_1408621F8.c)
 *     sub_140A20144 @ 0x140A20144 (sub_140A20144.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14024F418(unsigned int a1, unsigned int a2, int *a3)
{
  int v3; // r9d

  if ( a1 < a2 )
    v3 = -1;
  else
    v3 = a1 - a2;
  *a3 = v3;
  return a1 < a2 ? 0xC0000095 : 0;
}
