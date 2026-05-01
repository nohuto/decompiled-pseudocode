/*
 * XREFs of ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x180185A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180185AF4 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnCoreKeyboardHardwareKeyboardUIEnabled(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int refreshed; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+40h] [rbp+18h] BYREF
  char v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a3;
  v10 = 0;
  refreshed = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *, char *))(v3 + 48))(
                a3,
                &v10);
  if ( refreshed < 0 )
  {
    v7 = 1002LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)refreshed);
    return (unsigned int)refreshed;
  }
  LOBYTE(v5) = v10;
  refreshed = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 16) + 136LL))(
                *((_QWORD *)this + 16),
                v5,
                &v11);
  if ( refreshed < 0 )
  {
    v7 = 1004LL;
    goto LABEL_3;
  }
  *((_BYTE *)this + 435) = v10 != 0;
  refreshed = KeyboardHosting::TabTipAdapter::RefreshHardwareKeyboardUIState(this);
  if ( refreshed < 0 )
  {
    v7 = 1007LL;
    goto LABEL_3;
  }
  return 0LL;
}
