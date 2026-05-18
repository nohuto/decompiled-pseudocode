/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180025974
 * Callers:
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800259F8 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4QueryType@GpuQuery@Engine@Spectre@.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800318FC (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$weak_ptr@VRenderDevice@Engine@Spe.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18004EA18 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@V-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ??1?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18004EA48 (--1-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@V-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x18005ECBC (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tset_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     _std::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::basic_string_char_std::char_traits_char__std::allocator_char____void_______::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::basic_string_char_std::char_traits_char__std::allocator_char____void________::_1_::dtor$0 @ 0x1800E4B6B (_std--_Tree_temp_node_alloc_std--allocator_std--_Tree_node_std--basic_string_char_std--char_trai.c)
 *     _std::_Tree_std::_Tset_traits_std::basic_string_char_std::char_traits_char__std::allocator_char____std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::basic_string_char_std::char_traits_char__std::allocator_char______0___::_Copy_nodes_std::_Tree_std::_Tset_traits_std::basic_string_char_std::char_traits_char__std::allocator_char____std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::basic_string_char_std::char_traits_char__std::allocator_char______0___::_Copy_tag__::_1_::dtor$0 @ 0x1800E7B10 (_std--_Tree_std--_Tset_traits_std--basic_string_char_std--char_traits_char__std--al_ea_1800E7B10.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::GpuQuery::QueryType const,std::stack<std::shared_ptr<Spectre::Engine::GpuQuery>,std::vector<std::shared_ptr<Spectre::Engine::GpuQuery>>>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::GpuQuery::QueryType const,std::stack<std::shared_ptr<Spectre::Engine::GpuQuery>,std::vector<std::shared_ptr<Spectre::Engine::GpuQuery>>>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x40uLL);
}
