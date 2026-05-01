/*
 * XREFs of ??1?$list@Ubase_class_id@detail@traits@cereal@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@std@@@std@@QEAA@XZ @ 0x18034CBB0
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_winrt::guid_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__winrt::guid____0___::_Hash_std::_Umap_traits_unsigned___int64_winrt::guid_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__winrt::guid____0____::_1_::dtor$0 @ 0x1802145A3 (_std--_Hash_std--_Umap_traits_unsigned___int64_winrt--guid_std--_Uhash_compare_unsigned___int64_.c)
 *     _cereal::OutputArchive_cereal::JSONOutputArchive_0_::OutputArchive_cereal::JSONOutputArchive_0__::_1_::dtor$16 @ 0x180218AF0 (_cereal--OutputArchive_cereal--JSONOutputArchive_0_--OutputArchive_cereal--JSONOutp_ea_180218AF0.c)
 *     _std::_Hash_std::_Uset_traits_cereal::traits::detail::base_class_id_std::_Uhash_compare_cereal::traits::detail::base_class_id_cereal::traits::detail::base_class_id_hash_std::equal_to_cereal::traits::detail::base_class_id____std::allocator_cereal::traits::detail::base_class_id__0___::_Hash_std::_Uset_traits_cereal::traits::detail::base_class_id_std::_Uhash_compare_cereal::traits::detail::base_class_id_cereal::traits::detail::base_class_id_hash_std::equal_to_cereal::traits::detail::base_class_id____std::allocator_cereal::traits::detail::base_class_id__0____::_1_::dtor$0 @ 0x18022C15E (_std--_Hash_std--_Uset_traits_cereal--traits--detail--base_class_id_std--_Uhash_compare_cereal--.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<cereal::traits::detail::base_class_id>::~list<cereal::traits::detail::base_class_id>(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, 0x28uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, 0x28uLL);
}
