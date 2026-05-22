/*
 * XREFs of ??$call@AEAV_lambda_0f39583cb48dd27cb0d6a0869c546935_@@@?$factory_cache_entry@UWindowManagementPreview@Preview@WindowManagement@UI@Windows@winrt@@UIWindowManagementPreviewStatics2@23456@@impl@winrt@@QEAA?AUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@2@AEAV_lambda_0f39583cb48dd27cb0d6a0869c546935_@@@Z @ 0x1800EEFF8
 * Callers:
 *     ?GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800F03DC (-GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18004C289 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@winrt@@YA?AUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1800EF2EC (--$get_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>::call<_lambda_0f39583cb48dd27cb0d6a0869c546935_ &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v5; // rbx
  __int64 v6; // rax
  void (__fastcall **v7)(_QWORD *, __int64 *, __int64 *); // rax
  char v8; // si
  __int64 v9; // rcx
  _DWORD *v11; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v12[4]; // [rsp+28h] [rbp-18h] BYREF
  const wchar_t *v13; // [rsp+38h] [rbp-8h]
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  _QWORD *v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v15 = a3;
  v14 = a1;
  if ( aWindowsUiWindo[59] )
  {
    _o_terminate(a1, a2, a3, a4);
    __debugbreak();
  }
  v12[0] = 1;
  v13 = L"Windows.UI.WindowManagement.Preview.WindowManagementPreview";
  v12[1] = 59;
  v11 = v12;
  winrt::get_activation_factory<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>(
    &v15,
    &v11);
  v5 = v15;
  if ( !v15 )
  {
    v6 = 0LL;
    v16 = 0LL;
    goto LABEL_6;
  }
  v7 = (void (__fastcall **)(_QWORD *, __int64 *, __int64 *))*v15;
  v14 = 0LL;
  (*v7)(v15, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v14);
  v6 = v14;
  v8 = 1;
  v16 = v14;
  if ( !v14 )
  {
LABEL_6:
    v8 = 0;
    if ( !v6 )
      goto LABEL_8;
  }
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v16);
LABEL_8:
  if ( v8 )
  {
    _InterlockedIncrement64(&qword_180242A18);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>,
            (signed __int64)v15,
            0LL) )
    {
      v15 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180242A20);
    }
    v9 = winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>;
    *a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    _InterlockedDecrement64(&qword_180242A18);
    if ( v15 )
      goto LABEL_16;
  }
  else
  {
    *a2 = v5;
    if ( v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
LABEL_16:
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v15);
    }
  }
  return a2;
}
