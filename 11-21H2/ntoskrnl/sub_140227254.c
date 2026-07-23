/*
 * XREFs of sub_140227254 @ 0x140227254
 * Callers:
 *     sub_1402270B8 @ 0x1402270B8 (sub_1402270B8.c)
 * Callees:
 *     sub_140227300 @ 0x140227300 (sub_140227300.c)
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_140228BCC @ 0x140228BCC (sub_140228BCC.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140227254(__int64 a1, char a2, unsigned int a3)
{
  __int64 v6; // rax
  _QWORD v8[24]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v8, 0, 0xB8uLL);
  v6 = sub_1402CFEB0(a1);
  LODWORD(v8[0]) = sub_140227300(v6);
  LODWORD(v8[1]) = 20;
  WORD2(v8[0]) = 0;
  v8[2] = 0LL;
  v8[3] = 0LL;
  if ( a2 < 0 )
    sub_1402285E8(v8, a3, a1);
  else
    sub_140228BCC(v8, a3, a1);
  return sub_14032F1B0(v8);
}
