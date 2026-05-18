/*
 * XREFs of sub_180095580 @ 0x180095580
 * Callers:
 *     sub_1800958C0 @ 0x1800958C0 (sub_1800958C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180094000 @ 0x180094000 (sub_180094000.c)
 *     sub_180094F98 @ 0x180094F98 (sub_180094F98.c)
 *     sub_1800951C8 @ 0x1800951C8 (sub_1800951C8.c)
 *     sub_180095730 @ 0x180095730 (sub_180095730.c)
 *     __alloca_probe @ 0x1800E3900 (__alloca_probe.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall sub_180095580(char *a1, char *a2, char a3)
{
  __int64 v6; // rbp
  __int64 v8[514]; // [rsp+30h] [rbp-1028h] BYREF

  v6 = (a2 - a1) >> 4;
  if ( v6 <= 32 )
    return sub_180094F98(a1, a2);
  sub_180094000(v8, v6 - v6 / 2);
  sub_1800951C8(a1, (float *)a2, v6, v8[0], v8[1], a3);
  return (char *)sub_180095730(v8);
}
