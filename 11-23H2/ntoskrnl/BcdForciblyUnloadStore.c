/*
 * XREFs of BcdForciblyUnloadStore @ 0x140A5C540
 * Callers:
 *     BiCleanupLoadedStores @ 0x140807EB4 (BiCleanupLoadedStores.c)
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 * Callees:
 *     BiIsSynchFirmwareEntries @ 0x140373DE0 (BiIsSynchFirmwareEntries.c)
 *     BiIsOfflineHandle @ 0x140373F70 (BiIsOfflineHandle.c)
 *     BiIsSystemStore @ 0x140803220 (BiIsSystemStore.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x140805904 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1408059AC (BiReleaseBcdSyncMutant.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140A5D694 (BiExportStoreAlterationsToFirmware.c)
 *     BiUnloadHiveByHandle @ 0x140A5D7B4 (BiUnloadHiveByHandle.c)
 */

NTSTATUS __cdecl BcdForciblyUnloadStore(HANDLE BcdStoreHandle)
{
  char IsOfflineHandle; // si
  NTSTATUS v3; // eax
  NTSTATUS v4; // r8d
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  NTSTATUS v8; // eax

  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( v3 >= 0 )
  {
    v6 = 0;
    if ( BiIsSystemStore((__int64)BcdStoreHandle) && BiIsSynchFirmwareEntries((char)BcdStoreHandle) )
    {
      BiLogMessage(2LL, L"Exporting forcible unload to firmware");
      v6 = BiExportStoreAlterationsToFirmware(BcdStoreHandle);
    }
    LOBYTE(v7) = 1;
    v8 = BiUnloadHiveByHandle(BcdStoreHandle, v7);
    if ( v6 < 0 )
      BiLogMessage(4LL, L"Failed to export unload alterations to firmware. Status: %x", (unsigned int)v6);
    else
      v6 = v8;
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v6;
  }
  else
  {
    BiLogMessage(4LL, L"BcdForciblyUnloadStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
    return v4;
  }
}
