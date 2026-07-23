/*
 * XREFs of sub_140573FB4 @ 0x140573FB4
 * Callers:
 *     sub_140573B50 @ 0x140573B50 (sub_140573B50.c)
 *     sub_140574018 @ 0x140574018 (sub_140574018.c)
 *     sub_140574294 @ 0x140574294 (sub_140574294.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140573FB4(int a1, char a2)
{
  char v2; // r8
  unsigned __int16 v4; // [rsp+0h] [rbp-28h]
  int v5; // [rsp+4h] [rbp-24h]
  __int16 v6; // [rsp+8h] [rbp-20h]

  v2 = 0;
  v5 = 16909060;
  v6 = 5;
  if ( (dword_140D069C8 & 9) == 9 )
    v2 = a2;
  LOBYTE(v4) = v2;
  HIBYTE(v4) = *((_BYTE *)&v5 + a1);
  return v4;
}
