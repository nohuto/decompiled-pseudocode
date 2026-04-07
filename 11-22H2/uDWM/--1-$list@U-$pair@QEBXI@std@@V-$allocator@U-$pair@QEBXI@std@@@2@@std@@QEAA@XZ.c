/*
 * XREFs of ??1?$list@U?$pair@QEBXI@std@@V?$allocator@U?$pair@QEBXI@std@@@2@@std@@QEAA@XZ @ 0x1800F12D4
 * Callers:
 *     _cereal::OutputArchive_cereal::JSONOutputArchive_0_::OutputArchive_cereal::JSONOutputArchive_0__::_1_::dtor$16 @ 0x1800F0922 (_cereal--OutputArchive_cereal--JSONOutputArchive_0_--OutputArchive_cereal--JSONOutp_ea_1800F0922.c)
 *     _std::_Hash_std::_Umap_traits_char_const___unsigned_int_std::_Uhash_compare_char_const___std::hash_char_const____std::equal_to_char_const______std::allocator_std::pair_char_const___const_unsigned_int____0___::_Hash_std::_Umap_traits_char_const___unsigned_int_std::_Uhash_compare_char_const___std::hash_char_const____std::equal_to_char_const______std::allocator_std::pair_char_const___const_unsigned_int____0____::_1_::dtor$0 @ 0x1800F09D8 (_std--_Hash_std--_Umap_traits_char_const___unsigned_int_std--_Uhash_compare_char_const___std--ha.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::list<std::pair<void const * const,unsigned int>>::~list<std::pair<void const * const,unsigned int>>(
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
      std::_Deallocate<16,0>(v3, 0x20uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return std::_Deallocate<16,0>(*a1, 0x20uLL);
}
