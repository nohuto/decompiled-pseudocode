/*
 * XREFs of sub_1800CC6D0 @ 0x1800CC6D0
 * Callers:
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800CECC0 @ 0x1800CECC0 (sub_1800CECC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180027B38 @ 0x180027B38 (sub_180027B38.c)
 *     sub_1800CC738 @ 0x1800CC738 (sub_1800CC738.c)
 */

__int64 __fastcall sub_1800CC6D0(__int64 a1, int a2)
{
  _BYTE *v3; // rax
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  if ( a2 >= 0 )
  {
    v3 = (_BYTE *)sub_1800CC738(v5);
  }
  else
  {
    v3 = (_BYTE *)(sub_1800CC738(v5) - 1);
    *v3 = 45;
  }
  sub_180027B38(a1, v3, v5);
  return a1;
}
