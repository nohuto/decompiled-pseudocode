/*
 * XREFs of ?GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1801095F8
 * Callers:
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x18010B1FC (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@1@AEBI@Z @ 0x1800985C8 (--$find@X@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$.c)
 *     ??$call@AEAV_lambda_83cc9fc9ac8bc00941158b6f437a3d67_@@@?$factory_cache_entry@UWindowManagementPreview@Preview@WindowManagement@UI@Windows@winrt@@UIWindowManagementPreviewStatics2@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_83cc9fc9ac8bc00941158b6f437a3d67_@@@Z @ 0x18010843C (--$call@AEAV_lambda_83cc9fc9ac8bc00941158b6f437a3d67_@@@-$factory_cache_entry@UWindowManagementP.c)
 *     ??$emplace@U?$pair@II@std@@@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@II@1@@Z @ 0x180108594 (--$emplace@U-$pair@II@std@@@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?GetForContainerIdAndHwnd@?$consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics2@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUguid@3@_K@Z @ 0x180108EEC (-GetForContainerIdAndHwnd@-$consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreview.c)
 */

__int64 __fastcall ViewHierarchyWithWindowManager::GetProxyWindow(ViewHierarchyWithWindowManager *this, int a2)
{
  float *v3; // rsi
  _QWORD *v4; // r8
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v11[2]; // [rsp+28h] [rbp-40h] BYREF
  float *v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  __int128 v14; // [rsp+48h] [rbp-20h] BYREF

  v11[0] = a2;
  v3 = (float *)((char *)this + 192);
  v12 = (float *)((char *)this + 192);
  std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::find<void>(
    (_QWORD *)this + 24,
    &v10,
    (const unsigned __int8 *)v11);
  if ( v10 != *((_QWORD *)this + 25) )
    return *(unsigned int *)(v10 + 20);
  v6 = (__int64 *)((char *)this + 184);
  if ( !*v6 )
  {
    _InterlockedIncrement64(&qword_180268A98);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2> )
    {
      v10 = winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>
                                      + 8LL))(winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>);
      _InterlockedDecrement64(&qword_180268A98);
    }
    else
    {
      _InterlockedDecrement64(&qword_180268A98);
      winrt::impl::factory_cache_entry<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>::call<_lambda_83cc9fc9ac8bc00941158b6f437a3d67_ &>(
        0LL,
        &v10,
        v4);
    }
    if ( v6 == &v10 )
    {
      v8 = v10;
    }
    else
    {
      if ( *v6 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v6);
      v7 = v10;
      v8 = 0LL;
      v10 = 0LL;
      *v6 = v7;
    }
    if ( v8 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v10);
  }
  try
  {
    LODWORD(v10) = 0;
    v14 = 0uLL;
    v9 = *(_DWORD *)winrt::impl::consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics2<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>::GetForContainerIdAndHwnd(
                      (__int64 **)v6,
                      &v13,
                      &v14,
                      v11[0]);
    LODWORD(v10) = v9;
  }
  catch ( ... )
  {
    v9 = v10;
    v3 = v12;
  }
  if ( v9 )
  {
    v11[1] = v9;
    std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace<std::pair<unsigned int,unsigned int>>(
      v3,
      (__int64)&v12,
      (__int64)v11);
  }
  return v9;
}
