/*
 * XREFs of ?GetChatIconDefaultSetting@MeetAndChatHelpers@@YA?AW4ChatIconState@1@XZ @ 0x1806B1C74
 * Callers:
 *     ?IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE8A0 (-IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetChatIconSoftwareLicensingPolicy@MeetAndChatHelpers@@YA?AW4ChatIconState@1@XZ @ 0x1806B1D04 (-GetChatIconSoftwareLicensingPolicy@MeetAndChatHelpers@@YA-AW4ChatIconState@1@XZ.c)
 */

__int64 MeetAndChatHelpers::GetChatIconDefaultSetting()
{
  int PolicyInt; // eax
  unsigned int ChatIconSoftwareLicensingPolicy; // ecx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  SHRegGetDWORD(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Communications",
    L"ConfigureChatIcon",
    &v4);
  v5 = 0;
  PolicyInt = PolicyManager_GetPolicyInt(L"Experience", L"ConfigureChatIcon", &v5);
  if ( PolicyInt < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC0,
      (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\MeetAndChatHelpers.h",
      (const char *)(unsigned int)PolicyInt);
  ChatIconSoftwareLicensingPolicy = MeetAndChatHelpers::GetChatIconSoftwareLicensingPolicy();
  result = v4;
  if ( !v4 )
  {
    result = v5;
    if ( !v5 )
      return ChatIconSoftwareLicensingPolicy;
  }
  return result;
}
