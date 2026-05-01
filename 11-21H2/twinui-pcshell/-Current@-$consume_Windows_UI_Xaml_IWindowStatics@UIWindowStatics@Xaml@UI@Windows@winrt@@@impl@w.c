/*
 * XREFs of ?Current@?$consume_Windows_UI_Xaml_IWindowStatics@UIWindowStatics@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUWindow@Xaml@UI@Windows@3@XZ @ 0x180170348
 * Callers:
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@KAEBURect@Foundation@56@@Z @ 0x18002FDCC (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@KAE.c)
 *     ??0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@PEAUHWND__@@AEBUhstring@6@@Z @ 0x1800F536C (--0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?_lambda_invoker_cdecl_@_lambda_43d092c5da9a5068682fa4571a07bb24_@@CA?AUWindow@Xaml@UI@Windows@winrt@@AEBUIWindowStatics@3456@@Z @ 0x180170320 (-_lambda_invoker_cdecl_@_lambda_43d092c5da9a5068682fa4571a07bb24_@@CA-AUWindow@Xaml@UI@Windows@w.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_IWindowStatics<winrt::Windows::UI::Xaml::IWindowStatics>::Current(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
