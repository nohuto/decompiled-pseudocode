/*
 * XREFs of ?erase@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@2@@Z @ 0x180014738
 * Callers:
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18001A414 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800194D8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::weak_ptr<CWindowBorder::CCachedBorderBrush>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v5; // rsi
  std::_Ref_count_base *v6; // rcx

  v5 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --*((_QWORD *)&CWindowBorder::CCachedBorderBrush::s_cache + 1);
  v6 = (std::_Ref_count_base *)a3[3];
  if ( v6 )
    std::_Ref_count_base::_Decwref(v6);
  std::_Deallocate<16,0>(a3, 32LL);
  *a2 = v5;
  return a2;
}
