/*
 * XREFs of BcdCloseObject @ 0x1408051D0
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059E358 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x1406122E0 (WheaPersistBadPageToBcd.c)
 *     PoInitHiberServices @ 0x140801DB8 (PoInitHiberServices.c)
 *     PopBcdClearPendingResume @ 0x140801F04 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140802260 (PopBcdEstablishResumeObject.c)
 *     BiBindEfiBootManager @ 0x140802DDC (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140803AB8 (BiBindEfiEntries.c)
 *     BiUpdateBcdObject @ 0x1408045D4 (BiUpdateBcdObject.c)
 *     BiBuildIdentifierList @ 0x140804938 (BiBuildIdentifierList.c)
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14099B9C0 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdRegenerateResumeObject @ 0x14099CE04 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x14099D040 (PopBcdSetPendingResume.c)
 *     SepSecureBootCorrectBcd @ 0x1409D0B64 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140A5C9A4 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140A5DA74 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140A5E090 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140A5E87C (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x140A5F19C (BiUpdateEfiEntry.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B35F44 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140373F70 (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x14080552C (BiCloseKey.c)
 *     BiAcquireBcdSyncMutant @ 0x140805904 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1408059AC (BiReleaseBcdSyncMutant.c)
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
