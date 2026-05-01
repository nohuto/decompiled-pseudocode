/*
 * XREFs of ?ActualHeight@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBANXZ @ 0x1805B8720
 * Callers:
 *     ?CalculateFlyoutBounds@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AURect@Foundation@67@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@67@PEAUHWND__@@_NAEBU8967@@Z @ 0x1805B87B8 (-CalculateFlyoutBounds@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@wi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

double __fastcall winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<winrt::Windows::UI::Xaml::IFrameworkElement>::ActualHeight(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  double v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0.0;
  v2 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v1 + 112LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
