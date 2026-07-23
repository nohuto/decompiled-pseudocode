/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x14032D5E4
 * Callers:
 *     SmCreatePartition @ 0x140706638 (SmCreatePartition.c)
 *     SleepstudyHelperBuildBlocker @ 0x1407A82B0 (SleepstudyHelperBuildBlocker.c)
 *     SmStoreSetProcessVaRanges @ 0x1407B750C (SmStoreSetProcessVaRanges.c)
 *     SmpKeyedStoreCreate @ 0x1407B7770 (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x1407B795C (SmProcessCreateRequest.c)
 *     SmKmStoreCreatePrepare @ 0x1407B7CBC (SmKmStoreCreatePrepare.c)
 *     SmKmStoreAdd @ 0x1407B7D4C (SmKmStoreAdd.c)
 *     SleepstudyHelperCreateLibrary @ 0x140848C30 (SleepstudyHelperCreateLibrary.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1409A1ED0 (SleepstudyHelperCreateBlockerData.c)
 *     SmProcessListRequest @ 0x1409D6FAC (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1409D7578 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1409D809C (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x1409D8C24 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x1409D9374 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x1409D955C (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA768 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x1409DAA2C (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x1409DB454 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x1409DB974 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x1409DBD44 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SSHSupportAllocateNonPaged(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(64LL, a1, a2);
}
