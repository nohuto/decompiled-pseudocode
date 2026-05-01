/*
 * XREFs of ??1?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x1804EA5F4
 * Callers:
 *     _ShellPositionerManager::DoWorkForEachMonitor__lambda_818fa40c33a0f4ba0d57a43a0a00bca6____::_1_::dtor$0 @ 0x1804EA2F0 (_ShellPositionerManager--DoWorkForEachMonitor__lambda_818fa40c33a0f4ba0d57a43a0a00bca6____--_1_-.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1804E9310 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@Micros.c)
 */

void __fastcall std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::~map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
