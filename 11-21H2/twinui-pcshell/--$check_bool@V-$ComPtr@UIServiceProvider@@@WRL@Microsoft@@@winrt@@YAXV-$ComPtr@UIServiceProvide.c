/*
 * XREFs of ??$check_bool@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@winrt@@YAXV?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1800F9CD8
 * Callers:
 *     ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1801A4914 (-ExtractMonitorInfo@SearchAppPositionerHelpers@@YA-AUMonitorInfo@@AEBUtagRECT@@V-$ComPtr@UIServi.c)
 *     ?ExtractMonitorInfo@MiniSearchAppPositionerConfig@@UEAA?AUMonitorInfo@@AEBUtagRECT@@@Z @ 0x1803AE3E0 (-ExtractMonitorInfo@MiniSearchAppPositionerConfig@@UEAA-AUMonitorInfo@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x18033DC7C (-throw_last_error@winrt@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::check_bool<Microsoft::WRL::ComPtr<IServiceProvider>>(winrt *a1)
{
  if ( !*(_QWORD *)a1 )
    winrt::throw_last_error(a1);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a1);
}
