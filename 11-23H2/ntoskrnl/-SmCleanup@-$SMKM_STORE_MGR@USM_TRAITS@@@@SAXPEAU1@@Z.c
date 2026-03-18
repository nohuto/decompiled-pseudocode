/*
 * XREFs of ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405BE68C
 * Callers:
 *     SmFirstTimeInit @ 0x1407B7D14 (SmFirstTimeInit.c)
 *     SmPartitionCleanup @ 0x1409D6BB8 (SmPartitionCleanup.c)
 * Callees:
 *     KeDisableTimer2 @ 0x14031DB78 (KeDisableTimer2.c)
 *     SmFpCleanup @ 0x140344318 (SmFpCleanup.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1405BC4B8 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1405BE80C (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1405BED04 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     SmKmCleanup @ 0x1409D86E8 (SmKmCleanup.c)
 */

char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCleanup(__int64 a1)
{
  char *v2; // rdx

  SmKmCleanup();
  v2 = *(char **)(a1 + 448);
  if ( v2 )
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNodeFree(
      a1 + 448,
      v2);
  SmFpCleanup(a1 + 1424);
  SmFpCleanup(a1 + 1544);
  SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(a1 + 1248, 1LL);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCleanup((PEX_SPIN_LOCK)(a1 + 1264));
  SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(a1 + 1408, 1LL);
  return KeDisableTimer2(a1 + 1680, 1, 1, 0LL);
}
