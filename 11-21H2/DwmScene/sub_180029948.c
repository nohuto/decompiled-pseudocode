/*
 * XREFs of sub_180029948 @ 0x180029948
 * Callers:
 *     sub_180029948 @ 0x180029948 (sub_180029948.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     sub_18002B024 @ 0x18002B024 (sub_18002B024.c)
 *     sub_18005BD5C @ 0x18005BD5C (sub_18005BD5C.c)
 *     sub_18005CE30 @ 0x18005CE30 (sub_18005CE30.c)
 *     sub_180065A50 @ 0x180065A50 (sub_180065A50.c)
 *     sub_18006986C @ 0x18006986C (sub_18006986C.c)
 *     sub_1800954DC @ 0x1800954DC (sub_1800954DC.c)
 *     sub_180096EF0 @ 0x180096EF0 (sub_180096EF0.c)
 *     sub_180097128 @ 0x180097128 (sub_180097128.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029948 @ 0x180029948 (sub_180029948.c)
 */

__int64 __fastcall sub_180029948(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x38uLL) )
  {
    sub_180029948(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_180010910((__int64)(v6 + 40));
  }
  return result;
}
