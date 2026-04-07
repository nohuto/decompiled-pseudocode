/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180037F44
 * Callers:
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x1800378B4 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180039150 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>(
        __int64 a1)
{
  std::_Ref_count_base **v2; // rcx

  v2 = *(std::_Ref_count_base ***)(a1 + 8);
  if ( v2 )
  {
    if ( v2[3] )
    {
      std::_Ref_count_base::_Decwref(v2[3]);
      v2 = *(std::_Ref_count_base ***)(a1 + 8);
    }
    if ( v2 )
      std::_Deallocate<16,0>(v2, 0x20uLL);
  }
}
