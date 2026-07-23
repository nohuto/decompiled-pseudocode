/*
 * XREFs of sub_14059219C @ 0x14059219C
 * Callers:
 *     sub_140285D90 @ 0x140285D90 (sub_140285D90.c)
 *     sub_140286210 @ 0x140286210 (sub_140286210.c)
 * Callees:
 *     sub_140238E78 @ 0x140238E78 (sub_140238E78.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14059219C(unsigned __int64 a1, int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD v6[24]; // [rsp+20h] [rbp-D8h] BYREF

  v3 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = *v3;
  if ( qword_140C50780 && (v4 & 0x10) == 0 )
    v4 &= ~qword_140C50780;
  if ( sub_140238E78(SHIDWORD(v4), a2) )
  {
    memset(v6, 0, 0xB8uLL);
    v6[3] = 0LL;
    LODWORD(v6[1]) = 20;
    sub_1402CF280((__int64)v6, a1, 64LL, 0);
    sub_14032F1B0((__int64)v6);
  }
  result = 0LL;
  *v3 = 0LL;
  return result;
}
