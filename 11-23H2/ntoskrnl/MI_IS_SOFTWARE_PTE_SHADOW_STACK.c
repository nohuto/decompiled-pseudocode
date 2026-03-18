/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140355670
 * Callers:
 *     MiCombineCandidate @ 0x140281FB0 (MiCombineCandidate.c)
 *     MiIssueHardFault @ 0x1402A10B0 (MiIssueHardFault.c)
 *     MiBuildForkPte @ 0x140662200 (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x140664088 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140664948 (MiHandleForkTransitionPte.c)
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
