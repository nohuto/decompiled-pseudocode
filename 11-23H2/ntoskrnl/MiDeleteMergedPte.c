/*
 * XREFs of MiDeleteMergedPte @ 0x1402F431C
 * Callers:
 *     MiDecrementCloneBlock @ 0x1402F3EB8 (MiDecrementCloneBlock.c)
 * Callees:
 *     MiReleasePageFileSpace @ 0x14021941C (MiReleasePageFileSpace.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 *     MiTryDeleteTransitionPte @ 0x1402F4398 (MiTryDeleteTransitionPte.c)
 */

__int64 __fastcall MiDeleteMergedPte(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned __int8 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  result = MI_READ_PTE_LOCK_FREE(a2);
  if ( result )
  {
    v5 = MiLockProtoPoolPage(a2, &v8);
    v6 = MiTryDeleteTransitionPte(a2);
    if ( v6 == 1 )
    {
      v7 = MI_READ_PTE_LOCK_FREE(a2);
      MiReleasePageFileSpace(a1, v7, 1);
    }
    MiUnlockProtoPoolPage(v5, v8);
    return v6;
  }
  return result;
}
