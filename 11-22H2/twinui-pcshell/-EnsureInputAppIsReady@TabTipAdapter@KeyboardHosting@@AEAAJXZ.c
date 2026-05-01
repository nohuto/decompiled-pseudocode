/*
 * XREFs of ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802DCE94
 * Callers:
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180185AF4 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _lambda_825306615c33696f43f5a813d6c29089_::operator() @ 0x180208004 (_lambda_825306615c33696f43f5a813d6c29089_--operator().c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x180528520 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x180528814 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18052A148 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentInputAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1801332FC (-GetCurrentInputAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G@std.c)
 *     ?empty@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NXZ @ 0x180133394 (-empty@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NXZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180188BA0 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DCCF2 (--1EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??$Start@PEBG@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@$$QEAPEBG@Z @ 0x18051EC3C (--$Start@PEBG@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@SA-AV01@$$QEAPEBG@Z.c)
 *     ?InvokeActivateInputApp@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180524854 (-InvokeActivateInputApp@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1805248A8 (-InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Stop@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXJ@Z @ 0x18052B8D8 (-Stop@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(KeyboardHosting::TabTipAdapter *this)
{
  int v2; // eax
  int v3; // edx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  _QWORD v8[5]; // [rsp+28h] [rbp-180h] BYREF
  _BYTE v9[320]; // [rsp+50h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  KeyboardHosting::TabTipAdapter::GetCurrentInputAppId((__int64)this, v8);
  std::wstring::c_str(v8);
  TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::Start<unsigned short const *>((TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady *)v9);
  if ( !std::wstring::empty((__int64)v8) )
  {
    v2 = KeyboardHosting::TabTipAdapter::InvokeEnsureInputAppIsActivated(this);
    v4 = v2;
    if ( v2 < 0 )
    {
      v5 = 2174LL;
      goto LABEL_6;
    }
LABEL_7:
    TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::Stop(
      (TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady *)v9,
      v3);
    v4 = 0;
    goto LABEL_8;
  }
  v2 = KeyboardHosting::TabTipAdapter::InvokeActivateInputApp(this);
  v4 = v2;
  if ( v2 >= 0 )
    goto LABEL_7;
  v5 = 2169LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v2);
LABEL_8:
  TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::~EnsureInputAppIsReady((TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady *)v9);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(v8, v6);
  return v4;
}
