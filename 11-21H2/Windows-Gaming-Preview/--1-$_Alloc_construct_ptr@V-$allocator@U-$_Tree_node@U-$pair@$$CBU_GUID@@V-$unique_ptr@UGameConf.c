/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180040FE4
 * Callers:
 *     _std::_Tree_std::_Tmap_traits__GUID_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__Windows::Gaming::Preview::GamesEnumeration::GameIdLess_std::allocator_std::pair__GUID_const__std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete______0___::emplace__GUID_&_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete____::_1_::dtor$2 @ 0x18004D0AE (_std--_Tree_std--_Tmap_traits__GUID_std--unique_ptr_ExecutionModel--GameConfig_gameconfig_delete.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800131B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *>>>(
        __int64 a1)
{
  char *v1; // rcx

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x38uLL);
}
