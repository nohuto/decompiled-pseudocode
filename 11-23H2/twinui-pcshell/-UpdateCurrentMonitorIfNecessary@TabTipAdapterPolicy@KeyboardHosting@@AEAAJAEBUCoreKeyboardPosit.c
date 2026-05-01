/*
 * XREFs of ?UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1805350D8
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180535540 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x1800BE690 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18014AF7C (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::UpdateCurrentMonitorIfNecessary(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a2)
{
  const char *v3; // r9
  HMONITOR v5; // rdi
  KeyboardHosting::MonitorInformation *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT Point; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)a2 == 6
    && KeyboardHosting::IsRectNull((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 176), a2) )
  {
    if ( !GetCursorPos(&Point) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x251,
               (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
               v3);
    v5 = MonitorFromPoint(Point, 2u);
    *((_QWORD *)this + 29) = v5;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 232));
    v6 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 392);
    if ( *((HMONITOR *)this + 49) != v5 )
    {
      *(_QWORD *)v6 = v5;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v6);
    }
  }
  return 0LL;
}
