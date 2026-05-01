/*
 * XREFs of ?HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x18068B1A8
 * Callers:
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1 @ 0x180228430 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_ResumeCoro$1.c)
 *     ?OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@_N@Z @ 0x18067BAA0 (-OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@@Z @ 0x180685830 (-TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Interna.c)
 *     ??$SnapBar_HitTestSystemArrangementArea@AEAMAEAM_N@WindowDragInputProviderTelemetry@@SAXAEAM0$$QEA_N@Z @ 0x18068A5AC (--$SnapBar_HitTestSystemArrangementArea@AEAMAEAM_N@WindowDragInputProviderTelemetry@@SAXAEAM0$$Q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowDragInputProvider::HitTestControl(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, _QWORD *); // rbx
  signed int v4; // eax
  float v5[4]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v7)(_QWORD, void *, __int64 *); // [rsp+68h] [rbp+38h] BYREF

  *(_QWORD *)v5 = a2;
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::TryGetHitTestResultForPoint(
    (const struct winrt::Windows::Foundation::Point *)&v7,
    v5);
  v3 = v7;
  if ( v7 )
  {
    v6 = 0LL;
    v4 = (**v7)(v7, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>, &v6);
    if ( v4 < 0 )
      winrt::throw_hresult(v4);
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)(a1 + 56),
      (winrt::Windows::Foundation::IUnknown *)&v6);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
    LOBYTE(v6) = 1;
  }
  else
  {
    LOBYTE(v6) = 0;
  }
  WindowDragInputProviderTelemetry::SnapBar_HitTestSystemArrangementArea<float &,float &,bool>(
    (int *)v5,
    (int *)&v5[1],
    (char *)&v6);
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
}
