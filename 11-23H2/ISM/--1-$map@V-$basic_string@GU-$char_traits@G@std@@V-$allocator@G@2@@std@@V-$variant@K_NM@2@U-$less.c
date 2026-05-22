/*
 * XREFs of ??1?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@XZ @ 0x1800AAC28
 * Callers:
 *     _std::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::variant_unsigned_long_bool_float__std::less_void__std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::variant_unsigned_long_bool_float_______::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::variant_unsigned_long_bool_float__std::less_void__std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::variant_unsigned_long_bool_float________::_1_::dtor$0 @ 0x18006E3F9 (_std--map_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsig.c)
 *     __lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator()_::_1_::dtor$12 @ 0x18006F695 (__lambda_f42f6b7dc2f8f00e06af073ba952cab2_--operator()_--_1_--dtor$12.c)
 *     __lambda_ac1ab69820883e1c7555fea4db797a8f_::operator()_::_1_::dtor$8 @ 0x1800BE68B (__lambda_ac1ab69820883e1c7555fea4db797a8f_--operator()_--_1_--dtor$8.c)
 *     __lambda_9db3a47598234cc48958c5ce7f83f5e9_::operator()_::_1_::dtor$2 @ 0x1801DAB65 (__lambda_9db3a47598234cc48958c5ce7f83f5e9_--operator()_--_1_--dtor$2.c)
 *     __lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator()_::_1_::dtor$50 @ 0x1801DD875 (__lambda_223b683404cbbc2b78f554bf36c4ab0d_--operator()_--_1_--dtor$50.c)
 *     __lambda_aa4734cb05b2f20ab38c0941f0d86b7b_::operator()_::_1_::dtor$8 @ 0x1801E335D (__lambda_aa4734cb05b2f20ab38c0941f0d86b7b_--operator()_--_1_--dtor$8.c)
 *     __lambda_2f33fc4b0ac679fd125de0d601496fc7_::operator()_::_1_::dtor$5 @ 0x1801EA1E5 (__lambda_2f33fc4b0ac679fd125de0d601496fc7_--operator()_--_1_--dtor$5.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@@Z @ 0x1800480E8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 */

void __fastcall std::map<std::wstring,std::variant<unsigned long,bool,float>>::~map<std::wstring,std::variant<unsigned long,bool,float>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x48uLL);
}
