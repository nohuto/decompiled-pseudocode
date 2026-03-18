/*
 * XREFs of MiFreeReservationRun @ 0x1406EC2D4
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x1406EC158 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1406EC288 (MiFreeReservationRuns.c)
 * Callees:
 *     MiGetPageFileHigh @ 0x14025ECDC (MiGetPageFileHigh.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
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
