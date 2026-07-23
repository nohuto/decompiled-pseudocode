/*
 * XREFs of sub_14054DDD0 @ 0x14054DDD0
 * Callers:
 *     sub_14056AF98 @ 0x14056AF98 (sub_14056AF98.c)
 * Callees:
 *     sub_140294D28 @ 0x140294D28 (sub_140294D28.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054DDD0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v4 = a3;
  memset(v7, 0, 0x68uLL);
  if ( !sub_140294D28(0LL) )
    return 0LL;
  v7[1] = a1;
  v7[2] = a2;
  v7[3] = v4;
  return sub_140358A20(2u, 38, 0, (__int64)v7);
}
