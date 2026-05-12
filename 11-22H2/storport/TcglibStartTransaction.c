/*
 * XREFs of TcglibStartTransaction @ 0x1C007A908
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

__int64 __fastcall TcglibStartTransaction(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int64 v5; // r8
  int v6; // eax

  v4 = TcglibpCheckContext(a1);
  if ( v4 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 28), 1, 0) == 1 )
    {
      return (unsigned int)-2147483631;
    }
    else
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), 1, 0) )
      {
        v4 = -1073741595;
      }
      else
      {
        LOBYTE(v5) = 1;
        v6 = TcglibpTransaction(a1, a2, v5, 0LL);
        v4 = v6;
        if ( v6 < 0 )
        {
          v4 = TcglibpCheckError(a1, a2, (unsigned int)v6);
          _InterlockedExchange((volatile __int32 *)(a2 + 32), 0);
        }
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return (unsigned int)v4;
}
