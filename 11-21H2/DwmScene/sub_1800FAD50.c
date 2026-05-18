/*
 * XREFs of sub_1800FAD50 @ 0x1800FAD50
 * Callers:
 *     sub_1800FB310 @ 0x1800FB310 (sub_1800FB310.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001D8E4 @ 0x18001D8E4 (sub_18001D8E4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800FAD50(_QWORD *a1)
{
  char *v3[3]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v4; // [rsp+40h] [rbp-18h]

  v3[2] = 0LL;
  v4 = 15LL;
  LOBYTE(v3[0]) = 0;
  sub_180012190((__int64 *)v3, "Operation was cancelled", 0x17uLL);
  sub_18001D8E4((__int64)a1, (const char *)v3, 0);
  if ( v4 >= 0x10 )
    sub_180010884(v3[0], v4 + 1);
  *a1 = &Spectre::Utils::CancelledException::`vftable';
  return a1;
}
