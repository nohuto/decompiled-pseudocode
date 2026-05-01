/*
 * XREFs of ?InitializeSnapQuadrantsPolicy@SnapLayoutHelpers@@YAXXZ @ 0x180112174
 * Callers:
 *     ?PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ @ 0x1801389B0 (-PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?MaximumSnappedWindowsPolicy@?$consume_WindowsUdk_UI_Shell_ISnapLayoutManager@UISnapLayoutManager@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180112230 (-MaximumSnappedWindowsPolicy@-$consume_WindowsUdk_UI_Shell_ISnapLayoutManager@UISnapLayoutManage.c)
 *     ??$call@AEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@?$factory_cache_entry@USnapLayoutManager@Shell@UI@WindowsUdk@winrt@@UISnapLayoutManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@Z @ 0x180112284 (--$call@AEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@-$factory_cache_entry@USnapLayoutManager.c)
 *     ?GetForDisplay@?$consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics@UISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUDisplayRegion@WindowManagement@UI@Windows@3@@Z @ 0x1801123DC (-GetForDisplay@-$consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics@UISnapLayoutManagerStatic.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellWindowingLimitSnappedWindows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801145FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellWindowingLimitSnappedWindows@@@detai.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall SnapLayoutHelpers::InitializeSnapQuadrantsPolicy(SnapLayoutHelpers *this, __int64 a2)
{
  char v2; // di
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // eax
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  int v7; // [rsp+50h] [rbp+20h] BYREF
  __int64 v8; // [rsp+58h] [rbp+28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF

  v2 = 1;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ShellWindowingLimitSnappedWindows>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ShellWindowingLimitSnappedWindows>::GetImpl'::`2'::impl,
    a2);
  v8 = 0LL;
  v6[0] = &v8;
  v6[1] = &qword_18098E528;
  _InterlockedAdd64(&qword_18098E528, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics<winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>::GetForDisplay(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>,
      &v9,
      &v8);
    _InterlockedDecrement64(&qword_18098E528);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E528);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>::call<_lambda_706f938a80e432de8be00e3d53e53638_ &>(
      v3,
      &v9,
      v6);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutManager<winrt::WindowsUdk::UI::Shell::ISnapLayoutManager>::MaximumSnappedWindowsPolicy(
    &v9,
    &v10);
  v4 = v10;
  if ( !v10 )
    goto LABEL_6;
  v7 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 56LL))(v10, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  if ( v7 != 1 )
LABEL_6:
    v2 = 0;
  byte_18098D528 = v2;
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
}
