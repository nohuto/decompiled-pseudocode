/*
 * XREFs of ?OnDpiChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1804626C0
 * Callers:
 *     wistd::__function::__func__lambda_701785167667dc456d42d6f56ac42826__void___cdecl(void)_::operator() @ 0x18022E1D0 (wistd--__function--__func__lambda_701785167667dc456d42d6f56ac42826__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180078A2C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481290 (-HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Int.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnDpiChanged(TouchKeyboardExperienceManager *this)
{
  RTL_SRWLOCK *v1; // rdi
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)*((_QWORD *)this + 92);
  if ( v1 )
  {
    v2 = KeyboardHosting::TabTipAdapterPolicy::HandleDpiChanged(
           (KeyboardHosting::TabTipAdapterPolicy *)((char *)v1[14].Ptr + 16),
           (enum Windows::Internal::Shell::Text::ShellRequestType *)&v8);
    v4 = v2;
    if ( v2 < 0 )
    {
      v5 = 3069LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v2);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1311,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)v4);
      return v4;
    }
    if ( v8 == 3 )
    {
      v2 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(v1, v3);
      v4 = v2;
      if ( v2 < 0 )
      {
        v5 = 3072LL;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
