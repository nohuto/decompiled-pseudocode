/*
 * XREFs of ?GetForegroundApplicationRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@UtagRECT@@PEAUHWND__@@@std@@XZ @ 0x18062B3F4
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x1802194D0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1802194D0.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetForegroundApplicationRect(
        __int64 a1,
        __int64 a2)
{
  HWND ForegroundWindow; // rdi
  const char *v4; // r9
  struct tagRECT v5; // xmm0
  __int64 result; // rax
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  ForegroundWindow = GetForegroundWindow();
  if ( !GetWindowRect(ForegroundWindow, &Rect) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0xD7,
      (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
      v4);
  v5 = Rect;
  *(_QWORD *)a2 = ForegroundWindow;
  result = a2;
  *(struct tagRECT *)(a2 + 8) = v5;
  return result;
}
