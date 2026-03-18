/*
 * XREFs of KiIsAddressRangeValid @ 0x14038840C
 * Callers:
 *     IopAddTriageDumpDataBlock @ 0x14038833C (IopAddTriageDumpDataBlock.c)
 *     KeAddTriageDumpDataBlock @ 0x1403A8100 (KeAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x1403A8334 (KiValidateTriageDumpDataArray.c)
 *     IoFillTriageDumpBuffer @ 0x14054FED0 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x140550704 (IoGetLoadedDriverInfo.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140551A74 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140553AE4 (IopUpdateMinidumpContext.c)
 *     IopWriteDriverList @ 0x140554074 (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x14055BA58 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14055BAC0 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14055BB80 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14055BD1C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14055BDD8 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14055BEE0 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14055BFD0 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14055C14C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14055C24C (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14055C2E0 (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x14055CD90 (IopCalculateStackInformation.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140569C94 (KiCollectTriageDumpDataBlocks.c)
 *     PopInternalSaveStackToDumpFile @ 0x14058321C (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402E5FB0 (MmIsAddressValidEx.c)
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
