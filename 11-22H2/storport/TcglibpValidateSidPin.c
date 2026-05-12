/*
 * XREFs of TcglibpValidateSidPin @ 0x1C007E060
 * Callers:
 *     TcglibpGetCapabilities @ 0x1C007D1E8 (TcglibpGetCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     TcglibpGetTableColumnData @ 0x1C007CA38 (TcglibpGetTableColumnData.c)
 *     TcglibpAuthenticateSession @ 0x1C007EC1C (TcglibpAuthenticateSession.c)
 */

__int64 __fastcall TcglibpValidateSidPin(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _OWORD v5[2]; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+60h] [rbp-18h]

  v6 = 0;
  memset(v5, 0, sizeof(v5));
  result = TcglibpGetTableColumnData(a1, a2, 0xB00008402LL, 3u, (__int64)v5 + 4, 32, v5);
  if ( (int)result >= 0 )
    return TcglibpAuthenticateSession(a1, a2, 0x900000006LL, v5);
  return result;
}
