/*
 * XREFs of ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180481740
 * Callers:
 *     ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x1800BC010 (-OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core.c)
 * Callees:
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180053554 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1800BE420 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ??$HandleEditControlSelectionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAM000$$QEAIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18022F934 (--$HandleEditControlSelectionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@.c)
 *     ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x180480998 (-GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Win.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlSelectionChanged(
        __int64 a1,
        float *a2,
        int *a3)
{
  HMONITOR CurrentMonitor; // rdi
  KeyboardHosting::MonitorInformation *v7; // rcx
  int v9[4]; // [rsp+30h] [rbp-38h] BYREF
  __m128i v10[2]; // [rsp+40h] [rbp-28h] BYREF

  v10[0] = *(__m128i *)a2;
  CurrentMonitor = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(a1, v10);
  *(_QWORD *)(a1 + 232) = CurrentMonitor;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)(a1 + 232));
  v7 = (KeyboardHosting::MonitorInformation *)(a1 + 328);
  if ( *(HMONITOR *)(a1 + 328) != CurrentMonitor )
  {
    *(_QWORD *)v7 = CurrentMonitor;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v7);
  }
  *(__m128i *)(a1 + 144) = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                                              (float *)v10[0].m128i_i32,
                                                              a2,
                                                              *(_DWORD *)(a1 + 272)));
  *(_OWORD *)(a1 + 160) = *(_OWORD *)a2;
  *a3 = 0;
  v9[0] = *(_DWORD *)(a1 + 272);
  TouchKeyboardExperienceTelemetryLogger::HandleEditControlSelectionChanged<float &,float &,float &,float &,unsigned int,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    (int *)(a1 + 144),
    (int *)(a1 + 148),
    (int *)(a1 + 152),
    (int *)(a1 + 156),
    v9,
    a3);
  return 0LL;
}
