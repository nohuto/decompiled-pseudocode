/*
 * XREFs of ??0?$unordered_map@_KVBoundingBox@Transcoder@Spectre@@U?$hash@_K@std@@U?$equal_to@_K@5@V?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@5@@std@@QEAA@XZ @ 0x1800A54A8
 * Callers:
 *     _dynamic_initializer_for__Spectre::Engine::SkinnedAnimationComponent::s_overallPerAnimBoundingBoxes__ @ 0x18000AD10 (_dynamic_initializer_for__Spectre--Engine--SkinnedAnimationComponent--s_overallPerAnimBoundingBo.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@_KVBoundingBox@Transcoder@Spectre@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@1@@Z @ 0x1800A5408 (--0-$_Hash@V-$_Umap_traits@_KVBoundingBox@Transcoder@Spectre@@V-$_Uhash_compare@_KU-$hash@_K@std.c)
 */

__int64 __fastcall std::unordered_map<unsigned __int64,Spectre::Transcoder::BoundingBox>::unordered_map<unsigned __int64,Spectre::Transcoder::BoundingBox>(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,Spectre::Transcoder::BoundingBox,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,Spectre::Transcoder::BoundingBox,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>>,0>>(
    a1,
    &v3);
  return a1;
}
