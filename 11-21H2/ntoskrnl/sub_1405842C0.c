/*
 * XREFs of sub_1405842C0 @ 0x1405842C0
 * Callers:
 *     sub_14023C9F8 @ 0x14023C9F8 (sub_14023C9F8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405842C0(__int64 a1, int a2)
{
  __int64 v4; // rax
  _QWORD v6[20]; // [rsp+30h] [rbp-B8h] BYREF

  memset(v6, 0, 0x98uLL);
  v4 = v6[4];
  LODWORD(v6[0]) = -1073741819;
  LODWORD(v6[3]) = 2;
  if ( a2 )
    v4 = 1LL;
  v6[5] = a1;
  v6[4] = v4;
  return (unsigned __int8)sub_14042A5E0(v6, 0LL) == 0 ? 0xC0000005 : 0;
}
