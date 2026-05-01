/*
 * XREFs of ?GetCurrentAsync@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollectionStatics@UIDisplayMonitorInfoCollectionStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180188760
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_faee3f0e95e2d80e7101cf985e892c5a_@@CA@AEBUIDisplayMonitorInfoCollectionStatics@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801886C0 (-_lambda_invoker_cdecl_@_lambda_faee3f0e95e2d80e7101cf985e892c5a_@@CA@AEBUIDisplayMonitorInfoCol.c)
 *     ?GetCurrentAsync@DisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801886E8 (-GetCurrentAsync@DisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollectionStatics<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollectionStatics>::GetCurrentAsync(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
