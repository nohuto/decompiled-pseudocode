/*
 * XREFs of ?SendCurrentGestureEvent@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@@Z @ 0x18017DC6C
 * Callers:
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x180074B34 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D310 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x180115B7C (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180165A18 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellGesturesProcessor::SendCurrentGestureEvent(
        ShellGesturesProcessor *this,
        struct ShellGesturesProcessor::HandlerContext *a2)
{
  __int64 v2; // r11
  int v3; // eax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::weak_ptr<SystemCursorService2>::lock((__int64)a2 + 16, &v4);
  if ( v4 )
  {
    v3 = GestureHandler::ProcessGesture(
           v4,
           *(__int64 **)(v2 + 8),
           *(_DWORD *)(*(_QWORD *)(v2 + 8) + 24LL),
           *(_DWORD *)(v2 + 4));
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x387,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\shell"
             "gesturesprocessor.cpp",
        (const char *)(unsigned int)v3,
        v4);
  }
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
