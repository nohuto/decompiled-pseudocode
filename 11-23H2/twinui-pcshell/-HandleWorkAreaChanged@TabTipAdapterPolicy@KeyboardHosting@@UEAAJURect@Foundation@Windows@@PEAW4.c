/*
 * XREFs of ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18014A520
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18014AF7C (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x18014B200 (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ??$HandleWorkAreaChanged@AEAMAEAMAEAMAEAMAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAM000AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18014B6EC (--$HandleWorkAreaChanged@AEAMAEAMAEAMAEAMAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Tou.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleWorkAreaChanged(__int64 a1, __int128 *a2, _DWORD *a3)
{
  int updated; // eax
  unsigned int v7; // edi
  __int64 CurrentMonitorWithRect; // rax
  __int64 v9; // rdi
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0;
  updated = UpdateScalingInfoCache();
  v7 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A0,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
    return v7;
  }
  else
  {
    v11 = *a2;
    CurrentMonitorWithRect = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(&v11);
    v9 = CurrentMonitorWithRect;
    if ( CurrentMonitorWithRect )
    {
      *(_QWORD *)(a1 + 216) = CurrentMonitorWithRect;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)(a1 + 216));
      if ( v9 == *(_QWORD *)(a1 + 376) )
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)(a1 + 376));
      if ( v9 == *(_QWORD *)(a1 + 296) )
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)(a1 + 296));
    }
    *a3 = 3;
    TouchKeyboardExperienceTelemetryLogger::HandleWorkAreaChanged<float &,float &,float &,float &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
      (_DWORD)a2,
      (_DWORD)a2 + 4,
      (_DWORD)a2 + 8,
      (_DWORD)a2 + 12,
      (__int64)a3);
    return 0LL;
  }
}
