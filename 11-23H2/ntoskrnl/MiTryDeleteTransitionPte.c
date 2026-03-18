/*
 * XREFs of MiTryDeleteTransitionPte @ 0x1402F4108
 * Callers:
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiDeleteMergedPte @ 0x1402F408C (MiDeleteMergedPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteTransitionPte @ 0x1402DCE80 (MiDeleteTransitionPte.c)
 *     MiLockTransitionLeafPageEx @ 0x140347CA8 (MiLockTransitionLeafPageEx.c)
 */

__int64 __fastcall MiTryDeleteTransitionPte(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rax

  if ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter2) & 0x400) != 0 )
    return 1LL;
  v2 = MiLockTransitionLeafPageEx(BugCheckParameter2);
  if ( !v2 )
    return 1LL;
  else
    return MiDeleteTransitionPte(BugCheckParameter2, v2, 0x11u, 1);
}
