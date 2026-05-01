/*
 * XREFs of ?StartSwipe@CAllUpViewService@@UEAAJIUtagPOINT@@@Z @ 0x180494600
 * Callers:
 *     <none>
 * Callees:
 *     ?ToggleAllUpView@CAllUpViewService@@UEAAJPEAUHMONITOR__@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18002F020 (-ToggleAllUpView@CAllUpViewService@@UEAAJPEAUHMONITOR__@@W4ALL_UP_VIEW_FLAGS@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAllUpViewService::StartSwipe(CAllUpViewService *this, __int64 a2, struct tagPOINT a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CAllUpViewService::ToggleAllUpView((__int64)this + 8, 0LL, 1);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
