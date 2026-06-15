/*
 * XREFs of ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180012190
 * Callers:
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002471C (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::_Lower_bound_duplicate<std::wstring>(
        __int64 a1,
        __int64 a2,
        char *a3)
{
  char *v3; // r9
  _QWORD *v4; // rax
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  __int64 v7; // rcx
  signed __int64 v8; // r9
  unsigned __int16 v9; // dx
  int v10; // eax

  v3 = a3;
  if ( *(_BYTE *)(a2 + 25) )
    return 0;
  v4 = (_QWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 48);
  if ( *(_QWORD *)(a2 + 56) >= 8uLL )
    v4 = (_QWORD *)*v4;
  v6 = *((_QWORD *)a3 + 2);
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    v3 = *(char **)a3;
  v7 = *(_QWORD *)(a2 + 48);
  if ( v5 >= v6 )
    v7 = *((_QWORD *)a3 + 2);
  if ( !v7 )
    return v6 >= v5;
  v8 = v3 - (char *)v4;
  while ( 1 )
  {
    v9 = *(_WORD *)((char *)v4 + v8);
    if ( v9 < *(_WORD *)v4 )
      break;
    if ( v9 > *(_WORD *)v4 )
    {
      v10 = 1;
      return v10 >= 0;
    }
    if ( v7 == 1 )
      return v6 >= v5;
    --v7;
    v4 = (_QWORD *)((char *)v4 + 2);
  }
  v10 = -1;
  return v10 >= 0;
}
