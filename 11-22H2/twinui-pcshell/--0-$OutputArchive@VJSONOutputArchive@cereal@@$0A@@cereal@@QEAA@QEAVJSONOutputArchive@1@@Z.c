/*
 * XREFs of ??0?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z @ 0x1800C1380
 * Callers:
 *     ??0JSONOutputArchive@cereal@@QEAA@AEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEBVOptions@01@@Z @ 0x1800C3DF8 (--0JSONOutputArchive@cereal@@QEAA@AEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEBVOptions@0.c)
 * Callees:
 *     ??0?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@_K@1@@Z @ 0x1800C3F78 (--0-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 *     ??0?$_Hash@V?$_Umap_traits@PEBXIV?$_Uhash_compare@PEBXU?$hash@PEBX@std@@U?$equal_to@PEBX@2@@std@@V?$allocator@U?$pair@QEBXI@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEBXU?$hash@PEBX@std@@U?$equal_to@PEBX@2@@1@AEBV?$allocator@U?$pair@QEBXI@std@@@1@@Z @ 0x1800C4054 (--0-$_Hash@V-$_Umap_traits@PEBXIV-$_Uhash_compare@PEBXU-$hash@PEBX@std@@U-$equal_to@PEBX@2@@std@.c)
 *     ??0?$_Hash@V?$_Uset_traits@Ubase_class_id@detail@traits@cereal@@V?$_Uhash_compare@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@@std@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@6@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@@1@AEBV?$allocator@Ubase_class_id@detail@traits@cereal@@@1@@Z @ 0x1800C4128 (--0-$_Hash@V-$_Uset_traits@Ubase_class_id@detail@traits@cereal@@V-$_Uhash_compare@Ubase_class_id.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::OutputArchive<cereal::JSONOutputArchive,0>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  int v5; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+3Ch] [rbp+14h]

  *(_QWORD *)a1 = &cereal::OutputArchive<cereal::JSONOutputArchive,0>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = a2;
  v3 = a1 + 40;
  v6 = HIDWORD(v3);
  v5 = 0;
  std::_Hash<std::_Uset_traits<cereal::traits::detail::base_class_id,std::_Uhash_compare<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>>,std::allocator<cereal::traits::detail::base_class_id>,0>>::_Hash<std::_Uset_traits<cereal::traits::detail::base_class_id,std::_Uhash_compare<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>>,std::allocator<cereal::traits::detail::base_class_id>,0>>(
    v3,
    &v5);
  v6 = (unsigned __int64)(a1 + 104) >> 32;
  v5 = 0;
  std::_Hash<std::_Umap_traits<void const *,unsigned int,std::_Uhash_compare<void const *,std::hash<void const *>,std::equal_to<void const *>>,std::allocator<std::pair<void const * const,unsigned int>>,0>>::_Hash<std::_Umap_traits<void const *,unsigned int,std::_Uhash_compare<void const *,std::hash<void const *>,std::equal_to<void const *>>,std::allocator<std::pair<void const * const,unsigned int>>,0>>(
    a1 + 104,
    &v5);
  *(_DWORD *)(a1 + 168) = 1;
  v6 = (unsigned __int64)(a1 + 176) >> 32;
  v5 = 0;
  std::_Hash<std::_Umap_traits<void const *,unsigned int,std::_Uhash_compare<void const *,std::hash<void const *>,std::equal_to<void const *>>,std::allocator<std::pair<void const * const,unsigned int>>,0>>::_Hash<std::_Umap_traits<void const *,unsigned int,std::_Uhash_compare<void const *,std::hash<void const *>,std::equal_to<void const *>>,std::allocator<std::pair<void const * const,unsigned int>>,0>>(
    a1 + 176,
    &v5);
  *(_DWORD *)(a1 + 240) = 1;
  v6 = (unsigned __int64)(a1 + 248) >> 32;
  v5 = 0;
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>(
    a1 + 248,
    &v5);
  return a1;
}
