/*
 * XREFs of sub_18000FBE4 @ 0x18000FBE4
 * Callers:
 *     sub_18000FA24 @ 0x18000FA24 (sub_18000FA24.c)
 * Callees:
 *     sub_18000FCC0 @ 0x18000FCC0 (sub_18000FCC0.c)
 */

__int64 __fastcall sub_18000FBE4(int a1, int a2, int a3, int a4)
{
  int v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  return sub_18000FCC0(a1, (unsigned int)&v5, 4, (unsigned int)&v6, 4LL, a4);
}
