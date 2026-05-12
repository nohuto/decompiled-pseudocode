/*
 * XREFs of TcglibStopTransaction @ 0x1C007A998
 * Callers:
 *     RaidAssignTcgNamespaceLockingObject @ 0x1C0057D08 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x1C005806C (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x1C0058938 (RaidDeassignTcgLockingObject.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x1C0059B18 (RaidGetTcgLockingObjectMetadata.c)
 *     RaidSetTcgLockingObject @ 0x1C005AEF8 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1C005B384 (RaidSetTcgLockingObjectMetadata.c)
 * Callees:
 *     TcglibpCheckContext @ 0x1C007AAC4 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpTransaction @ 0x1C007F260 (TcglibpTransaction.c)
 */

__int64 __fastcall TcglibStopTransaction(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // r10d

  result = 3221225987LL;
  if ( a3 != -1073741309 )
  {
    result = TcglibpCheckContext(a1);
    if ( (int)result >= 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) == 1 )
      {
        return 2147483665LL;
      }
      else
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 32), 0, 1) == 1 )
        {
          LOBYTE(v7) = v8 < 0;
          result = TcglibpTransaction(a1, v6, 0LL, v7);
          if ( (int)result < 0 )
            result = TcglibpCheckError(a1, a2, (unsigned int)result);
        }
        else
        {
          result = 3221225701LL;
        }
        _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
      }
    }
  }
  return result;
}
