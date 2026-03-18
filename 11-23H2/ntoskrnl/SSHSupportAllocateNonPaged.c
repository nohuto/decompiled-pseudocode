/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x14032D354
 * Callers:
 *     SmCreatePartition @ 0x140706428 (SmCreatePartition.c)
 *     SleepstudyHelperBuildBlocker @ 0x1407A80C0 (SleepstudyHelperBuildBlocker.c)
 *     SmStoreSetProcessVaRanges @ 0x1407B722C (SmStoreSetProcessVaRanges.c)
 *     SmpKeyedStoreCreate @ 0x1407B7490 (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x1407B767C (SmProcessCreateRequest.c)
 *     SmKmStoreCreatePrepare @ 0x1407B79DC (SmKmStoreCreatePrepare.c)
 *     SmKmStoreAdd @ 0x1407B7A6C (SmKmStoreAdd.c)
 *     SleepstudyHelperCreateLibrary @ 0x140848930 (SleepstudyHelperCreateLibrary.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1409A1CD0 (SleepstudyHelperCreateBlockerData.c)
 *     SmProcessListRequest @ 0x1409D6DAC (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1409D7378 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1409D7E9C (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x1409D8A24 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x1409D9174 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x1409D935C (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA568 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x1409DA82C (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x1409DB254 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x1409DB774 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x1409DBB44 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SSHSupportAllocateNonPaged(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(64LL, a1, a2);
}
