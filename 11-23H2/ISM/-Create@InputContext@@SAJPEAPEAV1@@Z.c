/*
 * XREFs of ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x1800F8BD0
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180022450 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z @ 0x1801B1250 (-GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801B2B20 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnTargetWithFocusChanged@NonPointerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x1801B2C60 (-OnTargetWithFocusChanged@NonPointerProcessor@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801D8670 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801D9770 (-OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??0InputContext@@QEAA@XZ @ 0x1800F7A00 (--0InputContext@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputContext::Create(struct InputContext **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  InputContext *v5; // rax
  InputContext *v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
  {
    v2 = -2147024809;
    v3 = 63LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\ContextualProcessors\\inc\\IContextualProcessor.h",
      (const char *)v2);
    return v2;
  }
  v5 = (InputContext *)RefCountedObject::operator new(0xC0uLL);
  v6 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0xC0uLL);
    v5 = InputContext::InputContext(v6);
  }
  if ( !v5 )
  {
    v2 = -2147024882;
    v3 = 65LL;
    goto LABEL_3;
  }
  *a1 = v5;
  return 0LL;
}
