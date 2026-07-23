/*
 * XREFs of KiIsAddressRangeValid @ 0x1403885EC
 * Callers:
 *     IopAddTriageDumpDataBlock @ 0x14038851C (IopAddTriageDumpDataBlock.c)
 *     KeAddTriageDumpDataBlock @ 0x1403A82E0 (KeAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x1403A8514 (KiValidateTriageDumpDataArray.c)
 *     IoFillTriageDumpBuffer @ 0x140550590 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x140550DC4 (IoGetLoadedDriverInfo.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140552134 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x1405541A4 (IopUpdateMinidumpContext.c)
 *     IopWriteDriverList @ 0x140554734 (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x14055C118 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14055C180 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14055C240 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14055C3DC (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14055C498 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14055C5A0 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14055C690 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14055C80C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14055C90C (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14055C9A0 (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x14055D450 (IopCalculateStackInformation.c)
 *     KiCollectTriageDumpDataBlocks @ 0x14056A354 (KiCollectTriageDumpDataBlocks.c)
 *     PopInternalSaveStackToDumpFile @ 0x14058370C (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402E6240 (MmIsAddressValidEx.c)
 */

char __fastcall KiIsAddressRangeValid(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( !v3 )
    return 1;
  while ( v2 >= 0x10000 && MmIsAddressValidEx(v2) )
  {
    v2 += 4096LL;
    if ( !--v3 )
      return 1;
  }
  return 0;
}
