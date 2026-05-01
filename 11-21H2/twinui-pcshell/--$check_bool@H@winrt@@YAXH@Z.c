/*
 * XREFs of ??$check_bool@H@winrt@@YAXH@Z @ 0x1800F9CBC
 * Callers:
 *     ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1801A4914 (-ExtractMonitorInfo@SearchAppPositionerHelpers@@YA-AUMonitorInfo@@AEBUtagRECT@@V-$ComPtr@UIServi.c)
 * Callees:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x18033DC7C (-throw_last_error@winrt@@YAXXZ.c)
 */

void __fastcall winrt::check_bool<int>(winrt *a1)
{
  if ( !(_DWORD)a1 )
    winrt::throw_last_error(a1);
}
