/*
 * XREFs of ?ReturnHrMsgInvalidArgument@Composition@UI@Windows@@YAJW4ApiError@123@@Z @ 0x180149B78
 * Callers:
 *     ?PlayAnimations@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@PEBUAnimationValueData@234@W4AnimationValueSynchronizationBehavior@234@PEA_NPEAV?$vector@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@V?$allocator@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@@std@@@std@@@Z @ 0x1801519FC (-PlayAnimations@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234.c)
 *     ?StartAnimationGroupWithIAnimationObject@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAUIAnimationObject@234@PEAV?$vector@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@V?$allocator@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180152110 (-StartAnimationGroupWithIAnimationObject@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJ.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Lookup@ApiErrorMessageTable@Composition@UI@Windows@@SAPEBGW4ApiError@234@@Z @ 0x18014997C (-Lookup@ApiErrorMessageTable@Composition@UI@Windows@@SAPEBGW4ApiError@234@@Z.c)
 */

__int64 Windows::UI::Composition::ReturnHrMsgInvalidArgument()
{
  const char *v0; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v0 = (const char *)Windows::UI::Composition::ApiErrorMessageTable::Lookup(11);
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x90,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtapierror.cpp",
    (const char *)0x80070057LL,
    (int)"%ws",
    v0);
  return 2147942487LL;
}
