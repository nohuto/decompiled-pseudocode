/*
 * XREFs of ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180008EF0
 * Callers:
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002490C (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<std::wstring>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 *v5; // r10
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  char *v8; // r9
  char *v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  signed __int64 v12; // r9
  unsigned __int16 v13; // dx
  int v14; // eax
  int v15; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v5 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v6 = *(_QWORD *)(a3 + 16);
    v7 = *(_QWORD *)(a3 + 24);
    do
    {
      *(_QWORD *)a2 = v5;
      v8 = (char *)(v5 + 4);
      v9 = (char *)a3;
      if ( v7 >= 8 )
        v9 = *(char **)a3;
      v10 = v5[6];
      if ( (unsigned __int64)v5[7] >= 8 )
        v8 = *(char **)v8;
      v11 = v6;
      if ( v6 >= v10 )
        v11 = v5[6];
      if ( v11 )
      {
        v12 = v8 - v9;
        while ( 1 )
        {
          v13 = *(_WORD *)&v9[v12];
          if ( v13 < *(_WORD *)v9 )
          {
            v14 = -1;
            goto LABEL_16;
          }
          if ( v13 > *(_WORD *)v9 )
            break;
          if ( v11 == 1 )
            goto LABEL_22;
          --v11;
          v9 += 2;
        }
        v14 = 1;
LABEL_16:
        if ( v14 >= 0 )
        {
LABEL_20:
          *(_QWORD *)(a2 + 16) = v5;
          v15 = 1;
          v5 = (__int64 *)*v5;
          goto LABEL_18;
        }
      }
      else
      {
LABEL_22:
        if ( v10 >= v6 )
          goto LABEL_20;
      }
      v5 = (__int64 *)v5[2];
      v15 = 0;
LABEL_18:
      *(_DWORD *)(a2 + 8) = v15;
    }
    while ( !*((_BYTE *)v5 + 25) );
  }
  return a2;
}
