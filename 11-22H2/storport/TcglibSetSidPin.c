/*
 * XREFs of TcglibSetSidPin @ 0x1C007A5FC
 * Callers:
 *     RaidSetTcgSpAuthorityKey @ 0x1C005B5F4 (RaidSetTcgSpAuthorityKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     TcglibpCheckContext @ 0x1C007AAC4 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpGetTableColumnData @ 0x1C007CA38 (TcglibpGetTableColumnData.c)
 *     TcglibpSetPin @ 0x1C007E01C (TcglibpSetPin.c)
 *     TcglibpAuthenticateSession @ 0x1C007EC1C (TcglibpAuthenticateSession.c)
 */

__int64 __fastcall TcglibSetSidPin(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rdx
  _OWORD *v9; // r10
  __int64 v10; // [rsp+20h] [rbp-78h]
  _OWORD v11[2]; // [rsp+40h] [rbp-58h] BYREF
  int v12; // [rsp+60h] [rbp-38h]

  v12 = 0;
  memset(v11, 0, sizeof(v11));
  if ( !a4 )
    return 3221225485LL;
  result = TcglibpCheckContext(a1);
  if ( !(_DWORD)result )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
    {
      return 2147483665LL;
    }
    else
    {
      if ( !v9
        && (LODWORD(result) = TcglibpGetTableColumnData(a1, v8, 33794, 3, (__int64)v11 + 4, 32, (__int64)v11),
            v9 = v11,
            (int)result < 0)
        || (LODWORD(result) = TcglibpAuthenticateSession(a1, a2, 0x900000006LL, v9), (int)result < 0)
        || (result = TcglibpSetPin(a1, a2, 0xB00000001LL, a4, v10), (int)result < 0) )
      {
        result = TcglibpCheckError(a1, a2, (unsigned int)result);
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return result;
}
