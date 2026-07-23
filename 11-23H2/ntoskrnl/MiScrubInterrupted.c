/*
 * XREFs of MiScrubInterrupted @ 0x14065E960
 * Callers:
 *     MiScrubLargeMappedPage @ 0x14065E98C (MiScrubLargeMappedPage.c)
 *     MiScrubLargePage @ 0x14065EEBC (MiScrubLargePage.c)
 *     MiScrubActiveLargePage @ 0x140A46618 (MiScrubActiveLargePage.c)
 *     MiScrubLargePageRegions @ 0x140A466C0 (MiScrubLargePageRegions.c)
 *     MiScrubNode @ 0x140A46920 (MiScrubNode.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiScrubInterrupted(__int64 a1)
{
  _BOOL8 result; // rax

  result = 1LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 1376LL) & 1) == 0 )
    return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 4LL) != 0;
  return result;
}
