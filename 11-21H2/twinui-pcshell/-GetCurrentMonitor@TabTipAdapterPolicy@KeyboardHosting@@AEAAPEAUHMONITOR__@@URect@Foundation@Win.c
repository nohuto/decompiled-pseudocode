/*
 * XREFs of ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x180480998
 * Callers:
 *     ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x1804812F0 (-HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveA.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180481740 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 * Callees:
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x1800BE260 (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 */

HMONITOR __fastcall KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(__int64 a1, __m128i *a2)
{
  __m128i v4; // [rsp+20h] [rbp-18h] BYREF

  if ( GetSystemMetrics(80) <= 1 )
    return MonitorFromWindow(0LL, 1u);
  v4 = *a2;
  return KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(&v4);
}
