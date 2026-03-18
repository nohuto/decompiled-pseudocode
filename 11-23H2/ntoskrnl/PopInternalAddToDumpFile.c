/*
 * XREFs of PopInternalAddToDumpFile @ 0x140583160
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x140551A74 (IopAddBugcheckTriageDataFromParameters.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140569C94 (KiCollectTriageDumpDataBlocks.c)
 *     PopIrpWatchdogBugcheck @ 0x140583394 (PopIrpWatchdogBugcheck.c)
 *     PopSetRange @ 0x14058EF1C (PopSetRange.c)
 *     PopPowerActionWatchdog @ 0x14058F430 (PopPowerActionWatchdog.c)
 *     PopThermalWorker @ 0x140847830 (PopThermalWorker.c)
 *     PopAllocateHiberContext @ 0x140987D38 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1409885F0 (PopFreeHiberContext.c)
 *     PoShutdownBugCheck @ 0x1409895B0 (PoShutdownBugCheck.c)
 *     PopCreateDumpMdl @ 0x140AA2224 (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x140AA2334 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x140AA332C (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140AA3B80 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140AA3FB0 (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140AA450C (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140AA4980 (PopSaveHiberContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403882BC (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x14058321C (PopInternalSaveStackToDumpFile.c)
 */

char __fastcall PopInternalAddToDumpFile(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // rdx

  if ( a1 )
  {
    if ( a2 )
      v4 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
    else
      LODWORD(v4) = 1;
    IoAddTriageDumpDataBlock(a1 & 0xFFFFF000, (PVOID)(unsigned int)((_DWORD)v4 << 12));
  }
  if ( a3 )
    PopInternalSaveStackToDumpFile(a3);
  IoAddTriageDumpDataBlock((ULONG)&PopHiberInfo, (PVOID)0xD8);
  IoAddTriageDumpDataBlock((ULONG)&PopAction, (PVOID)0x1D0);
  if ( *(_QWORD *)&qword_140C3D0F8 )
    IoAddTriageDumpDataBlock(qword_140C3D0F8, (PVOID)0x1D8);
  if ( qword_140C3D100 )
    IoAddTriageDumpDataBlock(qword_140C3D100, (PVOID)0x1C8);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x220);
}
