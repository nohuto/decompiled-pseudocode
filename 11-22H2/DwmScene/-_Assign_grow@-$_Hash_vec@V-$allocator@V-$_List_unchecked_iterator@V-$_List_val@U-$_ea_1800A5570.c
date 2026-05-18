/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@std@@@std@@@2@@Z @ 0x1800A5570
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@_KVBoundingBox@Transcoder@Spectre@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@1@@Z @ 0x1800A5408 (--0-$_Hash@V-$_Umap_traits@_KVBoundingBox@Transcoder@Spectre@@V-$_Uhash_compare@_KU-$hash@_K@std.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017058 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x18003F878 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBV-$basic_s.c)
 *     ??$uninitialized_fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x18003F9E0 (--$uninitialized_fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@.c)
 */

unsigned __int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>>>>>>::_Assign_grow(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  __int64 *v6; // rsi
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v4 >= 0x10 )
    return std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>>>>(
             *(unsigned __int64 **)a1,
             *(unsigned __int64 **)(a1 + 8),
             (unsigned __int64 *)&v8);
  size_of = std::_Get_size_of_n<8>(0x10uLL);
  v6 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  if ( v4 )
    std::_Deallocate<16,0>(*(void **)a1, 8 * v4);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v6 + 16;
  *(_QWORD *)(a1 + 16) = v6 + 16;
  return std::uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>>>>(
           v6,
           v6 + 16,
           &v8);
}
