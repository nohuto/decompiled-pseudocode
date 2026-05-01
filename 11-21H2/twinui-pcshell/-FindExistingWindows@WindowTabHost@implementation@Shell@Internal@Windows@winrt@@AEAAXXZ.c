/*
 * XREFs of ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800FE1D4
 * Callers:
 *     ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801675B0 (-perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAX.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180019CFC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x18001AF78 (-SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800FE4F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180168FA0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryGetServicesForAppWindow@?$consume_Windows_Internal_UI_Shell_IWindowTabBrokerStatics@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIWindowTabManagerServices@Shell@UI@Internal@Windows@3@I@Z @ 0x180578C3C (-TryGetServicesForAppWindow@-$consume_Windows_Internal_UI_Shell_IWindowTabBrokerStatics@UIWindow.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindExistingWindows(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this)
{
  int v2; // eax
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  __int64 (__fastcall ***v5)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  struct IApplicationView *v6; // rdx
  unsigned int WindowForView; // ebx
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+28h] [rbp-40h]
  int v10; // [rsp+30h] [rbp-38h] BYREF
  ApplicationViewHelpers *v11; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  __int64 *v15; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  __int64 v17; // [rsp+90h] [rbp+28h] BYREF
  void (__fastcall ***v18)(_QWORD, __int64 *, __int64 *); // [rsp+98h] [rbp+30h] BYREF
  ApplicationViewHelpers *v19; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+40h] BYREF

  v17 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 21) + 24LL))(*((_QWORD *)this + 21), &v17);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x189,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
      (const char *)(unsigned int)v2,
      v8);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    &v8,
    v17);
  v10 = 0;
  v11 = 0LL;
  v12 = &v8;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v10);
  v13 = v9;
  v14 = 0LL;
  v15 = &v8;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v13);
  while ( v10 != v13 || v12 != v15 )
  {
    v5 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v11;
    v19 = v11;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    WindowForView = ApplicationViewHelpers::GetWindowForView(v5, v6);
    winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabBrokerStatics<winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>::TryGetServicesForAppWindow(
      (char *)this + 144,
      &v18,
      WindowForView);
    v20 = 0LL;
    if ( !winrt::Windows::Foundation::operator==(&v18, &v20) )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow(
        (RTL_SRWLOCK *)this,
        WindowForView);
    if ( v18 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
    ++v10;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v10);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  v3 = (_QWORD *)*((_QWORD *)this + 77);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncWindowTabDataModel(this, i[2]);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v17);
}
