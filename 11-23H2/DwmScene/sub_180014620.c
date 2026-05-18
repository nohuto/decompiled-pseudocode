/*
 * XREFs of sub_180014620 @ 0x180014620
 * Callers:
 *     sub_1800143FC @ 0x1800143FC (sub_1800143FC.c)
 *     sub_180014650 @ 0x180014650 (sub_180014650.c)
 *     sub_18004CBB0 @ 0x18004CBB0 (sub_18004CBB0.c)
 *     sub_180066720 @ 0x180066720 (sub_180066720.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 *     sub_180097F30 @ 0x180097F30 (sub_180097F30.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 *__fastcall sub_180014620(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax
  __int64 v4; // rcx

  result = sub_1800124F8((__int64 *)(a1 + 88), a2);
  v4 = a2[1];
  if ( v4 )
    return (__int64 *)sub_180010530(v4);
  return result;
}
