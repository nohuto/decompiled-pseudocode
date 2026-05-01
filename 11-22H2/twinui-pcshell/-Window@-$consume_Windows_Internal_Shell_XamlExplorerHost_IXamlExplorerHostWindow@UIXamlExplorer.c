/*
 * XREFs of ?Window@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067D160
 * Callers:
 *     ?get_Window@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIControlWindow@34567@@impl@winrt@@UEAAHPEA_K@Z @ 0x18067E400 (-get_Window@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@wi.c)
 *     ?GetScreenCoordinatesForItem@XamlSnapAssistViewHost@@UEAA?AURect@Foundation@Windows@winrt@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@45@@Z @ 0x18076CA30 (-GetScreenCoordinatesForItem@XamlSnapAssistViewHost@@UEAA-AURect@Foundation@Windows@winrt@@AEBUI.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::Window(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 136LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
