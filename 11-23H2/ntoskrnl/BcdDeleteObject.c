/*
 * XREFs of BcdDeleteObject @ 0x140802FD0
 * Callers:
 *     BiBindEfiBootManager @ 0x140802DDC (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140803AB8 (BiBindEfiEntries.c)
 *     PopBcdRegenerateResumeObject @ 0x14099CE04 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x140373E68 (BiSetFirmwareModifiedFromObject.c)
 *     BiIsOfflineHandle @ 0x140373F70 (BiIsOfflineHandle.c)
 *     BiDeleteKey @ 0x140803BA8 (BiDeleteKey.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1408042C0 (BiIsLinkedToFirmwareVariable.c)
 *     BiAcquireBcdSyncMutant @ 0x140805904 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1408059AC (BiReleaseBcdSyncMutant.c)
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
