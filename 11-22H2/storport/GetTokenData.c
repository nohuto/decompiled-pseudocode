/*
 * XREFs of GetTokenData @ 0x1C007F440
 * Callers:
 *     ParseAssignNamespace @ 0x1C007AD40 (ParseAssignNamespace.c)
 *     ParseBandMetadata @ 0x1C007AE90 (ParseBandMetadata.c)
 *     ParseLockingObjectInfo @ 0x1C007B030 (ParseLockingObjectInfo.c)
 *     FindNamedToken @ 0x1C007BF28 (FindNamedToken.c)
 *     ParseGetTableColumnData @ 0x1C007C270 (ParseGetTableColumnData.c)
 *     ParseSyncSessionData @ 0x1C007E590 (ParseSyncSessionData.c)
 *     ParseTPerProperties @ 0x1C007E6C0 (ParseTPerProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTokenData(__int64 a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 7) <= 0xA )
  {
    v1 = a1 + 16;
    if ( *(_DWORD *)(a1 + 12) > 8u )
      return *(_QWORD *)v1;
  }
  return v1;
}
