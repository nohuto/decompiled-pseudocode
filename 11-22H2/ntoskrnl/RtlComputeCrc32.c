/*
 * XREFs of RtlComputeCrc32 @ 0x14032D240
 * Callers:
 *     SmDecompressBuffer @ 0x1402F57B0 (SmDecompressBuffer.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1405C7AE8 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x1406743AC (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140674434 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14067489C (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x140674B5C (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1407A8B38 (PopUpdateBsdPowerTransitionReferenceTime.c)
 *     PoClearTransitionMarker @ 0x1408030CC (PoClearTransitionMarker.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA618 (SmKmStoreFileWriteHeader.c)
 *     ExpSingleStringCheck @ 0x140B6229C (ExpSingleStringCheck.c)
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
