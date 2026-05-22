/*
 * XREFs of ?TryGetPropertyAnimator@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x1800061D0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryFindTargetAnimator@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180006228 (-TryFindTargetAnimator@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@XZ @ 0x18004EA04 (-GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::TryGetPropertyAnimator(
        Windows::UI::Composition::CompositorCommon **this,
        HSTRING a2,
        struct Windows::UI::Composition::CompositionPropertyAnimator **a3)
{
  Windows::UI::Composition::AnimationBindingManager *BindingManager; // rax
  int TargetAnimator; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  BindingManager = Windows::UI::Composition::CompositorCommon::GetBindingManager(this[3]);
  TargetAnimator = Windows::UI::Composition::AnimationBindingManager::TryFindTargetAnimator(
                     BindingManager,
                     (struct Windows::UI::Composition::ProxyObject *)this,
                     a2,
                     a3);
  v8 = TargetAnimator;
  if ( TargetAnimator >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F2,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
    (const char *)(unsigned int)TargetAnimator,
    v10);
  return v8;
}
