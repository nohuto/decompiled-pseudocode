/*
 * XREFs of ??$?0UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@P80123456@EAAXAEBUDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@6@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@89UI@Microsoft@6@@Z@?$TypedEventHandler@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAUXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@23@P84567823@EAAXAEBUDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@3@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@Microsoft@3@@Z@Z @ 0x1800531B0
 * Callers:
 *     ?TakeFocusRequested@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@67@@Z @ 0x1800530D4 (-TakeFocusRequested@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Inte.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>::TypedEventHandler<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>(
        _QWORD *a1,
        __int64 a2,
        __m128d *a3)
{
  __m128d v4; // xmm6
  char *v6; // [rsp+20h] [rbp-38h]
  _BYTE v7[24]; // [rsp+28h] [rbp-30h]

  v4 = *a3;
  *(_QWORD *)v7 = a2;
  *(__m128d *)&v7[8] = *a3;
  v6 = (char *)operator new(0x28uLL);
  *(_OWORD *)(v6 + 8) = *(_OWORD *)v7;
  *((_QWORD *)v6 + 3) = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 8) = 1;
  *(_QWORD *)v6 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>,_lambda_24f9a2f893cdb50a379e319867e5c1aa_>::`vftable';
  *a1 = v6;
  return a1;
}
