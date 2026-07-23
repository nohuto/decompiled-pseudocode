/*
 * XREFs of sub_140299F34 @ 0x140299F34
 * Callers:
 *     sub_140299FBC @ 0x140299FBC (sub_140299FBC.c)
 * Callees:
 *     sub_140298A3C @ 0x140298A3C (sub_140298A3C.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140299F34(__int64 a1)
{
  __int64 result; // rax
  _QWORD v3[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v3, 0, 0xB8uLL);
  result = (unsigned int)dword_140D06880;
  if ( (dword_140D06880 & 0x40) != 0 )
  {
    v3[3] = 0LL;
    LODWORD(v3[1]) = 20;
    sub_140298A3C(a1);
    return sub_14032F1B0(v3);
  }
  return result;
}
