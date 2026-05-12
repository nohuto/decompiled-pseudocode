/*
 * XREFs of sub_1C007D734 @ 0x1C007D734
 * Callers:
 *     sub_1C0079980 @ 0x1C0079980 (sub_1C0079980.c)
 * Callees:
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 */

__int64 __fastcall sub_1C007D734(int **a1, __int64 a2, int a3)
{
  int v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  sub_1C0055B8C(*a1, "ActivateLockingSp", 2, 3, 0LL, 0LL);
  return sub_1C007CF64(
           (__int64)a1,
           a2,
           0x20500000002LL,
           0x600000203LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_1C007D570,
           (__int64)&v6,
           0LL,
           0LL,
           0LL,
           0LL);
}
