/*
 * XREFs of RtlComputeCrc32 @ 0x14032D670
 * Callers:
 *     SmDecompressBuffer @ 0x1402F5A40 (SmDecompressBuffer.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1405C7FC8 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x14067488C (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140674914 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x140674D7C (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14067503C (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1407A8778 (PopUpdateBsdPowerTransitionReferenceTime.c)
 *     PoClearTransitionMarker @ 0x14085E508 (PoClearTransitionMarker.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA768 (SmKmStoreFileWriteHeader.c)
 *     ExpSingleStringCheck @ 0x140B55428 (ExpSingleStringCheck.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
ULONG32 __cdecl RtlComputeCrc32(ULONG32 PartialCrc, PVOID Buffer, ULONG Length)
{
  ULONG32 v4; // ecx
  char v5; // al

  v4 = ~PartialCrc;
  if ( Length )
  {
    *(_QWORD *)&Length = Length;
    do
    {
      v5 = *(_BYTE *)Buffer;
      Buffer = (char *)Buffer + 1;
      v4 = *((_DWORD *)RtlCrc32Table + (unsigned __int8)(v5 ^ v4)) ^ (v4 >> 8);
      --*(_QWORD *)&Length;
    }
    while ( *(_QWORD *)&Length );
  }
  return ~v4;
}
