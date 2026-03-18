/*
 * XREFs of MI_IS_RESET_PTE @ 0x140285330
 * Callers:
 *     MiCombineCandidate @ 0x140281FB0 (MiCombineCandidate.c)
 *     MiCheckReservePageFileSpace @ 0x140282FE0 (MiCheckReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x140284E70 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x1402940D4 (MiActOnPte.c)
 *     MiRestoreTransitionPte @ 0x1403351BC (MiRestoreTransitionPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140C65B40 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C65B40;
  }
  return HIDWORD(a1) == 1;
}
