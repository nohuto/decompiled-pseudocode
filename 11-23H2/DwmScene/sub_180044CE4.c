/*
 * XREFs of sub_180044CE4 @ 0x180044CE4
 * Callers:
 *     sub_180044DCC @ 0x180044DCC (sub_180044DCC.c)
 * Callees:
 *     sub_180017994 @ 0x180017994 (sub_180017994.c)
 *     sub_180044D60 @ 0x180044D60 (sub_180044D60.c)
 *     sub_1800471D8 @ 0x1800471D8 (sub_1800471D8.c)
 */

__int64 __fastcall sub_180044CE4(__int64 *a1, __int64 a2, void **a3, __int64 *a4)
{
  __int64 v7; // rsi
  void *v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    sub_1800471D8(a1, a2);
    v7 = *a1;
    v8 = *a3;
    v9 = *a4;
    sub_180044D60(v8);
    v11 = 0LL;
    a1[1] = v7 + 4 * ((v9 - (__int64)v8) >> 2);
    return sub_180017994(&v11);
  }
  return result;
}
