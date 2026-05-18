/*
 * XREFs of sub_1800299BC @ 0x1800299BC
 * Callers:
 *     sub_1800299BC @ 0x1800299BC (sub_1800299BC.c)
 *     sub_180029DE4 @ 0x180029DE4 (sub_180029DE4.c)
 *     sub_18002B780 @ 0x18002B780 (sub_18002B780.c)
 *     sub_18002BAD0 @ 0x18002BAD0 (sub_18002BAD0.c)
 *     sub_180048C70 @ 0x180048C70 (sub_180048C70.c)
 *     sub_180091B34 @ 0x180091B34 (sub_180091B34.c)
 *     sub_180091BE4 @ 0x180091BE4 (sub_180091BE4.c)
 *     sub_180092790 @ 0x180092790 (sub_180092790.c)
 *     sub_1800B2B54 @ 0x1800B2B54 (sub_1800B2B54.c)
 *     sub_1800B3070 @ 0x1800B3070 (sub_1800B3070.c)
 *     sub_1800D90D8 @ 0x1800D90D8 (sub_1800D90D8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800299BC @ 0x1800299BC (sub_1800299BC.c)
 */

__int64 __fastcall sub_1800299BC(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rbx
  char *v6; // rcx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x28uLL) )
  {
    sub_1800299BC(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
  }
  return result;
}
