/*
 * XREFs of sub_1800875F8 @ 0x1800875F8
 * Callers:
 *     sub_180099DE8 @ 0x180099DE8 (sub_180099DE8.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 *__fastcall sub_1800875F8(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax
  __int64 v4; // rcx

  result = sub_1800124F8((__int64 *)(a1 + 64), a2);
  v4 = a2[1];
  if ( v4 )
    return (__int64 *)sub_180010530(v4);
  return result;
}
