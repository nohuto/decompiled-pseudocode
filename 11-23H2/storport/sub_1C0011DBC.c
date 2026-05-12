/*
 * XREFs of sub_1C0011DBC @ 0x1C0011DBC
 * Callers:
 *     sub_1C0011BE0 @ 0x1C0011BE0 (sub_1C0011BE0.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C000889C @ 0x1C000889C (sub_1C000889C.c)
 *     sub_1C0008914 @ 0x1C0008914 (sub_1C0008914.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 */

__int64 __fastcall sub_1C0011DBC(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v3; // si
  int v4; // edi

  v1 = a1 + 336;
  if ( (unsigned int)sub_1C0007798(a1, 4) )
    sub_1C001A364(v1, 4LL, 0LL);
  v3 = sub_1C000889C(a1);
  v4 = sub_1C001A364(v1, 2LL, 0LL);
  if ( v4 >= 0 )
    *(_BYTE *)(a1 + 104) |= 1u;
  sub_1C0008914(a1, v3);
  return (unsigned int)v4;
}
