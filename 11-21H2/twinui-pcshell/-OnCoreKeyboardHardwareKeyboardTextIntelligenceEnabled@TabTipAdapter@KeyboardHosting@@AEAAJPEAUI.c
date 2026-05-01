/*
 * XREFs of ?OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs@45678@@Z @ 0x18011D280
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x18011F150 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  bool v6; // zf
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v10 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v10);
  if ( v5 < 0 )
  {
    v8 = 764LL;
  }
  else
  {
    *(_BYTE *)(*((_QWORD *)this + 14) + 523LL) = v10 != 0;
    v6 = v10 == 0;
    *((_BYTE *)this + 490) = v10 != 0;
    v5 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, !v6);
    if ( v5 >= 0 )
      return 0LL;
    v8 = 771LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
