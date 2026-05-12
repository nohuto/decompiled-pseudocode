/*
 * XREFs of RtlStringCbCopyA @ 0x1C00422B0
 * Callers:
 *     RaidAddATADeviceIdMapping @ 0x1C0041710 (RaidAddATADeviceIdMapping.c)
 *     RaidAdapterStorageTcgResetState @ 0x1C0051834 (RaidAdapterStorageTcgResetState.c)
 *     RaidActivateTcgLocking @ 0x1C0057A8C (RaidActivateTcgLocking.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x1C0057D08 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x1C005806C (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x1C0058938 (RaidDeassignTcgLockingObject.c)
 *     RaidEraseTcgLockingObject @ 0x1C0058E64 (RaidEraseTcgLockingObject.c)
 *     RaidFillTcgAuthKey @ 0x1C0059084 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x1C00599DC (RaidGetTcgLockingObject.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x1C0059B18 (RaidGetTcgLockingObjectMetadata.c)
 *     RaidGetTcgLockingObjects @ 0x1C0059D28 (RaidGetTcgLockingObjects.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 *     RaidRefreshTcg @ 0x1C005AB14 (RaidRefreshTcg.c)
 *     RaidRevertTcgConfiguration @ 0x1C005ABA4 (RaidRevertTcgConfiguration.c)
 *     RaidSetTcgLockingObject @ 0x1C005AEF8 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectAuthKey @ 0x1C005B184 (RaidSetTcgLockingObjectAuthKey.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1C005B384 (RaidSetTcgLockingObjectMetadata.c)
 *     RaidSetTcgSpAuthorityKey @ 0x1C005B5F4 (RaidSetTcgSpAuthorityKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  size_t v3; // r9
  signed __int64 v4; // r8
  char v5; // al
  NTSTRSAFE_PSTR v6; // rax
  NTSTATUS result; // eax

  if ( cbDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v3 = 2147483646 - cbDest;
    v4 = pszSrc - pszDest;
    do
    {
      if ( !(v3 + cbDest) )
        break;
      v5 = pszDest[v4];
      if ( !v5 )
        break;
      *pszDest++ = v5;
      --cbDest;
    }
    while ( cbDest );
    v6 = pszDest - 1;
    if ( cbDest )
      v6 = pszDest;
    *v6 = 0;
    return cbDest == 0 ? 0x80000005 : 0;
  }
  return result;
}
