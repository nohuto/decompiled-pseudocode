/*
 * XREFs of ?GetSearchMode@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1800D5B68
 * Callers:
 *     ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1800D532C (-ExtractMonitorInfo@SearchAppPositionerHelpers@@YA-AUMonitorInfo@@AEBUtagRECT@@V-$ComPtr@UIServi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetSearchMode(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v3 + 64LL))(v3, a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *a2 = v7;
  return a2;
}
