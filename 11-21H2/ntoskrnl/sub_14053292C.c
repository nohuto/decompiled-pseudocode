/*
 * XREFs of sub_14053292C @ 0x14053292C
 * Callers:
 *     sub_1405330B8 @ 0x1405330B8 (sub_1405330B8.c)
 * Callees:
 *     sub_140532A28 @ 0x140532A28 (sub_140532A28.c)
 */

__int64 __fastcall sub_14053292C(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v7 = 0LL;
  v3 = a3;
  v6 = a2 | 0x2000000000000000LL;
  sub_140532A28(a1, &v6, a3);
  v7 = 0LL;
  v6 = 0x1000000000000000LL;
  return sub_140532A28(a1, &v6, v3);
}
