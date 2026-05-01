/*
 * XREFs of ??1?$list@Ubase_class_id@detail@traits@cereal@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@std@@@std@@QEAA@XZ @ 0x180416E00
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_winrt::guid_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__winrt::guid____0___::_Hash_std::_Umap_traits_unsigned___int64_winrt::guid_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__winrt::guid____0____::_1_::dtor$0 @ 0x1802B566A (_std--_Hash_std--_Umap_traits_unsigned___int64_winrt--guid_std--_Uhash_compare_unsigned___int64_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
