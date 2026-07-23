/*
 * XREFs of BcdDeleteObject @ 0x140805284
 * Callers:
 *     BiBindEfiBootManager @ 0x140805090 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140805D6C (BiBindEfiEntries.c)
 *     PopBcdRegenerateResumeObject @ 0x14099CCB4 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x14037431C (BiSetFirmwareModifiedFromObject.c)
 *     BiIsOfflineHandle @ 0x140374424 (BiIsOfflineHandle.c)
 *     BiDeleteKey @ 0x140805E5C (BiDeleteKey.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140806574 (BiIsLinkedToFirmwareVariable.c)
 *     BiAcquireBcdSyncMutant @ 0x140807BB4 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x140807C5C (BiReleaseBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdDeleteObject(HANDLE BcdObjectHandle)
{
  __int64 v2; // rcx
  char v3; // di
  NTSTATUS result; // eax
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  NTSTATUS v7; // ebx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdObjectHandle);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( result >= 0 )
  {
    if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(BcdObjectHandle, 0LL) )
      BiSetFirmwareModifiedFromObject(BcdObjectHandle);
    v5 = BiDeleteKey(BcdObjectHandle);
    LOBYTE(v6) = v3;
    v7 = v5;
    BiReleaseBcdSyncMutant(v6);
    return v7;
  }
  return result;
}
