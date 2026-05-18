/*
 * XREFs of sub_180081E00 @ 0x180081E00
 * Callers:
 *     sub_1800834AC @ 0x1800834AC (sub_1800834AC.c)
 *     sub_180098640 @ 0x180098640 (sub_180098640.c)
 * Callees:
 *     sub_180017994 @ 0x180017994 (sub_180017994.c)
 *     sub_1800471D8 @ 0x1800471D8 (sub_1800471D8.c)
 *     sub_180081B30 @ 0x180081B30 (sub_180081B30.c)
 */

__int64 *__fastcall sub_180081E00(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  char *v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2;
  if ( v4 )
  {
    sub_1800471D8(a1, v4);
    v5 = sub_180081B30(*(void **)a2, *(_QWORD *)(a2 + 8), (char *)*a1);
    v7 = 0LL;
    a1[1] = (__int64)v5;
    sub_180017994(&v7);
  }
  return a1;
}
