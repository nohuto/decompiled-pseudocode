/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@_KVBoundingBox@Transcoder@Spectre@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@1@@Z @ 0x1800A5408
 * Callers:
 *     ??0?$unordered_map@_KVBoundingBox@Transcoder@Spectre@@U?$hash@_K@std@@U?$equal_to@_K@5@V?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@5@@std@@QEAA@XZ @ 0x1800A54A8 (--0-$unordered_map@_KVBoundingBox@Transcoder@Spectre@@U-$hash@_K@std@@U-$equal_to@_K@5@V-$alloca.c)
 * Callees:
 *     ??0?$list@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@V?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@2@@std@@QEAA@AEBV?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@1@@Z @ 0x1800A5470 (--0-$list@U-$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@V-$allocator@U-$pair@$$CB_KVBound.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@std@@@std@@@2@@Z @ 0x1800A5570 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800A5570.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Spectre::Transcoder::BoundingBox,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,Spectre::Transcoder::BoundingBox,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v3; // rdx

  *(_DWORD *)a1 = *a2;
  std::list<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>>::list<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>>(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>>>>>>::_Assign_grow(
    a1 + 24,
    v3,
    *(_QWORD *)(a1 + 8));
  return a1;
}
