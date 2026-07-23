/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140355810
 * Callers:
 *     MiCombineCandidate @ 0x140282240 (MiCombineCandidate.c)
 *     MiIssueHardFault @ 0x1402A1340 (MiIssueHardFault.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x1406645D8 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140664E98 (MiHandleForkTransitionPte.c)
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
