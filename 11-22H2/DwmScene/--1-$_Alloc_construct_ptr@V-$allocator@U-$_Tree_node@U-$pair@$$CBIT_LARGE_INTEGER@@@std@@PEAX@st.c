/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180031714
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$map@_K_KU?$less@_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18002FBAC (--$_Try_emplace@AEB_K$$V@-$map@_K_KU-$less@_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@std@@A.c)
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x18005EDA8 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tset_traits@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@U-.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005FB40 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18006402C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$basic_string@_WU-$char_traits@_W@std@@.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800C889C (--$_Try_emplace@AEBI$$V@-$map@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARGE.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800DAFF0 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBMV-$ComPtr@UIDXGIAdapter1@@@WRL@Micr.c)
 *     _std::map_unsigned_int__LARGE_INTEGER_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const___LARGE_INTEGER_____::_Try_emplace_unsigned_int_const_&__::_1_::dtor$2 @ 0x1800E5235 (_std--map_unsigned_int__LARGE_INTEGER_std--less_unsigned_int__std--allocator_std--pair_unsigned_.c)
 *     _std::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair_float_const__Microsoft::WRL::ComPtr_IDXGIAdapter1____void_______::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair_float_const__Microsoft::WRL::ComPtr_IDXGIAdapter1____void________::_1_::dtor$0 @ 0x1800E7AFE (_std--_Tree_temp_node_alloc_std--allocator_std--_Tree_node_std--pair_float_const__Microsoft--WRL.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,_LARGE_INTEGER>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,_LARGE_INTEGER>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x30uLL);
}
