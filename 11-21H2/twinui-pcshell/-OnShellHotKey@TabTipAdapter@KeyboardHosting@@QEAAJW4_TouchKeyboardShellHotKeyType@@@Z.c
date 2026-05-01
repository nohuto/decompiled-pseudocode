/*
 * XREFs of ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x180476FA0
 * Callers:
 *     ?OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x1804636A0 (-OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 *     ?ShowClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180464BE0 (-ShowClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheForegroundAppId@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B9BA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheForegroundAppId@@@details@wil@@QEAAX.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@QEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18045EA30 (-GetInputAppState@TouchKeyboardExperienceManager@@QEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ??$ShellHotKeyRequestReceived@IPEBGAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEAPEBGAEA_N0@Z @ 0x18046C5E0 (--$ShellHotKeyRequestReceived@IPEBGAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEA.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180477A10 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?ShouldShowEmojiTipsOnHotKey@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x18048314C (-ShouldShowEmojiTipsOnHotKey@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellHotKey(__int64 a1, int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  void *p_hstringHeader; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  HSTRING v10; // rbx
  int v11; // eax
  HSTRING v12; // rbx
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rdx
  int InputAppState; // [rsp+20h] [rbp-68h] BYREF
  int v18; // [rsp+28h] [rbp-60h] BYREF
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-50h] BYREF
  HSTRING v21; // [rsp+50h] [rbp-38h]
  HSTRING_HEADER v22; // [rsp+58h] [rbp-30h] BYREF
  HSTRING v23; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v19 = a1;
  v18 = a2;
  InputAppState = TouchKeyboardExperienceManager::GetInputAppState(*(RTL_SRWLOCK **)(a1 + 64));
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheForegroundAppId>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CacheForegroundAppId>::GetImpl'::`2'::impl,
    1u,
    v4,
    v5);
  std::wstring::wstring((__int64)&hstringHeader, *(_QWORD *)(a1 + 112) + 624LL);
  v18 = InputAppState;
  p_hstringHeader = &hstringHeader;
  if ( (unsigned __int64)v21 >= 8 )
    p_hstringHeader = hstringHeader.Reserved.Reserved1;
  v19 = (__int64)p_hstringHeader;
  InputAppState = a2;
  TouchKeyboardExperienceTelemetryLogger::ShellHotKeyRequestReceived<unsigned int,unsigned short const *,bool &,unsigned int>(
    &InputAppState,
    &v19,
    (char *)(a1 + 489),
    &v18);
  std::wstring::_Tidy_deallocate((__int64)&hstringHeader);
  v9 = 2;
  if ( a2 == 1 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheForegroundAppId>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_CacheForegroundAppId>::GetImpl'::`2'::impl,
      1u,
      v7,
      v8);
    if ( KeyboardHosting::TabTipAdapterPolicy::ShouldShowEmojiTipsOnHotKey(*(KeyboardHosting::TabTipAdapterPolicy **)(a1 + 112)) )
    {
      v21 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
      v10 = v21;
      v23 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v22, L"ShowEmojiPanelTips", 0x13u, 0x12u);
      v11 = KeyboardHosting::TabTipAdapter::SetShellPreference((KeyboardHosting::TabTipAdapter *)a1, v23, v10);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA66,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v11);
    }
    else
    {
      v23 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v22, L"0", 2u, 1u);
      v12 = v23;
      v21 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ShowEmojiPanelTips", 0x13u, 0x12u);
      v13 = KeyboardHosting::TabTipAdapter::SetShellPreference((KeyboardHosting::TabTipAdapter *)a1, v21, v12);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA6A,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v13);
    }
  }
  else if ( a2 == 2 )
  {
    v9 = 4;
  }
  else
  {
    v9 = 3;
    if ( a2 != 3 )
    {
      v14 = -2147024809;
      v15 = 2679LL;
      goto LABEL_18;
    }
  }
  v14 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(a1, v9, 4LL, 1LL);
  if ( v14 >= 0 )
    return 0LL;
  v15 = 2683LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v14);
  return (unsigned int)v14;
}
