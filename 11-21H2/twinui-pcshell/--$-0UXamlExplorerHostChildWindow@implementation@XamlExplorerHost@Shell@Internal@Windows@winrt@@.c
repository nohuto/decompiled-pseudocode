/*
 * XREFs of ??$?0UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@P80123456@EAAXAEBUDesktopWindowXamlSource@Hosting@Xaml@UI@56@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@89UI@56@@Z@?$TypedEventHandler@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAUXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@23@P84567823@EAAXAEBUDesktopWindowXamlSource@Hosting@Xaml@UI@23@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@23@@Z@Z @ 0x1800FBB74
 * Callers:
 *     ?TakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@67@@Z @ 0x1800FBA04 (-TakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@W.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>::TypedEventHandler<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>(
        _QWORD *a1,
        __int64 a2,
        __m128d *a3)
{
  __m128d v4; // xmm6
  _BYTE v6[24]; // [rsp+20h] [rbp-38h]
  char *v7; // [rsp+60h] [rbp+8h]

  v4 = *a3;
  *(_QWORD *)v6 = a2;
  *(__m128d *)&v6[8] = *a3;
  v7 = (char *)operator new(0x28uLL);
  *(_OWORD *)(v7 + 8) = *(_OWORD *)v6;
  *((_QWORD *)v7 + 3) = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v7 + 8) = 1;
  *(_QWORD *)v7 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>,_lambda_65d9d95dc8f5b1840d03fd77ef45dc28_>::`vftable';
  *a1 = v7;
  return a1;
}
