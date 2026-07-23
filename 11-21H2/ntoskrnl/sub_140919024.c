/*
 * XREFs of sub_140919024 @ 0x140919024
 * Callers:
 *     sub_140925444 @ 0x140925444 (sub_140925444.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403FADC8 @ 0x1403FADC8 (sub_1403FADC8.c)
 */

_BOOL8 __fastcall sub_140919024(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  sub_1403FADC8(dword_140CE23E0, (unsigned __int16 *)(a1 + 40), (unsigned int)(a2 - 40), &v5);
  return *(_QWORD *)(a3 + 24) == v5;
}
