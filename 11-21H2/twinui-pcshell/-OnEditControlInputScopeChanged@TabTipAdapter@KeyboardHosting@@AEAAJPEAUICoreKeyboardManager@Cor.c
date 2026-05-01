/*
 * XREFs of ?OnEditControlInputScopeChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlInputScopeChangedEventArgs@45678@@Z @ 0x180162EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlInputScopeChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs *a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v9);
  if ( v4 < 0 )
  {
    v7 = 560LL;
  }
  else
  {
    v5 = *((_QWORD *)this + 6);
    if ( !v5 )
      return 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, v9);
    if ( v4 >= 0 )
      return 0LL;
    v7 = 564LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
