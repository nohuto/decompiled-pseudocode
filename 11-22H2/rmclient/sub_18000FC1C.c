/*
 * XREFs of sub_18000FC1C @ 0x18000FC1C
 * Callers:
 *     sub_18000FA24 @ 0x18000FA24 (sub_18000FA24.c)
 * Callees:
 *     sub_18000FCC0 @ 0x18000FCC0 (sub_18000FCC0.c)
 */

__int64 __fastcall sub_18000FC1C(int a1, int a2, int a3)
{
  int v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  v4 = a2;
  return sub_18000FCC0(a1, (unsigned int)&v4, 4, (unsigned int)&v5, 4LL, 1);
}
