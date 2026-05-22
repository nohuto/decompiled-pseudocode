/*
 * XREFs of ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x1800DEF30
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180018D90 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z @ 0x180193390 (-GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180194BF0 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnTargetWithFocusChanged@NonPointerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x180194D30 (-OnTargetWithFocusChanged@NonPointerProcessor@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BA370 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BB420 (-OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??0InputContext@@QEAA@XZ @ 0x1800DDD68 (--0InputContext@@QEAA@XZ.c)
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
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\ContextualProcessors\\inc\\IContextualProcessor.h",
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
