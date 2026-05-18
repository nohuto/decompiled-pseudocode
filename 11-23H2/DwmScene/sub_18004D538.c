/*
 * XREFs of sub_18004D538 @ 0x18004D538
 * Callers:
 *     sub_18004E738 @ 0x18004E738 (sub_18004E738.c)
 * Callees:
 *     sub_180017994 @ 0x180017994 (sub_180017994.c)
 *     sub_18001B544 @ 0x18001B544 (sub_18001B544.c)
 *     sub_18004D5B4 @ 0x18004D5B4 (sub_18004D5B4.c)
 */

__int64 __fastcall sub_18004D538(__int64 *a1, unsigned __int64 a2, void **a3, __int64 *a4)
{
  __int64 v7; // rsi
  void *v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    sub_18001B544((__int64)a1, a2);
    v7 = *a1;
    v8 = *a3;
    v9 = *a4;
    sub_18004D5B4(v8);
    v11 = 0LL;
    a1[1] = v7 + 4 * ((v9 - (__int64)v8) >> 2);
    return sub_180017994(&v11);
  }
  return result;
}
