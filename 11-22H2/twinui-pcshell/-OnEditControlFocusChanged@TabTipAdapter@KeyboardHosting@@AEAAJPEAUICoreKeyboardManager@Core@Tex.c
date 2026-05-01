/*
 * XREFs of ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x180133130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180133248 (-ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlFocusChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int Focus; // edi
  __int64 v7; // rdx
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v15; // [rsp+40h] [rbp+18h] BYREF
  int v16; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a3;
  v15 = 0;
  Focus = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs *, char *))(v3 + 48))(
            a3,
            &v15);
  if ( Focus < 0 )
  {
    v7 = 822LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)Focus);
    return (unsigned int)Focus;
  }
  if ( v15 )
  {
    v9 = *((_BYTE *)this + 485);
    *((_BYTE *)this + 485) = 1;
    if ( !v9 )
    {
      Focus = KeyboardHosting::TabTipAdapter::ActivateInputAppOnFirstFocus(this);
      if ( Focus < 0 )
      {
        v7 = 828LL;
        goto LABEL_3;
      }
    }
  }
  v10 = *((_QWORD *)this + 7);
  if ( v10 )
  {
    LOBYTE(v5) = v15 != 0;
    Focus = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, v5);
    if ( Focus < 0 )
    {
      v7 = 834LL;
      goto LABEL_3;
    }
  }
  v11 = *((_QWORD *)this + 15);
  v16 = 0;
  LOBYTE(v5) = v15;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v11 + 72LL))(v11, v5, &v16);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x346,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
