/*
 * XREFs of TcglibActivateLockingSpEx @ 0x1C0079150
 * Callers:
 *     RaidActivateTcgLocking @ 0x1C0057A8C (RaidActivateTcgLocking.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     TcglibpCheckContext @ 0x1C007AAC4 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpGetTableColumnData @ 0x1C007CA38 (TcglibpGetTableColumnData.c)
 *     TcglibpSetTableColumnData @ 0x1C007CC28 (TcglibpSetTableColumnData.c)
 *     TcglibpActivateLockingSp @ 0x1C007CF04 (TcglibpActivateLockingSp.c)
 *     TcglibpAuthenticateSession @ 0x1C007EC1C (TcglibpAuthenticateSession.c)
 */

__int64 __fastcall TcglibActivateLockingSpEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // ecx
  _OWORD *v9; // r10
  int TableColumnData; // eax
  char v11[8]; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v12[2]; // [rsp+48h] [rbp-60h] BYREF
  int v13; // [rsp+68h] [rbp-40h]

  if ( *(_DWORD *)(a1 + 32) != 512 || a3 > 1 )
    return 3221225659LL;
  result = TcglibpCheckContext();
  if ( !(_DWORD)result )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
    {
      return 2147483665LL;
    }
    else
    {
      v13 = 0;
      memset(v12, 0, sizeof(v12));
      if ( (v9
         || (TableColumnData = TcglibpGetTableColumnData(v8, v7, 33794, 3, (__int64)v12 + 4, 32, (__int64)v12),
             v9 = v12,
             TableColumnData >= 0))
        && (TableColumnData = TcglibpAuthenticateSession(a1, a2, 0x900000006LL, v9), TableColumnData >= 0)
        && (TableColumnData = TcglibpActivateLockingSp(a1, a2, a3), TableColumnData >= 0)
        || (result = TcglibpCheckError(a1, a2, (unsigned int)TableColumnData), (int)result >= 0) )
      {
        v11[0] = 1;
        result = TcglibpSetTableColumnData(a1, a2, 196609, 8, (__int64)v11, 1, 8);
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return result;
}
