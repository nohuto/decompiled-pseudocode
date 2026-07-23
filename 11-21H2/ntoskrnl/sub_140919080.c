/*
 * XREFs of sub_140919080 @ 0x140919080
 * Callers:
 *     sub_140925494 @ 0x140925494 (sub_140925494.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403FADC8 @ 0x1403FADC8 (sub_1403FADC8.c)
 */

_BOOL8 __fastcall sub_140919080(__int64 a1)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 != 1162638920 )
    return 0LL;
  sub_1403FADC8(dword_140CE23E0, (unsigned __int16 *)a1, 0x20uLL, &v3);
  return *(_QWORD *)(a1 + 32) == v3;
}
