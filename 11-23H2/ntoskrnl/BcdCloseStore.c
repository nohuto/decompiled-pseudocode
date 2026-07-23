/*
 * XREFs of BcdCloseStore @ 0x1408030C4
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1406122E0 (WheaPersistBadPageToBcd.c)
 *     PoInitHiberServices @ 0x140801DB8 (PoInitHiberServices.c)
 *     PopBcdClose @ 0x14080212C (PopBcdClose.c)
 *     BiLoadSystemStore @ 0x1408023F4 (BiLoadSystemStore.c)
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1409887F0 (PopFreeHiberContext.c)
 *     SepSecureBootCorrectBcd @ 0x1409D0B64 (SepSecureBootCorrectBcd.c)
 *     BapdpProcessBCDCache @ 0x140B4F584 (BapdpProcessBCDCache.c)
 * Callees:
 *     BiIsSynchFirmwareEntries @ 0x140373DE0 (BiIsSynchFirmwareEntries.c)
 *     BiIsOfflineHandle @ 0x140373F70 (BiIsOfflineHandle.c)
 *     BiCloseStore @ 0x1408028D8 (BiCloseStore.c)
 *     BiIsSystemStore @ 0x140803220 (BiIsSystemStore.c)
 *     BiIsWinPEBoot @ 0x1408032E4 (BiIsWinPEBoot.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x140805904 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1408059AC (BiReleaseBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdCloseStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  NTSTATUS v10; // r8d

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 < 0 )
  {
    BiLogMessage(4LL, L"BcdCloseStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v10;
  }
  else
  {
    if ( (unsigned __int8)BiIsSystemStore(BcdStoreHandle) )
    {
      v5 = BiIsSynchFirmwareEntries((char)BcdStoreHandle) ? 4 : 0;
      if ( (unsigned __int8)BiIsWinPEBoot() )
        v5 |= 2u;
    }
    else
    {
      v5 = 2;
    }
    BiLogMessage(2LL, L"Closing store. Flags: 0x%x", v5);
    v6 = BiCloseStore((__int64)BcdStoreHandle, v5);
    LOBYTE(v7) = v3;
    v8 = v6;
    BiReleaseBcdSyncMutant(v7);
    return v8;
  }
}
