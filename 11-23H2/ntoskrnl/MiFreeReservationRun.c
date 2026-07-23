/*
 * XREFs of MiFreeReservationRun @ 0x1407B7424
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x14068196C (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1407B73D8 (MiFreeReservationRuns.c)
 * Callees:
 *     MiGetPageFileHigh @ 0x140201DB0 (MiGetPageFileHigh.c)
 *     MiUpdatePageFileHighInPte @ 0x1402858CC (MiUpdatePageFileHighInPte.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 */

void __fastcall MiFreeReservationRun(__int64 a1, __int64 a2)
{
  unsigned __int64 PageFileHigh; // rdi
  __int64 updated; // rax
  bool v6; // zf

  if ( *(_DWORD *)(a2 + 8) )
  {
    PageFileHigh = MiGetPageFileHigh(*(_QWORD *)a2);
    do
    {
      MiReleasePageFileInfo(a1, *(_QWORD *)a2, 0);
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)a2, ++PageFileHigh);
      v6 = (*(_DWORD *)(a2 + 8))-- == 1;
      *(_QWORD *)a2 = updated;
    }
    while ( !v6 );
  }
}
