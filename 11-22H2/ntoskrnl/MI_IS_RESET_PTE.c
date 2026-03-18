/*
 * XREFs of MI_IS_RESET_PTE @ 0x140285210
 * Callers:
 *     MiCombineCandidate @ 0x140281E90 (MiCombineCandidate.c)
 *     MiCheckReservePageFileSpace @ 0x140282EC0 (MiCheckReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x140284D50 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x140293FB4 (MiActOnPte.c)
 *     MiRestoreTransitionPte @ 0x14033501C (MiRestoreTransitionPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140C65C40 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C65C40;
  }
  return HIDWORD(a1) == 1;
}
