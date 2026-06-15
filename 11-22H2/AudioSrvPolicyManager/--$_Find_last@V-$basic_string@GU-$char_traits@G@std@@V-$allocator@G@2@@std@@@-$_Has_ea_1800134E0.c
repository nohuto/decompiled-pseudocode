/*
 * XREFs of ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x1800134E0
 * Callers:
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18001FB60 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-_ea_18001FB60.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Find_last<std::wstring>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3,
        __int64 a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // r9
  _QWORD *v7; // rbx
  _QWORD *result; // rax
  __int64 v9; // r10
  _QWORD *v10; // rsi
  _QWORD *v11; // rax
  char *v12; // r9
  __int64 v13; // rcx
  signed __int64 v14; // r9
  unsigned __int16 v15; // dx

  v5 = (_QWORD *)a1[1];
  v6 = (_QWORD *)(a1[3] + 16 * (a1[6] & a4));
  v7 = (_QWORD *)v6[1];
  if ( v7 == v5 )
  {
    *a2 = v5;
    result = a2;
    a2[1] = 0LL;
  }
  else
  {
    v9 = *((_QWORD *)a3 + 2);
    v10 = (_QWORD *)*v6;
    while ( 1 )
    {
      v11 = v7 + 2;
      if ( v7[5] >= 8uLL )
        v11 = (_QWORD *)*v11;
      v12 = a3;
      if ( *((_QWORD *)a3 + 3) >= 8uLL )
        v12 = *(char **)a3;
      if ( v9 == v7[4] )
      {
        v13 = *((_QWORD *)a3 + 2);
        if ( !v9 )
        {
LABEL_17:
          *a2 = *v7;
          result = a2;
          a2[1] = v7;
          return result;
        }
        v14 = v12 - (char *)v11;
        while ( 1 )
        {
          v15 = *(_WORD *)((char *)v11 + v14);
          if ( v15 < *(_WORD *)v11 || v15 > *(_WORD *)v11 )
            break;
          if ( v13 == 1 )
            goto LABEL_17;
          --v13;
          v11 = (_QWORD *)((char *)v11 + 2);
        }
      }
      if ( v7 == v10 )
        break;
      v7 = (_QWORD *)v7[1];
    }
    result = a2;
    *a2 = v7;
    a2[1] = 0LL;
  }
  return result;
}
