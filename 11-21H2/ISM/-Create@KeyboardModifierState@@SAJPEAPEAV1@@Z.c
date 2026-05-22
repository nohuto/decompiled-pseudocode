/*
 * XREFs of ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180039888
 * Callers:
 *     ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800395D0 (-Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z @ 0x1800E0138 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800E090C (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 * Callees:
 *     ?Initialize@KeyboardModifierState@@AEAAJXZ @ 0x18003990C (-Initialize@KeyboardModifierState@@AEAAJXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0KeyboardModifierState@@AEAA@XZ @ 0x18003B788 (--0KeyboardModifierState@@AEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardModifierState::Create(struct KeyboardModifierState **a1)
{
  KeyboardModifierState *v2; // rax
  KeyboardModifierState *v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  int v7; // [rsp+20h] [rbp-8h]
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
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\ke"
                    "yboardmodifierstate.cpp",
      (const char *)(unsigned int)v4,
      v7);
    return v5;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\ke"
                    "yboardmodifierstate.cpp",
      (const char *)0x8007000ELL,
      v7);
    return 2147942414LL;
  }
}
