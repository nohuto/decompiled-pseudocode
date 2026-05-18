/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001D228
 * Callers:
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001D2AC (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@st.c)
 *     ??1?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18002B834 (--1-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trait.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18003192C (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$weak_ptr@VScene@Engine@Spectre@@@.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180057260 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$weak_ptr@VCamera@Engine@Spectre@@.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005FB10 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4EShaderModel@Engine@Spectre@@UShad.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800C8990 (--$_Try_emplace@AEBI$$V@-$map@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderModel_const__Spectre::Engine::ShaderFamily::ShaderPipelineCollection__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderModel_const__Spectre::Engine::ShaderFamily::ShaderPipelineCollection__void________std::piecewise_construct_t_const_&_std::tuple_enum_Spectre::Engine::EShaderModel_const_&__std::tuple_____::_1_::dtor$1 @ 0x1800E474F (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_enum_Spectre--Engine--EShaderMode.c)
 *     _std::map_unsigned_int_DXGI_FRAME_STATISTICS_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__DXGI_FRAME_STATISTICS_____::_Try_emplace_unsigned_int_const_&__::_1_::dtor$2 @ 0x1800E70E4 (_std--map_unsigned_int_DXGI_FRAME_STATISTICS_std--less_unsigned_int__std--allocator_std--pair_un.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,enum Spectre::Engine::ShaderOption>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,enum Spectre::Engine::ShaderOption>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x48uLL);
}
