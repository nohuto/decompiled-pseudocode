/*
 * XREFs of ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180039910
 * Callers:
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800397F8 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18005C0D4 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18015F404 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-_ea_18015F404.c)
 * Callees:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180039B40 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Find_lower_bound<std::wstring>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v6; // r11
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r14
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  int v13; // eax
  __int64 *v14; // r11
  int v15; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v6 = *(_QWORD *)(v3 + 8);
  *(_QWORD *)a2 = v6;
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = a3[2];
    v8 = a3[3];
    do
    {
      *(_QWORD *)a2 = v6;
      v9 = (_QWORD *)(v6 + 32);
      v10 = a3;
      if ( v8 >= 8 )
        v10 = (_QWORD *)*a3;
      v11 = *(_QWORD *)(v6 + 48);
      if ( *(_QWORD *)(v6 + 56) >= 8uLL )
        v9 = (_QWORD *)*v9;
      v12 = v7;
      if ( v7 >= v11 )
        v12 = *(_QWORD *)(v6 + 48);
      v13 = std::_WChar_traits<unsigned short>::compare(v9, v10, v12);
      if ( v13 )
      {
        if ( v13 < 0 )
          goto LABEL_15;
      }
      else if ( v11 < v7 )
      {
LABEL_15:
        v6 = v14[2];
        v15 = 0;
        goto LABEL_12;
      }
      *(_QWORD *)(a2 + 16) = v14;
      v15 = 1;
      v6 = *v14;
LABEL_12:
      *(_DWORD *)(a2 + 8) = v15;
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  return a2;
}
