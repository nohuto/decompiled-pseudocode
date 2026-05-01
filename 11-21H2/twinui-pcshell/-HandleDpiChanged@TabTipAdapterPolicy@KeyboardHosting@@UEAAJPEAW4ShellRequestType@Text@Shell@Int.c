/*
 * XREFs of ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481290
 * Callers:
 *     ?OnDpiChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1804626C0 (-OnDpiChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1800BE420 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ??$HandleDpiChanged@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18047F284 (--$HandleDpiChanged@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceT.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleDpiChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        enum Windows::Internal::Shell::Text::ShellRequestType *a2)
{
  *(_DWORD *)a2 = 0;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 216));
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 264));
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 312));
  *(_DWORD *)a2 = 3;
  TouchKeyboardExperienceTelemetryLogger::HandleDpiChanged<enum Windows::Internal::Shell::Text::ShellRequestType &>((char *)a2);
  return 0LL;
}
