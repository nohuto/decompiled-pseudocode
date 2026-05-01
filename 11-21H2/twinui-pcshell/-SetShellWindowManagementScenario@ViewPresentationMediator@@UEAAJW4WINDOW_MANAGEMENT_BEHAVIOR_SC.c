/*
 * XREFs of ?SetShellWindowManagementScenario@ViewPresentationMediator@@UEAAJW4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@0@Z @ 0x18014E230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ @ 0x18014E270 (-EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ.c)
 */

__int64 __fastcall ViewPresentationMediator::SetShellWindowManagementScenario(__int64 a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 200) = a3 & a2 | *(_DWORD *)(a1 + 200) & ~a2;
  v3 = ViewPresentationMediator::EnableShellWindowManagementBehavior((ViewPresentationMediator *)(a1 - 104));
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE3,
      (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
