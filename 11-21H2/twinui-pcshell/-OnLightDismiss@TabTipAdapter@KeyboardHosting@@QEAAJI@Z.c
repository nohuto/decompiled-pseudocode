/*
 * XREFs of ?OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z @ 0x180475F94
 * Callers:
 *     ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180462560 (-OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180477C4C (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEA_N@Z @ 0x180483B30 (-VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEA_N@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnLightDismiss(
        KeyboardHosting::TabTipAdapter *this,
        unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v4 = KeyboardHosting::TabTipAdapterPolicy::VerifyLightDismiss(
         (KeyboardHosting::TabTipAdapterPolicy *)(*((_QWORD *)this + 14) + 16LL),
         a2,
         &v8);
  if ( v4 < 0 )
  {
    v5 = 3259LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( v8 )
  {
    v4 = KeyboardHosting::TabTipAdapter::ProcessChangeRequest(this, 2LL, a2);
    if ( v4 < 0 )
    {
      v5 = 3263LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
