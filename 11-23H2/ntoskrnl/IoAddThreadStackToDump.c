/*
 * XREFs of IoAddThreadStackToDump @ 0x14055CD30
 * Callers:
 *     <none>
 * Callees:
 *     MmAddRangeToCrashDump @ 0x140630690 (MmAddRangeToCrashDump.c)
 */

void __fastcall IoAddThreadStackToDump(__int64 a1, _QWORD *a2, __int64 a3)
{
  if ( *(int *)(a3 + 8) >= 0 )
    *(_DWORD *)(a3 + 8) = MmAddRangeToCrashDump(*(_QWORD *)a3, a2[1], *a2 - a2[1]);
}
