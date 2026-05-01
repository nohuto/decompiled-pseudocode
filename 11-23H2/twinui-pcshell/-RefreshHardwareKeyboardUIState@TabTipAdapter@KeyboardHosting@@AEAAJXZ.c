/*
 * XREFs of ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180185AF4
 * Callers:
 *     ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x180185A30 (-OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardMa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18014B338 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x180185C88 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802DCE94 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1805248A8 (-InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::RefreshHardwareKeyboardUIState(KeyboardHosting::TabTipAdapter *this)
{
  int IsReady; // edi
  __int64 v3; // rdx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 435) )
  {
    IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(this);
    if ( IsReady < 0 )
    {
      v3 = 1027LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)IsReady);
      return (unsigned int)IsReady;
    }
    IsReady = KeyboardHosting::TabTipAdapter::InvokeEnsureInputAppIsActivated(this);
    if ( IsReady < 0 )
    {
      v3 = 1028LL;
      goto LABEL_4;
    }
    IsReady = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 1);
    if ( IsReady < 0 )
    {
      v3 = 1030LL;
      goto LABEL_4;
    }
    v5 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate((RTL_SRWLOCK *)this);
    if ( v5 < 0 )
    {
      v6 = 1037LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  else
  {
    v5 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 0);
    if ( v5 < 0 )
    {
      v6 = 1042LL;
      goto LABEL_11;
    }
  }
  return 0LL;
}
