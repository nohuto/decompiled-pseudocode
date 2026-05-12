/*
 * XREFs of sub_1C007BB50 @ 0x1C007BB50
 * Callers:
 *     sub_1C0079AD4 @ 0x1C0079AD4 (sub_1C0079AD4.c)
 * Callees:
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 */

__int64 __fastcall sub_1C007BB50(int **a1, int a2, int a3, __int64 a4)
{
  int v6; // esi
  int v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = a3;
  v6 = (int)a1;
  sub_1C0055B8C(*a1, "AssignNamespaceLocking", a3, 0, 0LL, 0LL);
  return sub_1C007CF64(v6, a2, 0, 2052, (__int64)sub_1C007B3C0, (__int64)&v8, 0LL, 0LL, (__int64)sub_1C007B570, a4);
}
