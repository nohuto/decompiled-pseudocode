/*
 * XREFs of ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18013A648
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync$_ResumeCoro$1 @ 0x18021A7B0 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--InitializeDataAsync$_ResumeCoro$.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180032F5C (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x180092240 (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ @ 0x180117BCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryGetServicesForAppWindow@?$consume_Windows_Internal_UI_Shell_IWindowTabBrokerStatics@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x1802E7E3E (-TryGetServicesForAppWindow@-$consume_Windows_Internal_UI_Shell_IWindowTabBrokerStatics@UIWindow.c)
 *     ?SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x180637DDC (-SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindExistingWindows(RTL_SRWLOCK *this)
{
  __int64 *Ptr; // rcx
  __int64 v3; // rax
  int v4; // eax
  __int64 (__fastcall ***v5)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  struct IApplicationView *v6; // rdx
  unsigned int WindowForView; // ebx
  _QWORD *v8; // rdi
  _QWORD *i; // rbx
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+28h] [rbp-38h]
  int v12; // [rsp+30h] [rbp-30h] BYREF
  ApplicationViewHelpers *v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-20h]
  int v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v17; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF
  RTL_SRWLOCK *v20; // [rsp+98h] [rbp+38h] BYREF
  ApplicationViewHelpers *v21; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+48h] BYREF

  v19 = 0LL;
  Ptr = (__int64 *)this[21].Ptr;
  v3 = *Ptr;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 24))(Ptr, &v19);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x246,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
      (const char *)(unsigned int)v4,
      v10);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    &v10,
    v19);
  v12 = 0;
  v13 = 0LL;
  v14 = &v10;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v12);
  v15 = v11;
  v16 = 0LL;
  v17 = &v10;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v15);
  while ( v12 != v15 || v14 != v17 )
  {
    v5 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v13;
    v21 = v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
    WindowForView = ApplicationViewHelpers::GetWindowForView(v5, v6);
    winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabBrokerStatics<winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>::TryGetServicesForAppWindow(
      &this[18],
      &v20,
      WindowForView);
    v22 = 0LL;
    if ( !winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))&v20, &v22) )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow(this, WindowForView);
    if ( v20 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
    ++v12;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v12);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  AcquireSRWLockExclusive(this + 77);
  v20 = this + 77;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl) )
  {
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this);
  }
  else
  {
    v8 = this[79].Ptr;
    for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncWindowTabDataModel(
        (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this,
        i[2]);
  }
  if ( this != (RTL_SRWLOCK *)-616LL )
    ReleaseSRWLockExclusive(this + 77);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
}
