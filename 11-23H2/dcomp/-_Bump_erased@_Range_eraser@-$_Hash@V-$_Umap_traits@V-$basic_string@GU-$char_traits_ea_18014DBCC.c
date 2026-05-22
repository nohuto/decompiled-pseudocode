/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18014DBCC
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18014DDF4 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-_ea_18014DDF4.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180022CC4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1RedirectedPropertyInfo@Composition@UI@Windows@@QEAA@XZ @ 0x180022D64 (--1RedirectedPropertyInfo@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,Windows::UI::Composition::RedirectedPropertyInfo,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,Windows::UI::Composition::RedirectedPropertyInfo>>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  Windows::UI::Composition::RedirectedPropertyInfo::~RedirectedPropertyInfo((Windows::UI::Composition::RedirectedPropertyInfo *)(v1 + 6));
  std::wstring::_Tidy_deallocate((__int64)(v1 + 2));
  std::_Deallocate<16,0>(v1, 0x50uLL);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
