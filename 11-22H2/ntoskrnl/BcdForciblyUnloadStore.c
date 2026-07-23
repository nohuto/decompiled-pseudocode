/*
 * XREFs of BcdForciblyUnloadStore @ 0x140A5C300
 * Callers:
 *     BiCleanupLoadedStores @ 0x14080A164 (BiCleanupLoadedStores.c)
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 * Callees:
 *     BiIsSynchFirmwareEntries @ 0x140374294 (BiIsSynchFirmwareEntries.c)
 *     BiIsOfflineHandle @ 0x140374424 (BiIsOfflineHandle.c)
 *     BiIsSystemStore @ 0x1408054D4 (BiIsSystemStore.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x140807BB4 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x140807C5C (BiReleaseBcdSyncMutant.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140A5D454 (BiExportStoreAlterationsToFirmware.c)
 *     BiUnloadHiveByHandle @ 0x140A5D574 (BiUnloadHiveByHandle.c)
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
