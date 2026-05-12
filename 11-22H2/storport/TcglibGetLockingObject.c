/*
 * XREFs of TcglibGetLockingObject @ 0x1C0079A50
 * Callers:
 *     RaidGetTcgLockingObject @ 0x1C00599DC (RaidGetTcgLockingObject.c)
 * Callees:
 *     TcglibpCheckContext @ 0x1C007AAC4 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpGetLockingObjectInfo @ 0x1C007B650 (TcglibpGetLockingObjectInfo.c)
 */

__int64 __fastcall TcglibGetLockingObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r10
  unsigned int v9; // r11d

  if ( !a4 )
    return 3221225485LL;
  result = TcglibpCheckContext(a1);
  if ( !(_DWORD)result )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
    {
      return 2147483665LL;
    }
    else
    {
      result = TcglibpGetLockingObjectInfo(a1, v7, v9, v8);
      if ( (int)result < 0 )
        result = TcglibpCheckError(a1, a2, (unsigned int)result);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return result;
}
