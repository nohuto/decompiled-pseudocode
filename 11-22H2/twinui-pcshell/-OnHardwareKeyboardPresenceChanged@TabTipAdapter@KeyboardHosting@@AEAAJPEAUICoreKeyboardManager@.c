/*
 * XREFs of ?OnHardwareKeyboardPresenceChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardPresenceChangedEventArgs@45678@@Z @ 0x1801AB640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnHardwareKeyboardPresenceChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardPresenceChangedEventArgs *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+40h] [rbp+18h] BYREF
  char v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a3;
  v10 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardPresenceChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v10);
  if ( v6 < 0 )
  {
    v7 = 992LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  LOBYTE(v5) = v10;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 15) + 128LL))(
         *((_QWORD *)this + 15),
         v5,
         &v11);
  if ( v6 < 0 )
  {
    v7 = 994LL;
    goto LABEL_3;
  }
  return 0LL;
}
