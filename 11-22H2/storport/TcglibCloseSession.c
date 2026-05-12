/*
 * XREFs of TcglibCloseSession @ 0x1C0079424
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
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpAllocateRequestResources @ 0x1C007C67C (TcglibpAllocateRequestResources.c)
 *     TcglibpCloseSession @ 0x1C007ECFC (TcglibpCloseSession.c)
 */

__int64 __fastcall TcglibCloseSession(__int64 a1, __int64 a2)
{
  int RequestResources; // edx
  __int32 v5; // ebp

  RequestResources = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 28), 1, 0) == 1 )
  {
    return (unsigned int)-2147483631;
  }
  else
  {
    v5 = _InterlockedExchange((volatile __int32 *)a2, 3);
    if ( v5 == 2 )
    {
      if ( !*(_QWORD *)(a2 + 40)
        && !*(_QWORD *)(a2 + 48)
        && (LOBYTE(RequestResources) = 1,
            RequestResources = TcglibpAllocateRequestResources(
                                 *(_QWORD *)a1,
                                 RequestResources,
                                 *(unsigned __int16 *)(a2 + 24),
                                 2048,
                                 a2 + 40,
                                 a2 + 48),
            RequestResources < 0)
        || (RequestResources = TcglibpCloseSession(a1, a2), RequestResources < 0) )
      {
        RequestResources = TcglibpCheckError(a1, a2, (unsigned int)RequestResources);
      }
    }
    _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    if ( ((v5 - 1) & 0xFFFFFFFC) != 0 || v5 == 3 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      _InterlockedExchange((volatile __int32 *)(a1 + 8), 0);
    }
  }
  return (unsigned int)RequestResources;
}
