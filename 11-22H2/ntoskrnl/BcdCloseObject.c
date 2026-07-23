/*
 * XREFs of BcdCloseObject @ 0x140807480
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059DEF8 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x140611E00 (WheaPersistBadPageToBcd.c)
 *     PoInitHiberServices @ 0x14080406C (PoInitHiberServices.c)
 *     PopBcdClearPendingResume @ 0x1408041B8 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140804514 (PopBcdEstablishResumeObject.c)
 *     BiBindEfiBootManager @ 0x140805090 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140805D6C (BiBindEfiEntries.c)
 *     BiUpdateBcdObject @ 0x140806888 (BiUpdateBcdObject.c)
 *     BiBuildIdentifierList @ 0x140806BE8 (BiBuildIdentifierList.c)
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14099B870 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdRegenerateResumeObject @ 0x14099CCB4 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x14099CEF0 (PopBcdSetPendingResume.c)
 *     SepSecureBootCorrectBcd @ 0x1409D0A14 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140A5C764 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140A5D834 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140A5DE50 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140A5E63C (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x140A5EF5C (BiUpdateEfiEntry.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B3963C (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140374424 (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x1408077DC (BiCloseKey.c)
 *     BiAcquireBcdSyncMutant @ 0x140807BB4 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x140807C5C (BiReleaseBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdCloseObject(HANDLE BcdObjectHandle)
{
  __int64 v2; // rcx
  char v3; // di
  NTSTATUS result; // eax
  __int64 v5; // rcx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdObjectHandle);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( result >= 0 )
  {
    BiCloseKey(BcdObjectHandle);
    LOBYTE(v5) = v3;
    return BiReleaseBcdSyncMutant(v5);
  }
  return result;
}
