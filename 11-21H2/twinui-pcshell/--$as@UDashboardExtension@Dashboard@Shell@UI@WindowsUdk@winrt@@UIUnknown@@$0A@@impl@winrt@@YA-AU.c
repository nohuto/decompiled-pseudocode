/*
 * XREFs of ??$as@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@UIUnknown@@$0A@@impl@winrt@@YA?AUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@1@PEAUIUnknown@@@Z @ 0x18017F368
 * Callers:
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@XZ @ 0x18011E834 (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension,IUnknown,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  int v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>, &v5);
    if ( v3 < 0 )
      winrt::throw_hresult((unsigned int)v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
