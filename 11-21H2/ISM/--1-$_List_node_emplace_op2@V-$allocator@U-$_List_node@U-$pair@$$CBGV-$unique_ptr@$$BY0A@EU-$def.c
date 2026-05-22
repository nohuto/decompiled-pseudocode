/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18018B088
 * Callers:
 *     ??$_Try_emplace@AEBG$$V@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@_N@1@AEBG@Z @ 0x18018AC08 (--$_Try_emplace@AEBG$$V@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_short_std::unique_ptr_unsigned_char_[0]_std::default_delete_unsigned_char_[0]____std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__std::unique_ptr_unsigned_char_[0]_std::default_delete_unsigned_char_[0]________0___::_Try_emplace_unsigned_short_const_&__::_1_::dtor$0 @ 0x18018AD1D (_std--_Hash_std--_Umap_traits_unsigned_short_std--unique_ptr_unsigned_char_[0]_std-_ea_18018AD1D.c)
 *     ??$emplace@AEAEV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAE$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@1@@Z @ 0x18018AD30 (--$emplace@AEAEV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@@-$_Hash@V-$_Umap_tra.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_short_std::unique_ptr_unsigned_char_[0]_std::default_delete_unsigned_char_[0]____std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__std::unique_ptr_unsigned_char_[0]_std::default_delete_unsigned_char_[0]________0___::emplace_unsigned_char_&_std::unique_ptr_unsigned_char_[0]_std::default_delete_unsigned_char_[0]______::_1_::dtor$0 @ 0x18018AE4B (_std--_Hash_std--_Umap_traits_unsigned_short_std--unique_ptr_unsigned_char_[0]_std-_ea_18018AE4B.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>>>(
        __int64 a1)
{
  void **v2; // rcx

  v2 = *(void ***)(a1 + 8);
  if ( v2 )
  {
    if ( v2[3] )
    {
      operator delete[](v2[3]);
      v2 = *(void ***)(a1 + 8);
    }
    if ( v2 )
      std::_Deallocate<16,0>(v2, 0x20uLL);
  }
}
