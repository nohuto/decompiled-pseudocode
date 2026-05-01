/*
 * XREFs of ??$as@UIDashboardExtensionStatics@Dashboard@Shell@UI@WindowsUdk@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIDashboardExtensionStatics@Dashboard@Shell@UI@WindowsUdk@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800880EC
 * Callers:
 *     ??$as@UIDashboardExtensionStatics@Dashboard@Shell@UI@WindowsUdk@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x180087A80 (--$as@UIDashboardExtensionStatics@Dashboard@Shell@UI@WindowsUdk@winrt@@@IUnknown@Foundation@Wind.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtensionStatics,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtensionStatics>, &v5);
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
