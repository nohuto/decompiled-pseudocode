/*
 * XREFs of ?OnTargetConfiguredForAnotherDataSource@GestureHandler@@QEAAXPEAVAnimationTargetClientProxy@@@Z @ 0x1801659B8
 * Callers:
 *     ?OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z @ 0x1801616D0 (-OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x180073E5C (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ @ 0x180073FCC (-SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ.c)
 */

void __fastcall GestureHandler::OnTargetConfiguredForAnotherDataSource(
        GestureHandler *this,
        struct AnimationTargetClientProxy *a2)
{
  int v2; // eax
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 59);
  if ( !v2 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x183,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturehandler.cpp",
      (const char *)0x8000FFFFLL,
      v5);
  v4 = v2 - 1;
  *((_DWORD *)this + 59) = v4;
  if ( !v4 && !*((_DWORD *)this + 58) )
  {
    GestureHandler::SendAnimationEndedIfNeeded(this);
    GestureHandler::CleanupAnimationDataIfNeeded(this);
  }
}
