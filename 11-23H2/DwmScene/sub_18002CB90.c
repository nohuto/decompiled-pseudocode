/*
 * XREFs of sub_18002CB90 @ 0x18002CB90
 * Callers:
 *     sub_1800111B0 @ 0x1800111B0 (sub_1800111B0.c)
 *     sub_1800C91A0 @ 0x1800C91A0 (sub_1800C91A0.c)
 *     sub_1800C94A0 @ 0x1800C94A0 (sub_1800C94A0.c)
 *     sub_1800D8F60 @ 0x1800D8F60 (sub_1800D8F60.c)
 *     sub_1800D9000 @ 0x1800D9000 (sub_1800D9000.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 *__fastcall sub_18002CB90(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax
  __int64 v4; // rcx

  result = sub_1800124F8((__int64 *)(a1 + 240), a2);
  v4 = a2[1];
  if ( v4 )
    return (__int64 *)sub_180010530(v4);
  return result;
}
