/*
 * XREFs of ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x180528120
 * Callers:
 *     ?OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x180514B80 (-OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 *     ?ShowClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180516900 (-ShowClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x180063150 (-GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180188BA0 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$01@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY01$$CBG@Z @ 0x1802DA028 (--$-0$01@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY01$$CBG@Z.c)
 *     ??$?0$0BD@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BD@$$CBG@Z @ 0x1803AAEAC (--$-0$0BD@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BD@$$CBG@Z.c)
 *     ??$ShellHotKeyRequestReceived@IPEBGAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEAPEBGAEA_N0@Z @ 0x18051E750 (--$ShellHotKeyRequestReceived@IPEBGAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEA.c)
 *     ?InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1805248FC (-InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180528A64 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardView_ea_180528A64.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellHotKey(__int64 a1, int a2)
{
  const char *v2; // r9
  int InputAppState; // esi
  __int64 v4; // rdi
  int v5; // ebx
  unsigned int v6; // esi
  HSTRING Reserved1; // rbx
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  HSTRING v10; // rbx
  HSTRING_HEADER *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v17; // rdx
  _BYTE v18[4]; // [rsp+20h] [rbp-88h] BYREF
  int v19; // [rsp+24h] [rbp-84h] BYREF
  int v20; // [rsp+28h] [rbp-80h] BYREF
  _QWORD *v21; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v22[4]; // [rsp+38h] [rbp-70h] BYREF
  HSTRING_HEADER v23; // [rsp+58h] [rbp-50h] BYREF
  HSTRING_HEADER v24; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  try
  {
    v5 = a2;
    v4 = a1;
    v21 = (_QWORD *)a1;
    v20 = a2;
    InputAppState = KeyboardHosting::TabTipAdapter::GetInputAppState(a1);
    v19 = InputAppState;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x8A3,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      v2);
    InputAppState = v19;
    v4 = (__int64)v21;
    v5 = v20;
  }
  KeyboardHosting::TabTipAdapter::InvokeGetForegroundAppId(v4, (HSTRING)v22);
  v20 = InputAppState;
  v21 = std::wstring::c_str(v22);
  v19 = v5;
  TouchKeyboardExperienceTelemetryLogger::ShellHotKeyRequestReceived<unsigned int,unsigned short const *,bool &,unsigned int>(
    &v19,
    (__int64 *)&v21,
    (char *)(v4 + 433),
    &v20);
  v6 = 2;
  if ( v5 == 1 )
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(v4 + 128) + 312LL))(*(_QWORD *)(v4 + 128), v18);
    if ( v18[0] )
    {
      Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, L"1")[1].Reserved.Reserved1;
      v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, L"ShowEmojiPanelTips");
      v9 = KeyboardHosting::TabTipAdapter::SetShellPreference(
             (KeyboardHosting::TabTipAdapter *)v4,
             (HSTRING)v8[1].Reserved.Reserved1,
             Reserved1);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8B0,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v9);
    }
    else
    {
      v10 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, L"0")[1].Reserved.Reserved1;
      v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, L"ShowEmojiPanelTips");
      v12 = KeyboardHosting::TabTipAdapter::SetShellPreference(
              (KeyboardHosting::TabTipAdapter *)v4,
              (HSTRING)v11[1].Reserved.Reserved1,
              v10);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8B4,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v12);
    }
  }
  else if ( v5 == 2 )
  {
    v6 = 4;
  }
  else
  {
    v6 = 3;
    if ( v5 != 3 )
    {
      v14 = -2147024809;
      v15 = 2241LL;
      goto LABEL_17;
    }
  }
  v14 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(v4, v6, 4LL, 1LL);
  if ( v14 >= 0 )
  {
    wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(v22, v13);
    return 0LL;
  }
  v15 = 2245LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v14);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(v22, v17);
  return (unsigned int)v14;
}
