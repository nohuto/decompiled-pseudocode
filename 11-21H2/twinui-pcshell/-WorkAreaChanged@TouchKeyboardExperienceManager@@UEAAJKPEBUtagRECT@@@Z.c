/*
 * XREFs of ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x1800BC0B0
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800E3788 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180078A2C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800BE2F0 (-HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAW4ShellRequestT.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::WorkAreaChanged(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  RTL_SRWLOCK *v3; // rdi
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 76);
  if ( !v3 )
    return 0LL;
  *(struct tagRECT *)((char *)this + 344) = *a3;
  v4 = KeyboardHosting::TabTipAdapterPolicy::HandleWorkAreaChanged(
         (KeyboardHosting::TabTipAdapterPolicy *)((char *)v3[14].Ptr + 16),
         a3,
         (enum Windows::Internal::Shell::Text::ShellRequestType *)&v10);
  v6 = v4;
  if ( v4 < 0 )
  {
    v8 = 2594LL;
  }
  else
  {
    if ( v10 != 3 )
      return 0LL;
    v4 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(v3, v5);
    v6 = v4;
    if ( v4 >= 0 )
      return 0LL;
    v8 = 2597LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v4);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF73,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v6);
  return v6;
}
