/*
 * XREFs of ?OnViewVisibilityChanged@UndockedSearchAppExperienceManager@@AEAAXAEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUViewVisibilityChangedEventArgs@3456@@Z @ 0x180047A1C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs___lambda_352628a2d1ddb7fdbe9aad4ec4f36b56___::Invoke @ 0x1800479C0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell.c)
 * Callees:
 *     ??$UndockedSearchAppExperienceManager_SearchAppVisibilityChanged@AEAW4SearchAppState@@@SearchAppExperienceManagerTelemetry@@SAXAEAW4SearchAppState@@@Z @ 0x180047AE0 (--$UndockedSearchAppExperienceManager_SearchAppVisibilityChanged@AEAW4SearchAppState@@@SearchApp.c)
 *     ?CancelVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B4B08 (-CancelVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800E8E74 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall UndockedSearchAppExperienceManager::OnViewVisibilityChanged(
        struct IUnknown *this,
        const struct winrt::WindowsUdk::UI::Shell::ViewCoordinator *a2,
        const struct winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-8h]
  int v9; // [rsp+38h] [rbp+10h] BYREF
  int v10; // [rsp+3Ch] [rbp+14h]

  v10 = HIDWORD(a2);
  v9 = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)a3 + 48LL))(*(_QWORD *)a3, &v9);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  if ( v9 == 1 )
  {
    v6 = *(_QWORD *)a3;
    v9 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 56LL))(v6, &v9);
    if ( v7 < 0 )
      winrt::throw_hresult((unsigned int)v7);
    if ( !v9 )
    {
      SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SearchAppVisibilityChanged<enum SearchAppState &>(&this[92]);
      UndockedSearchAppExperienceManager::CancelVisibilityChangedTimeoutTimer((UndockedSearchAppExperienceManager *)this);
      ExperienceManagerUtils::PostToUIThread((ExperienceManagerUtils *)this[7].lpVtbl, this, (void *)0x401, 8u, v8);
    }
  }
}
