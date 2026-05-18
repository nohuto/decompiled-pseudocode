/*
 * XREFs of ??0?$list@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@V?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@2@@std@@QEAA@AEBV?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@1@@Z @ 0x1800A5470
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@_KVBoundingBox@Transcoder@Spectre@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@1@@Z @ 0x1800A5408 (--0-$_Hash@V-$_Umap_traits@_KVBoundingBox@Transcoder@Spectre@@V-$_Uhash_compare@_KU-$hash@_K@std.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>>::list<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>>(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
