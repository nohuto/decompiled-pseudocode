/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180027F30
 * Callers:
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180027FB4 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180098960 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@DU-$char_trai.c)
 *     _std::map_unsigned_int_std::shared_ptr_Spectre::Engine::D3D11::Holographic::HolographicDisplayState__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::shared_ptr_Spectre::Engine::D3D11::Holographic::HolographicDisplayState_______::_Try_emplace_unsigned_int_const_&__::_1_::dtor$2 @ 0x1800E4DE0 (_std--map_unsigned_int_std--shared_ptr_Spectre--Engine--D3D11--Holographic--HolographicDisplaySt.c)
 *     _std::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair_int_const__std::shared_ptr_Spectre::Engine::LightProbe____void_______::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair_int_const__std::shared_ptr_Spectre::Engine::LightProbe____void________::_1_::dtor$0 @ 0x1800E7EB4 (_std--_Tree_temp_node_alloc_std--allocator_std--_Tree_node_std--pair_int_const__std--shared_ptr_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceVertexLayout>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceVertexLayout>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x38uLL);
}
