/*
 * XREFs of ?GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z @ 0x180194FC0
 * Callers:
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z @ 0x1800E0138 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800E090C (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall KeyboardModifierState::GetCurrentKeyboardModifierState(
        KeyboardModifierState *this,
        unsigned int *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *a2 = *((_DWORD *)this + 20);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\keyboardmodifierstate.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
