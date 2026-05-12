/*
 * XREFs of sub_1C004C000 @ 0x1C004C000
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C004C4E8 @ 0x1C004C4E8 (sub_1C004C4E8.c)
 */

__int64 __fastcall sub_1C004C000(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  LOBYTE(a3) = 1;
  return sub_1C004C4E8(a1, &v4, a3, 2LL);
}
