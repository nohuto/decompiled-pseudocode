/*
 * XREFs of sub_140A61970 @ 0x140A61970
 * Callers:
 *     sub_140908918 @ 0x140908918 (sub_140908918.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A61970(char a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // [rsp+20h] [rbp-28h]
  _DWORD v5[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5[1] = 0;
  v5[0] = 2;
  v4 = 0x8000000000000000uLL;
  LOBYTE(v4) = a1;
  v6 = *(_QWORD *)(a3 + 40);
  return sub_14042A5E0(v4, v5);
}
