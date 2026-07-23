/*
 * XREFs of sub_1403C92F4 @ 0x1403C92F4
 * Callers:
 *     sub_1403C8EF8 @ 0x1403C8EF8 (sub_1403C8EF8.c)
 * Callees:
 *     sub_1402270B8 @ 0x1402270B8 (sub_1402270B8.c)
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_140228BCC @ 0x140228BCC (sub_140228BCC.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1403C92F4(volatile signed __int64 *a1, signed int a2)
{
  unsigned __int64 v4; // rax
  char v5; // al
  BOOL v6; // esi
  _QWORD v7[24]; // [rsp+20h] [rbp-D8h] BYREF

  if ( qword_140C532D8 == (PVOID)qword_140C532E0 )
  {
    memset(v7, 0, 0xB8uLL);
    v5 = sub_140317A10((unsigned __int64)a1);
    v7[3] = 0LL;
    LODWORD(v7[1]) = 20;
    if ( a2 && v5 < 0 )
      sub_1402285E8((__int64)v7, a2, (__int64)a1);
    else
      sub_140228BCC((__int64)v7, a2, (__int64)a1);
    v6 = 0;
    if ( sub_140317A80((unsigned __int64)a1) )
      v6 = sub_140229550() != 0;
    *a1 = 0LL;
    if ( v6 )
      sub_1402294F0((__int64)a1, 0LL);
    sub_14032F1B0((__int64)v7);
  }
  else
  {
    v4 = sub_1402CBD10((unsigned __int64)a1, (__int64)*(&qword_140C532D8 + a2), a2 != 0 ? -1476395004 : 536870913);
    sub_1402270B8(a1, (unsigned __int64)a1, v4, a2);
  }
}
