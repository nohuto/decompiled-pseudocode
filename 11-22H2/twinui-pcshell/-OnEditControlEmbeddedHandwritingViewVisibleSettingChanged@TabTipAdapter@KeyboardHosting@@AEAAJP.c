/*
 * XREFs of ?OnEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs@45678@@Z @ 0x180192D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18074B410 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlEmbeddedHandwritingViewVisibleSettingChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  bool v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a3;
  v11 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v11);
  if ( v6 < 0 )
  {
    v7 = 934LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  LOBYTE(v5) = v11;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 15) + 224LL))(
         *((_QWORD *)this + 15),
         v5,
         &v12);
  if ( v6 < 0 )
  {
    v7 = 937LL;
    goto LABEL_3;
  }
  if ( v12 == 2 )
  {
    IhmNotification::SendKeyboardSetVisible(0LL, 0, v9);
    v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8);
    if ( v6 < 0 )
    {
      v7 = 943LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
