/*
 * XREFs of ??4?$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@UI@Windows@@@Z @ 0x1800632FC
 * Callers:
 *     ?SetAncestorClipVisual@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18000D5DC (-SetAncestorClipVisual@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVVisual@.c)
 *     ?SetCastingVisual@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18000D650 (-SetCastingVisual@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVVisual@234@@.c)
 *     ?SetReceivingVisual@CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x180010A7C (-SetReceivingVisual@CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAAXPEAVVisual@2.c)
 *     ?SetCoordinateSpace@SpotLight@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x180062730 (-SetCoordinateSpace@SpotLight@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z.c)
 *     ?Destroy@VisualTarget@Composition@UI@Windows@@UEAAXXZ @ 0x1800628F0 (-Destroy@VisualTarget@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?SetSourceVisual@CompositionVisualSurface@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x180063298 (-SetSourceVisual@CompositionVisualSurface@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z.c)
 *     ?RuntimeClassInitialize@CompositionAnchor@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18006C680 (-RuntimeClassInitialize@CompositionAnchor@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006CB30 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windo.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006D130 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@.c)
 *     ?RuntimeClassInitialize@VisualCollection@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18008A124 (-RuntimeClassInitialize@VisualCollection@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?SetCoordinateSpace@DistantLight@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x180093190 (-SetCoordinateSpace@DistantLight@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z.c)
 *     ?RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVisual@345@_N@Z @ 0x18011DB7C (-RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVi.c)
 *     ?Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@894@M_N@Z @ 0x180154F20 (-Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDe.c)
 *     ?SetRoot@CompositionIslandTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18015A164 (-SetRoot@CompositionIslandTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?SetSource@RedirectVisual@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18016F2A4 (-SetSource@RedirectVisual@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?SetCoordinateSpace@PointLight@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x18017A558 (-SetCoordinateSpace@PointLight@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z.c)
 *     ?SetRoot@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXPEAVVisual@345@@Z @ 0x18018A610 (-SetRoot@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXPEAVVisual@345@@Z.c)
 *     ?SetRoot@CompositionTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x180196E18 (-SetRoot@CompositionTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?GetMany@Api@VisualIterator@Composition@UI@Windows@@UEAAJIPEAPEAUIVisual@345@PEAI@Z @ 0x1801A2FF0 (-GetMany@Api@VisualIterator@Composition@UI@Windows@@UEAAJIPEAPEAUIVisual@345@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        volatile signed __int32 *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  if ( *a1 != (Microsoft::WRL2::NestableRuntimeClass *)a2 )
  {
    if ( a2 && _InterlockedIncrement(a2 + 4) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a2 + 80LL))(a2);
    v4 = *a1;
    *a1 = (Microsoft::WRL2::NestableRuntimeClass *)a2;
    if ( v4 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  return a1;
}
