/*
 * XREFs of ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180017400
 * Callers:
 *     ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180009980 (-GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSp.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800166BC (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180014364 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180014450 (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 *     ?GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z @ 0x18003BD0C (-GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::GetApplicationSpecificEndpointInfo(
        CProcess *this,
        struct IApplicationSpecificEndpointInfo **a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  unsigned __int16 *ApplicationName; // rbp
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 *v7; // r14
  unsigned __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rcx
  struct IApplicationSpecificEndpointInfo *v11; // rcx
  _BYTE v13[16]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+30h] [rbp-58h]
  char *v15[3]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-38h]

  v3 = 0;
  *a2 = 0LL;
  v4 = *((_QWORD *)this + 28);
  ApplicationName = (unsigned __int16 *)ApplicationSpecificEndpointInfo::GetApplicationName(this);
  *a2 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(v4 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
  v7 = (__int64 *)(v4 + 704);
  v15[2] = 0LL;
  v16 = 7LL;
  LOWORD(v15[0]) = 0;
  v8 = -1LL;
  do
    ++v8;
  while ( ApplicationName[v8] );
  std::wstring::assign(v15, ApplicationName, v8);
  std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<std::wstring>(
    (__int64 *)(v4 + 704),
    (__int64)v13,
    (__int64)v15);
  v9 = v14;
  if ( !std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::_Lower_bound_duplicate<std::wstring>(
          v10,
          v14,
          (char *)v15) )
    v9 = *v7;
  if ( v16 >= 8 )
    std::_Deallocate<16,0>(v15[0], 2 * v16 + 2);
  if ( v9 == *v7 )
  {
    if ( v6 )
      LeaveCriticalSection(v6);
    return (unsigned int)-2147023728;
  }
  else
  {
    v11 = *(struct IApplicationSpecificEndpointInfo **)(v9 + 64);
    if ( v11 )
    {
      *a2 = v11;
      (*(void (__fastcall **)(struct IApplicationSpecificEndpointInfo *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    else
    {
      *a2 = 0LL;
    }
    if ( v6 )
      LeaveCriticalSection(v6);
  }
  return v3;
}
