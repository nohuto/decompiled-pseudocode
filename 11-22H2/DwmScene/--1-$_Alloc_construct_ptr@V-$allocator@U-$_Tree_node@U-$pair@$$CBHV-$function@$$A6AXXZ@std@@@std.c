/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001D204
 * Callers:
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@2@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x18001C83C (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AXAEBV-$basic_string@DU-$char.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18004E9B8 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$cha_ea_18004E9B8.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180052798 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBHV-$function@$$A6AXAEBV-$basic_strin.c)
 *     _std::map_int_std::function_void___cdecl(void)__std::less_int__std::allocator_std::pair_int_const__std::function_void___cdecl(void)_______::_Try_emplace_int_const_&__::_1_::dtor$2 @ 0x1800E4761 (_std--map_int_std--function_void___cdecl(void)__std--less_int__std--allocator_std--pair_int_cons.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__Spectre::Engine::ShaderManager::ShaderInfo__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__Spectre::Engine::ShaderManager::ShaderInfo__void________std::basic_string_char_std::char_traits_char__std::allocator_char____Spectre::Engine::ShaderManager::ShaderInfo__::_1_::dtor$1 @ 0x1800E70C0 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_std--basic_string_char_std--char_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (void)>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (void)>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x68uLL);
}
