/*
 * XREFs of PopInternalAddToDumpFile @ 0x140583650
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x140552134 (IopAddBugcheckTriageDataFromParameters.c)
 *     KiCollectTriageDumpDataBlocks @ 0x14056A354 (KiCollectTriageDumpDataBlocks.c)
 *     PopIrpWatchdogBugcheck @ 0x140583884 (PopIrpWatchdogBugcheck.c)
 *     PopSetRange @ 0x14058F40C (PopSetRange.c)
 *     PopPowerActionWatchdog @ 0x14058F920 (PopPowerActionWatchdog.c)
 *     PopThermalWorker @ 0x140847B30 (PopThermalWorker.c)
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1409887F0 (PopFreeHiberContext.c)
 *     PoShutdownBugCheck @ 0x1409897B0 (PoShutdownBugCheck.c)
 *     PopCreateDumpMdl @ 0x140AA2094 (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x140AA21A4 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x140AA319C (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140AA39F0 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140AA3E20 (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140AA437C (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140AA47F0 (PopSaveHiberContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038849C (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x14058370C (PopInternalSaveStackToDumpFile.c)
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
  if ( *(_QWORD *)&qword_140C3CDB8 )
    IoAddTriageDumpDataBlock(qword_140C3CDB8, (PVOID)0x1D8);
  if ( qword_140C3CDC0 )
    IoAddTriageDumpDataBlock(qword_140C3CDC0, (PVOID)0x1C8);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x220);
}
