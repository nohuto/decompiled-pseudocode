/*
 * XREFs of ?OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800BBF10
 * Callers:
 *     ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x1800436E0 (-OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800E3788 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180078A2C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleConvertibleSlateModeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800BDA40 (-HandleConvertibleSlateModeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestT.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnConvertibleSlateModeChanged(TouchKeyboardExperienceManager *this)
{
  int SystemMetrics; // eax
  __int64 v3; // rdi
  KeyboardHosting::TabTipAdapterPolicy *v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 92) )
    return 0LL;
  SystemMetrics = GetSystemMetrics(8195);
  v3 = *((_QWORD *)this + 92);
  v4 = *(KeyboardHosting::TabTipAdapterPolicy **)(v3 + 112);
  *(_BYTE *)(v3 + 350) = SystemMetrics != 0;
  v5 = KeyboardHosting::TabTipAdapterPolicy::HandleConvertibleSlateModeChanged(
         v4,
         SystemMetrics != 0,
         (enum Windows::Internal::Shell::Text::ShellRequestType *)&v11);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( v11 == 3 )
    {
      v5 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate((RTL_SRWLOCK *)v3, v6);
      v7 = v5;
      if ( v5 < 0 )
      {
        v9 = 3129LL;
        goto LABEL_8;
      }
    }
    return 0LL;
  }
  v9 = 3126LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1325,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v7);
  return v7;
}
