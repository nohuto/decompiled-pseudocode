/*
 * XREFs of ?GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800F03DC
 * Callers:
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800F1DBC (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@1@AEBI@Z @ 0x1800812D8 (--$find@X@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$.c)
 *     ??$call@AEAV_lambda_0f39583cb48dd27cb0d6a0869c546935_@@@?$factory_cache_entry@UWindowManagementPreview@Preview@WindowManagement@UI@Windows@winrt@@UIWindowManagementPreviewStatics2@23456@@impl@winrt@@QEAA?AUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@2@AEAV_lambda_0f39583cb48dd27cb0d6a0869c546935_@@@Z @ 0x1800EEFF8 (--$call@AEAV_lambda_0f39583cb48dd27cb0d6a0869c546935_@@@-$factory_cache_entry@UWindowManagementP.c)
 *     ??$emplace@U?$pair@II@std@@@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@II@1@@Z @ 0x1800EF164 (--$emplace@U-$pair@II@std@@@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?GetForContainerIdAndHwnd@?$consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics2@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA?AUWindowId@UI@Windows@3@AEBUguid@3@_K@Z @ 0x1800EFD38 (-GetForContainerIdAndHwnd@-$consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreview.c)
 */

__int64 __fastcall ViewHierarchyWithWindowManager::GetProxyWindow(ViewHierarchyWithWindowManager *this, int a2)
{
  float *v3; // rsi
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v12[2]; // [rsp+28h] [rbp-40h] BYREF
  float *v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  __int128 v15; // [rsp+48h] [rbp-20h] BYREF

  v12[0] = a2;
  v3 = (float *)((char *)this + 192);
  v13 = (float *)((char *)this + 192);
  std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::find<void>(
    (_QWORD *)this + 24,
    &v11,
    (const unsigned __int8 *)v12);
  if ( v11 != *((_QWORD *)this + 25) )
    return *(unsigned int *)(v11 + 20);
  v7 = (__int64 *)((char *)this + 184);
  if ( !*v7 )
  {
    _InterlockedIncrement64(&qword_180242A18);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2> )
    {
      v11 = winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>
                                      + 8LL))(winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>);
      _InterlockedDecrement64(&qword_180242A18);
    }
    else
    {
      _InterlockedDecrement64(&qword_180242A18);
      winrt::impl::factory_cache_entry<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>::call<_lambda_0f39583cb48dd27cb0d6a0869c546935_ &>(
        0LL,
        &v11,
        v4,
        v5);
    }
    if ( v7 == &v11 )
    {
      v9 = v11;
    }
    else
    {
      if ( *v7 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v7);
      v8 = v11;
      v9 = 0LL;
      v11 = 0LL;
      *v7 = v8;
    }
    if ( v9 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v11);
  }
  try
  {
    LODWORD(v11) = 0;
    v15 = 0uLL;
    v10 = *(_DWORD *)winrt::impl::consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics2<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>::GetForContainerIdAndHwnd(
                       (__int64 **)v7,
                       &v14,
                       &v15,
                       v12[0]);
    LODWORD(v11) = v10;
  }
  catch ( ... )
  {
    v10 = v11;
    v3 = v13;
  }
  if ( v10 )
  {
    v12[1] = v10;
    std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace<std::pair<unsigned int,unsigned int>>(
      v3,
      (__int64)&v13,
      (__int64)v12);
  }
  return v10;
}
