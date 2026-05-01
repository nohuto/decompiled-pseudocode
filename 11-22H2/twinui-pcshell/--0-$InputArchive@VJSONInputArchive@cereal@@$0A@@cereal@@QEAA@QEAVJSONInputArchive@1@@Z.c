/*
 * XREFs of ??0?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONInputArchive@1@@Z @ 0x180163438
 * Callers:
 *     ??0JSONInputArchive@cereal@@QEAA@AEAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z @ 0x180162D10 (--0JSONInputArchive@cereal@@QEAA@AEAV-$basic_istream@DU-$char_traits@D@std@@@std@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800C28A0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$unordered_set@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@7@@std@@QEAA@XZ @ 0x180163578 (--0-$unordered_set@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U-$equal_to@Ubas.c)
 *     ??0?$_Hash@V?$_Umap_traits@_KIV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KI@std@@@1@@Z @ 0x1801635A8 (--0-$_Hash@V-$_Umap_traits@_KIV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$allo.c)
 *     ??0?$_Hash@V?$_Umap_traits@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@1@@Z @ 0x18016361C (--0-$_Hash@V-$_Umap_traits@IV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$_Uh.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::InputArchive<cereal::JSONInputArchive,0>(
        __int64 a1,
        __int64 a2)
{
  size_t size_of; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)a1 = &cereal::InputArchive<cereal::JSONInputArchive,0>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = a2;
  std::unordered_set<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>,std::allocator<cereal::traits::detail::base_class_id>>::unordered_set<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>,std::allocator<cereal::traits::detail::base_class_id>>(a1 + 40);
  v11 = a1 + 104;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(a1 + 112) = v4;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 7LL;
  *(_QWORD *)(a1 + 160) = 8LL;
  *(_DWORD *)(a1 + 104) = 1065353216;
  v5 = v4;
  v6 = *(__int64 *)(a1 + 136) >> 3;
  if ( v6 >= 0x10 )
  {
    v10 = (unsigned __int64)(*(_QWORD *)(a1 + 136) + 7LL) >> 3;
    if ( v10 )
      memset64(0LL, (unsigned __int64)v4, v10);
  }
  else
  {
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x80uLL);
    if ( v6 )
      std::_Deallocate<16,0>(*(_QWORD *)(a1 + 128), 8 * v6);
    *(_QWORD *)(a1 + 128) = v7;
    v8 = v7 + 16;
    *(_QWORD *)(a1 + 136) = v7 + 16;
    *(_QWORD *)(a1 + 144) = v7 + 16;
    while ( v7 != v8 )
      *v7++ = v5;
  }
  HIDWORD(v11) = (unsigned __int64)(a1 + 168) >> 32;
  LODWORD(v11) = 0;
  std::_Hash<std::_Umap_traits<unsigned int,std::string,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::string>>,0>>::_Hash<std::_Umap_traits<unsigned int,std::string,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::string>>,0>>(
    a1 + 168,
    &v11);
  HIDWORD(v11) = (unsigned __int64)(a1 + 232) >> 32;
  LODWORD(v11) = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,unsigned int,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,unsigned int,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>(
    a1 + 232,
    &v11);
  return a1;
}
