/*
 * XREFs of sub_18004DA8C @ 0x18004DA8C
 * Callers:
 *     sub_18004FC34 @ 0x18004FC34 (sub_18004FC34.c)
 * Callees:
 *     sub_18004D6B8 @ 0x18004D6B8 (sub_18004D6B8.c)
 */

__int64 __fastcall sub_18004DA8C(__int64 *a1, int a2, int a3, unsigned int a4, int a5, int a6, __int64 a7)
{
  int v8[6]; // [rsp+40h] [rbp-18h] BYREF

  v8[0] = 2;
  return sub_18004D6B8(a1, a2, a3, a4, a6, a7, (__int64)v8);
}
