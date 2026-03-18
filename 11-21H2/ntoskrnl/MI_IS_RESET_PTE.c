/*
 * XREFs of MI_IS_RESET_PTE @ 0x14033B640
 * Callers:
 *     MiWsleFlush @ 0x1402C1F50 (MiWsleFlush.c)
 *     MiCombineCandidate @ 0x1403137B0 (MiCombineCandidate.c)
 *     MiReservePageFileSpaceForPage @ 0x14033B190 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x14033E970 (MiActOnPte.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140C50780 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C50780;
  }
  return HIDWORD(a1) == 1;
}
