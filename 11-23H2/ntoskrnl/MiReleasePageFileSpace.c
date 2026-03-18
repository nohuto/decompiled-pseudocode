/*
 * XREFs of MiReleasePageFileSpace @ 0x14021941C
 * Callers:
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiDeleteSubsectionPages @ 0x140218EF0 (MiDeleteSubsectionPages.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x14027A5C0 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x14027F7D0 (MiDecommitPages.c)
 *     MiActOnPte @ 0x1402940D4 (MiActOnPte.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D8FE0 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     MiDeleteMergedPte @ 0x1402F408C (MiDeleteMergedPte.c)
 *     MiDeletePerSessionProtos @ 0x14033EBC4 (MiDeletePerSessionProtos.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140348168 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPurgeImageSection @ 0x14036A438 (MiPurgeImageSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402952DC (MiReleasePageFileInfo.c)
 */

__int64 __fastcall MiReleasePageFileSpace(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  if ( (a2 & 4) != 0 )
  {
    v5 = MI_READ_PTE_LOCK_FREE(&v7);
    if ( !a3 )
      v5 &= ~2uLL;
  }
  else
  {
    if ( !a3 || (a2 & 2) == 0 )
      return 0LL;
    v5 = MI_READ_PTE_LOCK_FREE(&v7);
  }
  if ( !v5 )
    return 0LL;
  MiReleasePageFileInfo(a1, v5, 0LL);
  return 1LL;
}
