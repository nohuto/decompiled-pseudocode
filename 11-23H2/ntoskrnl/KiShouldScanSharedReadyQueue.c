/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x1403073C8
 * Callers:
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 *     KiUpdateRunTime @ 0x1402C7770 (KiUpdateRunTime.c)
 *     KiNormalPriorityReadyScan @ 0x140307080 (KiNormalPriorityReadyScan.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 34896) )
    return 1;
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    return *(_QWORD *)(a1 + 34880) != 0LL;
  return result;
}
