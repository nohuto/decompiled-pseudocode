/*
 * XREFs of BcdCloseObject @ 0x140804F00
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059DE68 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x140611D90 (WheaPersistBadPageToBcd.c)
 *     PoInitHiberServices @ 0x140801AE8 (PoInitHiberServices.c)
 *     PopBcdClearPendingResume @ 0x140801C34 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140801F90 (PopBcdEstablishResumeObject.c)
 *     BiBindEfiBootManager @ 0x140802B0C (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x1408037E8 (BiBindEfiEntries.c)
 *     BiUpdateBcdObject @ 0x140804304 (BiUpdateBcdObject.c)
 *     BiBuildIdentifierList @ 0x140804668 (BiBuildIdentifierList.c)
 *     PopAllocateHiberContext @ 0x140987D38 (PopAllocateHiberContext.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14099B7C0 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdRegenerateResumeObject @ 0x14099CC04 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x14099CE40 (PopBcdSetPendingResume.c)
 *     SepSecureBootCorrectBcd @ 0x1409D0964 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140A5C6F4 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140A5D7C4 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140A5DDE0 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140A5E5CC (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x140A5EEEC (BiUpdateEfiEntry.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B35F44 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140373DD0 (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x14080525C (BiCloseKey.c)
 *     BiAcquireBcdSyncMutant @ 0x140805634 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1408056DC (BiReleaseBcdSyncMutant.c)
 */

__int64 __fastcall BcdCloseObject(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 result; // rax
  __int64 v5; // rcx

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( (int)result >= 0 )
  {
    BiCloseKey(a1);
    LOBYTE(v5) = v3;
    return BiReleaseBcdSyncMutant(v5);
  }
  return result;
}
