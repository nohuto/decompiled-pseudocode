/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001BDB0
 * Callers:
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18001A414 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800194D8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = *(std::_Ref_count_base **)(v2 + 24);
    if ( v4 )
      std::_Ref_count_base::_Decwref(v4);
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 32LL);
}
