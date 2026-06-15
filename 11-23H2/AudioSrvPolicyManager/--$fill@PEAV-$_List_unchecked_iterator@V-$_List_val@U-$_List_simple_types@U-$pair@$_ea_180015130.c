/*
 * XREFs of ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x180015130
 * Callers:
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180020258 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>>>>(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // r9
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx

  result = 0LL;
  v4 = a1;
  v5 = (unsigned __int64)((char *)a2 - (char *)a1 + 7) >> 3;
  if ( a1 > a2 )
    v5 = 0LL;
  if ( v5 >= 2 )
  {
    result = *a3;
    v6 = (unsigned __int64)&a1[v5 - 1];
    if ( v4 > a3 || v6 < (unsigned __int64)a3 )
    {
      memset64(v4, result, v5 & 0x1FFFFFFFFFFFFFFELL);
      v4 += v5 & 0xFFFFFFFFFFFFFFFEuLL;
    }
  }
  for ( ; v4 != a2; ++v4 )
  {
    result = *a3;
    *v4 = *a3;
  }
  return result;
}
