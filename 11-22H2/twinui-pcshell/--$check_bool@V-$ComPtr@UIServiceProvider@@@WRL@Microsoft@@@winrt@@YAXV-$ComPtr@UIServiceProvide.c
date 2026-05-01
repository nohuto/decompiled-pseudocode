/*
 * XREFs of ??$check_bool@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@winrt@@YAXV?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1800D5D18
 * Callers:
 *     ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1800D532C (-ExtractMonitorInfo@SearchAppPositionerHelpers@@YA-AUMonitorInfo@@AEBUtagRECT@@V-$ComPtr@UIServi.c)
 * Callees:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::check_bool<Microsoft::WRL::ComPtr<IServiceProvider>>(winrt *a1)
{
  if ( !*(_QWORD *)a1 )
    winrt::throw_last_error(a1);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a1);
}
