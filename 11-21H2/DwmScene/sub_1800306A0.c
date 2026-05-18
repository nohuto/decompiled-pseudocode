/*
 * XREFs of sub_1800306A0 @ 0x1800306A0
 * Callers:
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 *     sub_180035FAC @ 0x180035FAC (sub_180035FAC.c)
 *     sub_180038C68 @ 0x180038C68 (sub_180038C68.c)
 *     sub_1800457FC @ 0x1800457FC (sub_1800457FC.c)
 *     sub_180046470 @ 0x180046470 (sub_180046470.c)
 *     sub_180070790 @ 0x180070790 (sub_180070790.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_1800209BC @ 0x1800209BC (sub_1800209BC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800306A0(__int64 *a1, _QWORD *a2)
{
  char *v4[3]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp-18h]

  sub_1800209BC((__int64)v4, a2);
  sub_18001875C(a1, (__int64)v4);
  if ( v5 >= 0x10 )
    sub_180010884(v4[0], v5 + 1);
  return a1;
}
