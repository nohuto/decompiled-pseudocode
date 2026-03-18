/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140355070
 * Callers:
 *     MiCombineCandidate @ 0x140281E90 (MiCombineCandidate.c)
 *     MiIssueHardFault @ 0x1402A0F90 (MiIssueHardFault.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x1406640F8 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1406649B8 (MiHandleForkTransitionPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_SOFTWARE_PTE_SHADOW_STACK(_QWORD *a1)
{
  if ( (*a1 & 0x400LL) != 0 )
    return 0LL;
  else
    return (*a1 >> 26) & 1LL;
}
