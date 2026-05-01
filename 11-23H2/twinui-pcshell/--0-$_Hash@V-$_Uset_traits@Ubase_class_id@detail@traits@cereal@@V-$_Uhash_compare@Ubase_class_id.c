/*
 * XREFs of ??0?$_Hash@V?$_Uset_traits@Ubase_class_id@detail@traits@cereal@@V?$_Uhash_compare@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@@std@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@6@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@@1@AEBV?$allocator@Ubase_class_id@detail@traits@cereal@@@1@@Z @ 0x1800C4128
 * Callers:
 *     ??0?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z @ 0x1800C1380 (--0-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z.c)
 *     ??0?$unordered_set@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@7@@std@@QEAA@XZ @ 0x180163578 (--0-$unordered_set@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U-$equal_to@Ubas.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800C28A0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<cereal::traits::detail::base_class_id,std::_Uhash_compare<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>>,std::allocator<cereal::traits::detail::base_class_id>,0>>::_Hash<std::_Uset_traits<cereal::traits::detail::base_class_id,std::_Uhash_compare<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>>,std::allocator<cereal::traits::detail::base_class_id>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  __int64 size_of; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  unsigned __int64 v10; // rcx

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v4 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  v5 = v4;
  v6 = *(__int64 *)(a1 + 32) >> 3;
  if ( v6 >= 0x10 )
  {
    v10 = (unsigned __int64)(*(_QWORD *)(a1 + 32) + 7LL) >> 3;
    if ( v10 )
      memset64(0LL, (unsigned __int64)v4, v10);
  }
  else
  {
    v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(128LL);
    if ( v6 )
      std::_Deallocate<16,0>(*(_QWORD *)(a1 + 24), 8 * v6);
    *(_QWORD *)(a1 + 24) = v7;
    v8 = v7 + 16;
    *(_QWORD *)(a1 + 32) = v7 + 16;
    *(_QWORD *)(a1 + 40) = v7 + 16;
    while ( v7 != v8 )
      *v7++ = v5;
  }
  return a1;
}
