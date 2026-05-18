/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@_KVBoundingBox@Transcoder@Spectre@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1800A54D8
 * Callers:
 *     _dynamic_atexit_destructor_for__Spectre::Engine::SkinnedAnimationComponent::s_overallPerAnimBoundingBoxes__ @ 0x1800F97F0 (_dynamic_atexit_destructor_for__Spectre--Engine--SkinnedAnimationComponent--s_overallPerAnimBoun.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800A53D0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Spectre::Transcoder::BoundingBox,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>>,0>>::~_Hash<std::_Umap_traits<unsigned __int64,Spectre::Transcoder::BoundingBox,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>>,0>>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x38uLL);
}
