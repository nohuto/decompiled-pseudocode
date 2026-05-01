/*
 * XREFs of ?GetChatIconDefaultSetting@MeetAndChatHelpers@@YA?AW4ChatIconState@1@XZ @ 0x1805C1514
 * Callers:
 *     ?IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ @ 0x1805CD2D8 (-IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetChatIconSoftwareLicensingPolicy@MeetAndChatHelpers@@YA?AW4ChatIconState@1@XZ @ 0x1805C1578 (-GetChatIconSoftwareLicensingPolicy@MeetAndChatHelpers@@YA-AW4ChatIconState@1@XZ.c)
 */

__int64 MeetAndChatHelpers::GetChatIconDefaultSetting()
{
  int PolicyInt; // eax
  unsigned int ChatIconSoftwareLicensingPolicy; // eax
  unsigned int v2; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  PolicyInt = PolicyManager_GetPolicyInt(L"Experience", L"ConfigureChatIcon", &v5);
  if ( PolicyInt < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAB,
      (__int64)"internal\\shellcommondesktopbase\\inc\\MeetAndChatHelpers.h",
      (const char *)(unsigned int)PolicyInt);
  ChatIconSoftwareLicensingPolicy = MeetAndChatHelpers::GetChatIconSoftwareLicensingPolicy();
  v2 = v5;
  if ( !v5 )
    return ChatIconSoftwareLicensingPolicy;
  return v2;
}
