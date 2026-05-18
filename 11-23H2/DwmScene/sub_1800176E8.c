/*
 * XREFs of sub_1800176E8 @ 0x1800176E8
 * Callers:
 *     sub_180017754 @ 0x180017754 (sub_180017754.c)
 * Callees:
 *     sub_180017094 @ 0x180017094 (sub_180017094.c)
 *     sub_180017994 @ 0x180017994 (sub_180017994.c)
 *     sub_18001B544 @ 0x18001B544 (sub_18001B544.c)
 */

__int64 __fastcall sub_1800176E8(__int64 a1, __int64 a2)
{
  char *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2 )
  {
    sub_18001B544();
    v4 = sub_180017094(*(void **)a2, *(_QWORD *)(a2 + 8), *(char **)a1);
    v6 = 0LL;
    *(_QWORD *)(a1 + 8) = v4;
    sub_180017994(&v6);
  }
  return a1;
}
