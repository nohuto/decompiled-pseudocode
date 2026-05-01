/*
 * XREFs of ??1?$list@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180416CDC
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_std::basic_string_char_std::char_traits_char__std::allocator_char____std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__std::basic_string_char_std::char_traits_char__std::allocator_char________0___::_Hash_std::_Umap_traits_unsigned_int_std::basic_string_char_std::char_traits_char__std::allocator_char____std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__std::basic_string_char_std::char_traits_char__std::allocator_char________0____::_1_::dtor$0 @ 0x1802C46C3 (_std--_Hash_std--_Umap_traits_unsigned_int_std--basic_string_char_std--char_traits_char__std--al.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned int const,std::string>>::~list<std::pair<unsigned int const,std::string>>(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rsi
  void *v6; // rcx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = v3[6];
      v5 = (_QWORD *)*v3;
      if ( v4 >= 0x10 )
      {
        v6 = (void *)v3[3];
        v7 = v4 + 1;
        v8 = v6;
        if ( v4 + 1 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v8, &v7);
          v6 = v8;
        }
        operator delete(v6);
      }
      v3[5] = 0LL;
      v3[6] = 15LL;
      *((_BYTE *)v3 + 24) = 0;
      std::_Deallocate<16,0>(v3, 0x38uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*a1, 0x38uLL);
}
