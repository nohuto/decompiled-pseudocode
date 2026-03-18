/*
 * XREFs of RtlComputeCrc32 @ 0x14032D3E0
 * Callers:
 *     SmDecompressBuffer @ 0x1402F57B0 (SmDecompressBuffer.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1405C7A58 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x14067433C (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1406743C4 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14067482C (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x140674AEC (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1407A8588 (PopUpdateBsdPowerTransitionReferenceTime.c)
 *     PoClearTransitionMarker @ 0x14085E2C8 (PoClearTransitionMarker.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA568 (SmKmStoreFileWriteHeader.c)
 *     ExpSingleStringCheck @ 0x140B55428 (ExpSingleStringCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlComputeCrc32(int a1, char *a2, __int64 a3)
{
  unsigned int v4; // ecx
  char v5; // al

  v4 = ~a1;
  if ( (_DWORD)a3 )
  {
    a3 = (unsigned int)a3;
    do
    {
      v5 = *a2++;
      v4 = *((_DWORD *)RtlCrc32Table + (unsigned __int8)(v5 ^ v4)) ^ (v4 >> 8);
      --a3;
    }
    while ( a3 );
  }
  return ~v4;
}
