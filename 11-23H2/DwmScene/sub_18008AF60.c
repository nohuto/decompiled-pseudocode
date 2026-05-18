/*
 * XREFs of sub_18008AF60 @ 0x18008AF60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028EE8 @ 0x180028EE8 (sub_180028EE8.c)
 */

__int64 __fastcall sub_18008AF60(__int64 a1, int a2)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_180028EE8((__int64 *)(a1 + 136), (unsigned int *)&v5);
  return sub_1800295A0(a1, a2);
}
