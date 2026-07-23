/*
 * XREFs of sub_14054FBE0 @ 0x14054FBE0
 * Callers:
 *     sub_1403EAC70 @ 0x1403EAC70 (sub_1403EAC70.c)
 *     sub_140657010 @ 0x140657010 (sub_140657010.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054FBE0(__int64 a1, int a2)
{
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = a1;
  LODWORD(v5[2]) = (a2 & 1) != 0;
  if ( a2 >= 0 )
    return sub_140358A20(2u, 258, 0, (__int64)v5);
  LODWORD(v5[2]) = ((a2 & 1) != 0) | 2;
  if ( a1 )
    return sub_140358A20(2u, 258, 0, (__int64)v5);
  else
    return 0LL;
}
