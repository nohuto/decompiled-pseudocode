/*
 * XREFs of ?GetDefault@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtensionStatics@UIDashboardExtensionStatics@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@3@XZ @ 0x180026BFC
 * Callers:
 *     ?CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180026650 (-CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknow.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtensionStatics<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtensionStatics>::GetDefault(
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
