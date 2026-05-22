/*
 * XREFs of ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x1800375A8
 * Callers:
 *     ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180037860 (-Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z @ 0x180108648 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x180108C38 (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0KeyboardModifierState@@AEAA@XZ @ 0x180035EE0 (--0KeyboardModifierState@@AEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@KeyboardModifierState@@AEAAJXZ @ 0x18004AB80 (-Initialize@KeyboardModifierState@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardModifierState::Create(struct KeyboardModifierState **a1)
{
  KeyboardModifierState *v2; // rax
  KeyboardModifierState *v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( KeyboardModifierState::s_pKeyboardModifierState )
  {
    (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)KeyboardModifierState::s_pKeyboardModifierState
                                                           + 8LL))(KeyboardModifierState::s_pKeyboardModifierState);
    v3 = KeyboardModifierState::s_pKeyboardModifierState;
    goto LABEL_7;
  }
  v2 = (KeyboardModifierState *)RefCountedObject::operator new(0x58uLL);
  if ( v2 )
    v3 = KeyboardModifierState::KeyboardModifierState(v2);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = KeyboardModifierState::Initialize(v3);
    v5 = v4;
    if ( v4 >= 0 )
    {
      KeyboardModifierState::s_pKeyboardModifierState = v3;
LABEL_7:
      *a1 = v3;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\keyboar"
               "dmodifierstate.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\keyboar"
               "dmodifierstate.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
