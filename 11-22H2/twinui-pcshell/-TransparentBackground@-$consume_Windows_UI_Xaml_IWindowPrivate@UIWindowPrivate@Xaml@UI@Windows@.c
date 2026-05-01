/*
 * XREFs of ?TransparentBackground@?$consume_Windows_UI_Xaml_IWindowPrivate@UIWindowPrivate@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1800B113C
 * Callers:
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x18007FE54 (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAE.c)
 *     ?Initialize@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x1800B0DB8 (-Initialize@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@w.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Xaml_IWindowPrivate<winrt::Windows::UI::Xaml::IWindowPrivate>::TransparentBackground(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 1;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 56LL))(*a1, a2);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
