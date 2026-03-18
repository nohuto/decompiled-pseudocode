/*
 * XREFs of BcdCloseStore @ 0x140805378
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x140611E00 (WheaPersistBadPageToBcd.c)
 *     PoInitHiberServices @ 0x14080406C (PoInitHiberServices.c)
 *     PopBcdClose @ 0x1408043E0 (PopBcdClose.c)
 *     BiLoadSystemStore @ 0x1408046A8 (BiLoadSystemStore.c)
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1409886A0 (PopFreeHiberContext.c)
 *     SepSecureBootCorrectBcd @ 0x1409D0A14 (SepSecureBootCorrectBcd.c)
 *     BapdpProcessBCDCache @ 0x140B38EBC (BapdpProcessBCDCache.c)
 * Callees:
 *     BiIsSynchFirmwareEntries @ 0x140374294 (BiIsSynchFirmwareEntries.c)
 *     BiIsOfflineHandle @ 0x140374424 (BiIsOfflineHandle.c)
 *     BiCloseStore @ 0x140804B8C (BiCloseStore.c)
 *     BiIsSystemStore @ 0x1408054D4 (BiIsSystemStore.c)
 *     BiIsWinPEBoot @ 0x140805598 (BiIsWinPEBoot.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x140807BB4 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x140807C5C (BiReleaseBcdSyncMutant.c)
 */

__int64 __fastcall BcdCloseStore(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v10; // r8d

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 < 0 )
  {
    BiLogMessage(4LL, L"BcdCloseStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v10;
  }
  else
  {
    if ( (unsigned __int8)BiIsSystemStore(a1) )
    {
      v5 = BiIsSynchFirmwareEntries(a1) ? 4 : 0;
      if ( (unsigned __int8)BiIsWinPEBoot() )
        v5 |= 2u;
    }
    else
    {
      v5 = 2;
    }
    BiLogMessage(2LL, L"Closing store. Flags: 0x%x", v5);
    v6 = BiCloseStore(a1, v5);
    LOBYTE(v7) = v3;
    v8 = v6;
    BiReleaseBcdSyncMutant(v7);
    return v8;
  }
}
