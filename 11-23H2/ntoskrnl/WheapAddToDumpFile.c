/*
 * XREFs of WheapAddToDumpFile @ 0x140611048
 * Callers:
 *     WheaRecoveryBugCheck @ 0x140610B10 (WheaRecoveryBugCheck.c)
 *     WheaReportHwError @ 0x140610B80 (WheaReportHwError.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038849C (IoAddTriageDumpDataBlock.c)
 */

char __fastcall WheapAddToDumpFile(__int64 a1, int a2)
{
  char result; // al

  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) != 0 )
      return IoAddTriageDumpDataBlock(a1 & 0xFFFFF000, (PVOID)(((a1 & 0xFFF) + 4095 + a2) & 0xFFFFF000));
  }
  return result;
}
