/*
 * XREFs of BcdCloseStore @ 0x1408124A0
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x140644D30 (WheaPersistBadPageToBcd.c)
 *     PopFreeHiberContext @ 0x140800338 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 *     BiLoadSystemStore @ 0x140811FE0 (BiLoadSystemStore.c)
 *     PopBcdClose @ 0x14081D368 (PopBcdClose.c)
 *     PoInitHiberServices @ 0x1408288D4 (PoInitHiberServices.c)
 *     PopAdaptivePrepareForSystemInitiatedReboot @ 0x14099C9CC (PopAdaptivePrepareForSystemInitiatedReboot.c)
 *     SepSecureBootCorrectBcd @ 0x1409CDCC8 (SepSecureBootCorrectBcd.c)
 *     BapdpProcessBCDCache @ 0x140B1C78C (BapdpProcessBCDCache.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1403A7864 (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x1403A78AC (BiIsSynchFirmwareEntries.c)
 *     BiCloseStore @ 0x140811EB0 (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x140812540 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x1408127B8 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x1408134D8 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14081369C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1408138F0 (BiLogMessage.c)
 */

__int64 __fastcall BcdCloseStore(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v11; // r8d

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 < 0 )
  {
    BiLogMessage(4LL, L"BcdCloseStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v11;
  }
  else
  {
    if ( (unsigned __int8)BiIsSystemStore(a1, v5, (unsigned int)v4) )
    {
      v6 = BiIsSynchFirmwareEntries(a1) ? 4 : 0;
      if ( (unsigned __int8)BiIsWinPEBoot() )
        v6 |= 2u;
    }
    else
    {
      v6 = 2;
    }
    BiLogMessage(2LL, L"Closing store. Flags: 0x%x", v6);
    v7 = BiCloseStore(a1, v6);
    LOBYTE(v8) = v3;
    v9 = v7;
    BiReleaseBcdSyncMutant(v8);
    return v9;
  }
}
