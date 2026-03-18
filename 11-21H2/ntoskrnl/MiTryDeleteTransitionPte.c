/*
 * XREFs of MiTryDeleteTransitionPte @ 0x140239CA8
 * Callers:
 *     MiDeleteMergedPte @ 0x140239C2C (MiDeleteMergedPte.c)
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x1402C3100 (MiDeleteTransitionPte.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTryDeleteTransitionPte(ULONG_PTR BugCheckParameter2)
{
  if ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter2) & 0x400) != 0 || !MiLockTransitionLeafPageEx(BugCheckParameter2) )
    return 1LL;
  else
    return MiDeleteTransitionPte(BugCheckParameter2);
}
