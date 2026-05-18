/*
 * XREFs of sub_1800CC1C8 @ 0x1800CC1C8
 * Callers:
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 *     sub_1800CD8AC @ 0x1800CD8AC (sub_1800CD8AC.c)
 *     sub_1800CF2D0 @ 0x1800CF2D0 (sub_1800CF2D0.c)
 * Callees:
 *     sub_1800558D4 @ 0x1800558D4 (sub_1800558D4.c)
 */

void ***__fastcall sub_1800CC1C8(void ***a1, void ***a2)
{
  void **v3; // rax
  void **v4; // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      sub_1800558D4((__int64)a1, v4);
  }
  return a1;
}
