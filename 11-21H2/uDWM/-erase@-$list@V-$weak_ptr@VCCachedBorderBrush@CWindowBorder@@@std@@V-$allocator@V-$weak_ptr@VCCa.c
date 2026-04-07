/*
 * XREFs of ?erase@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@2@@Z @ 0x1800106F8
 * Callers:
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x1800378B4 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180039150 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::list<std::weak_ptr<CWindowBorder::CCachedBorderBrush>>::erase(__int64 a1, _QWORD *a2, void *a3)
{
  _QWORD *v5; // rsi
  std::_Ref_count_base *v6; // rcx

  v5 = *(_QWORD **)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --*((_QWORD *)&CWindowBorder::CCachedBorderBrush::s_cache + 1);
  v6 = (std::_Ref_count_base *)*((_QWORD *)a3 + 3);
  if ( v6 )
    std::_Ref_count_base::_Decwref(v6);
  std::_Deallocate<16,0>(a3, 0x20uLL);
  *a2 = v5;
  return a2;
}
