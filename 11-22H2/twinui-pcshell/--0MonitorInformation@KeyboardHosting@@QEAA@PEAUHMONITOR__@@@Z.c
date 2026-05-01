/*
 * XREFs of ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x180064314
 * Callers:
 *     ?GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z @ 0x18014A9FC (-GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z.c)
 *     ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x180535300 (-VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windo.c)
 * Callees:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18014AF7C (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

KeyboardHosting::MonitorInformation *__fastcall KeyboardHosting::MonitorInformation::MonitorInformation(
        KeyboardHosting::MonitorInformation *this,
        HMONITOR a2)
{
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_DWORD *)this + 10) = 100;
  *(_OWORD *)((char *)this + 44) = 0LL;
  *(_OWORD *)((char *)this + 60) = 0LL;
  *(_QWORD *)this = a2;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo(this);
  return this;
}
