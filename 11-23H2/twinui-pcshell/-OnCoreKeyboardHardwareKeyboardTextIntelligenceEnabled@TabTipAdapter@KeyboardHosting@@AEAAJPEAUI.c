/*
 * XREFs of ?OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs@45678@@Z @ 0x180185BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x180185C88 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  bool v9; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+40h] [rbp+18h] BYREF
  char v12; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a3;
  v11 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v11);
  if ( v6 < 0 )
  {
    v7 = 1052LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  LOBYTE(v5) = v11;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 16) + 144LL))(
         *((_QWORD *)this + 16),
         v5,
         &v12);
  if ( v6 < 0 )
  {
    v7 = 1054LL;
    goto LABEL_3;
  }
  v9 = v11 == 0;
  *((_BYTE *)this + 434) = v11 != 0;
  v6 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, !v9);
  if ( v6 < 0 )
  {
    v7 = 1060LL;
    goto LABEL_3;
  }
  return 0LL;
}
