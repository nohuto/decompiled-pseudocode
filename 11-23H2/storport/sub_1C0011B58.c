/*
 * XREFs of sub_1C0011B58 @ 0x1C0011B58
 * Callers:
 *     sub_1C0011B08 @ 0x1C0011B08 (sub_1C0011B08.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C000889C @ 0x1C000889C (sub_1C000889C.c)
 *     sub_1C0008914 @ 0x1C0008914 (sub_1C0008914.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 */

__int64 __fastcall sub_1C0011B58(__int64 a1)
{
  KIRQL v2; // bl
  int v3; // esi

  if ( (*(_BYTE *)(a1 + 104) & 1) == 0 )
    return 0LL;
  v2 = sub_1C000889C(a1);
  v3 = sub_1C001A364(a1 + 336, 1LL, 0LL);
  sub_1C0008914(a1, v2);
  if ( (unsigned int)sub_1C0007798(a1, 3) )
    sub_1C001A364(a1 + 336, 3LL, 0LL);
  if ( v3 >= 0 )
    *(_BYTE *)(a1 + 104) &= ~1u;
  return (unsigned int)v3;
}
