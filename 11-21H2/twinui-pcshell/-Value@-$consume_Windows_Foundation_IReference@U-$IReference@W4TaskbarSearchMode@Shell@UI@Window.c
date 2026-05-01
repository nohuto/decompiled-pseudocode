/*
 * XREFs of ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@W4TaskbarSearchMode@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@W4TaskbarSearchMode@Shell@UI@WindowsUdk@4@@impl@winrt@@QEBA?AW4TaskbarSearchMode@Shell@UI@WindowsUdk@3@XZ @ 0x1800F99D8
 * Callers:
 *     ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1801A4914 (-ExtractMonitorInfo@SearchAppPositionerHelpers@@YA-AUMonitorInfo@@AEBUtagRECT@@V-$ComPtr@UIServi.c)
 *     ?ExtractMonitorInfo@MiniSearchAppPositionerConfig@@UEAA?AUMonitorInfo@@AEBUtagRECT@@@Z @ 0x1803AE3E0 (-ExtractMonitorInfo@MiniSearchAppPositionerConfig@@UEAA-AUMonitorInfo@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<enum winrt::WindowsUdk::UI::Shell::TaskbarSearchMode>,enum winrt::WindowsUdk::UI::Shell::TaskbarSearchMode>::Value(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  return v4;
}
