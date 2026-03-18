/*
 * XREFs of BcdCloseObject @ 0x140812D00
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x140644D30 (WheaPersistBadPageToBcd.c)
 *     PopBcdEstablishResumeObject @ 0x140800680 (PopBcdEstablishResumeObject.c)
 *     PopBcdSetPendingResume @ 0x140800808 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x140800968 (PopBcdClearPendingResume.c)
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14099C7F4 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopAdaptivePrepareForSystemInitiatedReboot @ 0x14099C9CC (PopAdaptivePrepareForSystemInitiatedReboot.c)
 *     PopBcdRegenerateResumeObject @ 0x14099D244 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x1409CDCC8 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140A1D134 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140A1E118 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x140A1E354 (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x140A1E6EC (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x140A1E890 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x140A1F234 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140A1FB1C (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140A20DF8 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x140A210D4 (BiUpdateEfiEntry.c)
 *     PopAdaptiveInitializeBootContext @ 0x140AF3434 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1403A7864 (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x1408132F0 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1408134D8 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14081369C (BiAcquireBcdSyncMutant.c)
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
