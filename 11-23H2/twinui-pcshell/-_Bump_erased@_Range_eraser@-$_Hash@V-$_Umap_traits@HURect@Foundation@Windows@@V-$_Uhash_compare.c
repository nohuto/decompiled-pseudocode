/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180665884
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180665DBC (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@V-$_Uhash_compare@HU-$hash@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)a1[2];
  a1[2] = *v2;
  std::_Deallocate<16,0>(v2, 0x28uLL);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
