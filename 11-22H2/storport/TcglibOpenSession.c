/*
 * XREFs of TcglibOpenSession @ 0x1C0079C54
 * Callers:
 *     RaidActivateTcgLocking @ 0x1C0057A8C (RaidActivateTcgLocking.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x1C0057D08 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x1C005806C (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x1C0058938 (RaidDeassignTcgLockingObject.c)
 *     RaidEraseTcgLockingObject @ 0x1C0058E64 (RaidEraseTcgLockingObject.c)
 *     RaidFillTcgAuthKey @ 0x1C0059084 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x1C00599DC (RaidGetTcgLockingObject.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x1C0059B18 (RaidGetTcgLockingObjectMetadata.c)
 *     RaidGetTcgLockingObjects @ 0x1C0059D28 (RaidGetTcgLockingObjects.c)
 *     RaidRevertTcgConfiguration @ 0x1C005ABA4 (RaidRevertTcgConfiguration.c)
 *     RaidSetTcgLockingObject @ 0x1C005AEF8 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectAuthKey @ 0x1C005B184 (RaidSetTcgLockingObjectAuthKey.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1C005B384 (RaidSetTcgLockingObjectMetadata.c)
 *     RaidSetTcgSpAuthorityKey @ 0x1C005B5F4 (RaidSetTcgSpAuthorityKey.c)
 * Callees:
 *     TcglibpOpenSessionWithRetry @ 0x1C007F0A0 (TcglibpOpenSessionWithRetry.c)
 */

__int64 __fastcall TcglibOpenSession(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), 1, 0) == 1 )
    return 2147483665LL;
  result = TcglibpOpenSessionWithRetry(a1, a3, (a2 != 1) + 0x20500000001LL);
  if ( (int)result < 0 )
    _InterlockedExchange((volatile __int32 *)(a1 + 8), 0);
  return result;
}
