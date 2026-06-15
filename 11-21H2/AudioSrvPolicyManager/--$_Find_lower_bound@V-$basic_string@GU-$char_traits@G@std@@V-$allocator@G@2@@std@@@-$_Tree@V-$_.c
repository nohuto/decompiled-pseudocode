/*
 * XREFs of ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180014364
 * Callers:
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180017400 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180019EAC (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<std::wstring>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 *v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  char *v8; // rax
  char *v9; // r8
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r11
  unsigned __int16 v12; // r9
  signed __int64 v13; // rax
  bool v14; // cc
  unsigned __int16 v15; // r9
  int v16; // eax
  int v17; // eax

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
        v12 = *(_WORD *)v8;
        if ( *(_WORD *)v8 < *(_WORD *)v9 )
        {
LABEL_15:
          v16 = -1;
        }
        else
        {
          v13 = v8 - v9;
          v14 = v12 <= *(_WORD *)v9;
          while ( v14 )
          {
            if ( v11 == 1 )
              goto LABEL_21;
            v9 += 2;
            --v11;
            v15 = *(_WORD *)&v9[v13];
            v14 = v15 <= *(_WORD *)v9;
            if ( v15 < *(_WORD *)v9 )
              goto LABEL_15;
          }
          v16 = 1;
        }
        if ( v16 < 0 )
        {
LABEL_22:
          v5 = (__int64 *)v5[2];
          v17 = 0;
          goto LABEL_18;
        }
      }
      else
      {
LABEL_21:
        if ( v10 < v6 )
          goto LABEL_22;
      }
      *(_QWORD *)(a2 + 16) = v5;
      v17 = 1;
      v5 = (__int64 *)*v5;
LABEL_18:
      *(_DWORD *)(a2 + 8) = v17;
    }
    while ( !*((_BYTE *)v5 + 25) );
  }
  return a2;
}
