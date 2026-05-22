/*
 * XREFs of ??4?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800062F0
 * Callers:
 *     ?TryFindTargetAnimator@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180006228 (-TryFindTargetAnimator@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006CB30 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windo.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006D130 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@.c)
 *     ?EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ @ 0x18006E764 (-EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?GetAnimatablePropertyInfo@CompositionSpriteShape@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180071300 (-GetAnimatablePropertyInfo@CompositionSpriteShape@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@P.c)
 *     ?GetAnimatablePropertyInfo@CompositionShape@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180071550 (-GetAnimatablePropertyInfo@CompositionShape@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4An.c)
 *     ?EnsureComponentTransform@CompositionGradientBrush@Composition@UI@Windows@@AEAAJXZ @ 0x180071DA0 (-EnsureComponentTransform@CompositionGradientBrush@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?EnsureComponentTransform@CompositionClip@Composition@UI@Windows@@AEAAJXZ @ 0x180072A0C (-EnsureComponentTransform@CompositionClip@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?EnsureComponentTransform@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJXZ @ 0x18018A02C (-EnsureComponentTransform@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z @ 0x180196AD4 (-RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUIC.c)
 *     ?RuntimeClassInitialize@ConditionalExpressionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAVConditionalExpressionAnimation@234@@Z @ 0x18019AEA8 (-RuntimeClassInitialize@ConditionalExpressionAnimator@Composition@UI@Windows@@QEAAJPEAVComposito.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>::operator=(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass **a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*a2);
    v4 = *a1;
    *a1 = v2;
    if ( v4 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  return a1;
}
