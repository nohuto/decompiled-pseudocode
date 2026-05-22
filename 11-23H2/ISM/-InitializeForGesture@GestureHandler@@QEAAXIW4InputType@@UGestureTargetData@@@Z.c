/*
 * XREFs of ?InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z @ 0x18015757C
 * Callers:
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x180061DD8 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 *     ?PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@Z @ 0x18016F688 (-PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV-$vec.c)
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x18016FB04 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CASGestureState@GestureHandler@@AEAA?AW4GestureOperationState@@W42@@Z @ 0x180156898 (-CASGestureState@GestureHandler@@AEAA-AW4GestureOperationState@@W42@@Z.c)
 */

__int64 __fastcall GestureHandler::InitializeForGesture(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  _OWORD *v3; // r9
  int v4; // r10d
  int v5; // r11d
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = GestureHandler::CASGestureState(a1, 1);
  if ( (_DWORD)result != 4 )
  {
    if ( (_DWORD)result == 2 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x41,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturehandler.cpp",
        (const char *)0x8000FFFFLL,
        v6);
    *(_OWORD *)(v2 + 184) = *v3;
    *(_DWORD *)(v2 + 136) = v5;
    *(_DWORD *)(v2 + 140) = v4;
  }
  return result;
}
