/*
 * XREFs of ?OnButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerBottomEdgeCandidateWindowAlignmentChangedEventArgs@45678@@Z @ 0x18014D080
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180078A2C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnButtomEdgeCandidateWindowAlignmentChanged(
        RTL_SRWLOCK *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerBottomEdgeCandidateWindowAlignmentChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  __int64 Ptr; // rdx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v10 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerBottomEdgeCandidateWindowAlignmentChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v10);
  if ( v5 < 0 )
  {
    v8 = 478LL;
  }
  else
  {
    Ptr = (__int64)this[14].Ptr;
    if ( *(_BYTE *)(Ptr + 509) == (v10 != 0) )
      return 0LL;
    *(_BYTE *)(Ptr + 509) = v10 != 0;
    v5 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this, Ptr);
    if ( v5 >= 0 )
      return 0LL;
    v8 = 484LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
