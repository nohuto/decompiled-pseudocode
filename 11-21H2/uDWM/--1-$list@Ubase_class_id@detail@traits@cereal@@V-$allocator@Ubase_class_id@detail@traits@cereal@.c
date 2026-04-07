/*
 * XREFs of ??1?$list@Ubase_class_id@detail@traits@cereal@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@std@@@std@@QEAA@XZ @ 0x1800F3418
 * Callers:
 *     _std::_Hash_std::_Uset_traits_cereal::traits::detail::base_class_id_std::_Uhash_compare_cereal::traits::detail::base_class_id_cereal::traits::detail::base_class_id_hash_std::equal_to_cereal::traits::detail::base_class_id____std::allocator_cereal::traits::detail::base_class_id__0___::_Hash_std::_Uset_traits_cereal::traits::detail::base_class_id_std::_Uhash_compare_cereal::traits::detail::base_class_id_cereal::traits::detail::base_class_id_hash_std::equal_to_cereal::traits::detail::base_class_id____std::allocator_cereal::traits::detail::base_class_id__0____::_1_::dtor$0 @ 0x180065B04 (_std--_Hash_std--_Uset_traits_cereal--traits--detail--base_class_id_std--_Uhash_compare_cereal--.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::list<cereal::traits::detail::base_class_id>::~list<cereal::traits::detail::base_class_id>(
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
  return std::_Deallocate<16,0>(*a1, 0x28uLL);
}
