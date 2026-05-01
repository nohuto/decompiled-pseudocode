/*
 * XREFs of _lambda_5b1893e84c025059ea9350e935de1321_::operator()_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_const_&_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_const_&_ @ 0x18028CE68
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs___lambda_5b1893e84c025059ea9350e935de1321___::Invoke @ 0x18028D4B0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18028D4B0.c)
 * Callees:
 *     ?DynamicSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18001A360 (-DynamicSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shel.c)
 *     ?StaticSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005C310 (-StaticSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell.c)
 *     ?ScreenPointToImmersiveMonitorClient@@YA?AVPoint@Foundation@Windows@@PEAUIImmersiveMonitor@@V123@@Z @ 0x18006D3E8 (-ScreenPointToImmersiveMonitorClient@@YA-AVPoint@Foundation@Windows@@PEAUIImmersiveMonitor@@V123.c)
 *     ?DisplayArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006F618 (-DisplayArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@Win.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0Point@Foundation@Windows@@QEAA@MM@Z @ 0x1801BF87C (--0Point@Foundation@Windows@@QEAA@MM@Z.c)
 *     ??$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z @ 0x180785EF0 (--$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z.c)
 *     ?DisplayMonitorInfo@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoChangedEventArgs@UIDisplayMonitorInfoChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180786644 (-DisplayMonitorInfo@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoChangedEventArgs@UIDisplayM.c)
 *     ?OnDisplayMonitorInfoChanged@__ITaskViewTimelinePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXN@Z @ 0x180787774 (-OnDisplayMonitorInfoChanged@__ITaskViewTimelinePublicNonVirtuals@Switcher@Experiences@Composabl.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_5b1893e84c025059ea9350e935de1321_::operator()_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_const___winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_const___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  float *v4; // rbx
  float v5; // xmm6_4
  float *v6; // rbx
  float *v7; // rax
  Windows::Foundation::Point *v8; // rax
  _OWORD *v9; // rbx
  _OWORD *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-50h] BYREF
  __int128 v12; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  char v15; // [rsp+90h] [rbp+20h] BYREF
  __int64 v16; // [rsp+98h] [rbp+28h] BYREF
  float v17; // [rsp+A8h] [rbp+38h] BYREF

  v16 = a2;
  if ( *(_QWORD *)a1 )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoChangedEventArgs<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoChangedEventArgs>::DisplayMonitorInfo(
      a3,
      &v16);
    v4 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DisplayArea(
                    &v16,
                    &v11);
    v5 = *((float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DisplayArea(
                      &v16,
                      &v12)
         + 1)
       + v4[3];
    v6 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::StaticSafeWorkArea(
                    &v16,
                    &v13);
    v7 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::StaticSafeWorkArea(
                    &v16,
                    &v14);
    v8 = Windows::Foundation::Point::Point(
           (Windows::Foundation::Point *)&v15,
           0.0,
           (float)(v5 - (float)(v7[1] + v6[3])) - *(double *)(a1 + 16));
    ScreenPointToImmersiveMonitorClient(
      &v17,
      *(__int64 **)(a1 + 8),
      _mm_unpacklo_ps((__m128)*(unsigned int *)v8, (__m128)*((unsigned int *)v8 + 1)).m128_i64[0]);
    v9 = winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
           &v16,
           &v14);
    v10 = winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DisplayArea(
            &v16,
            &v13);
    XamlSwitcherTelemetry::DisplayMonitorInfoUpdate<float,float,double const &>(
      (char *)v10 + 12,
      (char *)v9 + 12,
      a1 + 16);
    WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelinePublicNonVirtuals::OnDisplayMonitorInfoChanged(*(_QWORD *)a1);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v16);
  }
}
