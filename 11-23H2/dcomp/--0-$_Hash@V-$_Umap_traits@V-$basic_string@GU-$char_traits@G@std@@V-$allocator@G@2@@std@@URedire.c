/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@1@AEBV?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@@std@@@1@@Z @ 0x1800466E8
 * Callers:
 *     ??0?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x18001F654 (--0-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@URedirectedProp.c)
 *     ??0ParameterOverrideEntry@Composition@UI@Windows@@QEAA@$$QEAU0123@@Z @ 0x1800453C0 (--0ParameterOverrideEntry@Composition@UI@Windows@@QEAA@$$QEAU0123@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,Windows::UI::Composition::RedirectedPropertyInfo,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,Windows::UI::Composition::RedirectedPropertyInfo>>,0>>::_Hash<std::_Umap_traits<std::wstring,Windows::UI::Composition::RedirectedPropertyInfo,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,Windows::UI::Composition::RedirectedPropertyInfo>>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  unsigned __int64 v9; // rcx

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x50uLL);
  v4 = v3;
  *v3 = v3;
  v3[1] = v3;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  v5 = *(__int64 *)(a1 + 32) >> 3;
  if ( v5 >= 0x10 )
  {
    v9 = (unsigned __int64)(*(_QWORD *)(a1 + 32) + 7LL) >> 3;
    if ( v9 )
      memset64(0LL, (unsigned __int64)v3, v9);
  }
  else
  {
    v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x80uLL);
    if ( v5 )
      std::_Deallocate<16,0>(*(_QWORD *)(a1 + 24), 8 * v5);
    v7 = v6 + 16;
    *(_QWORD *)(a1 + 24) = v6;
    *(_QWORD *)(a1 + 32) = v6 + 16;
    *(_QWORD *)(a1 + 40) = v6 + 16;
    while ( v6 != v7 )
      *v6++ = v4;
  }
  return a1;
}
