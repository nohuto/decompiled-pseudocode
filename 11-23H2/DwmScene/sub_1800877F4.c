/*
 * XREFs of sub_1800877F4 @ 0x1800877F4
 * Callers:
 *     sub_180087454 @ 0x180087454 (sub_180087454.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180087564 @ 0x180087564 (sub_180087564.c)
 */

__int64 *__fastcall sub_1800877F4(_QWORD *a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 *result; // rax
  __int64 v7; // rcx

  v3 = a2;
  sub_180087564(a1, a2);
  result = sub_1800124F8(&a1[2 * v3 + 48], a3);
  v7 = a3[1];
  if ( v7 )
    return (__int64 *)sub_180010530(v7);
  return result;
}
