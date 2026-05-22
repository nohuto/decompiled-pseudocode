/*
 * XREFs of ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8
 * Callers:
 *     ?Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x18003E270 (-Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?InsertExpressionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAUHSTRING__@@PEAVCompositionEasingFunction@234@@Z @ 0x18005E190 (-InsertExpressionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAUHSTRING__@@PEAVCom.c)
 *     ?CreateExpressionAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@345@@Z @ 0x18005E7A0 (-CreateExpressionAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimati.c)
 *     ?CreateExpressionAnimation@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVExpressionAnimation@234@@Z @ 0x18005EA10 (-CreateExpressionAnimation@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVE.c)
 *     ?CreateExpressionAnimationWithExpression@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIExpressionAnimation@345@@Z @ 0x18005F160 (-CreateExpressionAnimationWithExpression@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING.c)
 *     ?CreateSurface@CompositionGraphicsDevice@Composition@UI@Windows@@AEAAJAEBUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@_N3PEAPEAVCompositionDrawingSurface@234@@Z @ 0x18006157C (-CreateSurface@CompositionGraphicsDevice@Composition@UI@Windows@@AEAAJAEBUSizeInt32@Graphics@4@W.c)
 *     ?CreateDrawingSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSize@Foundation@5@W4DirectXPixelFormat@DirectX@Graphics@5@W4DirectXAlphaMode@9Graphics@5@PEAPEAUICompositionDrawingSurface@345@@Z @ 0x180061680 (-CreateDrawingSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSize@Foundatio.c)
 *     ?CreateDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@_NPEAPEAVCompositionDrawingSurface@234@@Z @ 0x1800617A4 (-CreateDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics.c)
 *     ?SetKeyframeData@KeyFrameAnimation@Composition@UI@Windows@@AEAAJPEAUKeyframeList@@MAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x180082E70 (-SetKeyframeData@KeyFrameAnimation@Composition@UI@Windows@@AEAAJPEAUKeyframeList@@MAEAUKeyframeV.c)
 *     ?AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z @ 0x180090AD0 (-AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z.c)
 *     ??1?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A0E10 (--1-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ.c)
 *     ??4?$RefPtr@VExpressionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVExpressionAnimation@Composition@UI@Windows@@@Z @ 0x1800B6908 (--4-$RefPtr@VExpressionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVExpres.c)
 *     ?CopySurface@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUICompositionDrawingSurface@234@PEAPEAUIDXGISurface@@@Z @ 0x180100D90 (-CopySurface@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUICompositionDrawingS.c)
 *     ?CreateAnimationTriggerPartner@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@345@PEAU?$IIterable@PEAVCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@Collections@Foundation@5@PEAPEAUICompositionAnimationTriggerPartner@1345@@Z @ 0x18010E7E0 (-CreateAnimationTriggerPartner@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUIExpressionA.c)
 *     ??1CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x180122E6C (--1CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?GetExpressionPostfixString@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@345@PEAG_K@Z @ 0x180127D90 (-GetExpressionPostfixString@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIExpressionAn.c)
 *     ?SetTracingCookie@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIInspectable@@I@Z @ 0x180129F60 (-SetTracingCookie@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIInspectable@@I@Z.c)
 *     ??1CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x18012D09C (--1CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?Destroy@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x18012D250 (-Destroy@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?get_Condition@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z @ 0x18012D290 (-get_Condition@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAPEAU.c)
 *     ?get_Value@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z @ 0x18012D340 (-get_Value@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExp.c)
 *     ?put_Condition@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18012D3F0 (-put_Condition@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIEx.c)
 *     ?put_Value@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18012D4E0 (-put_Value@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpres.c)
 *     ??1InteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x18013D588 (--1InteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??_GInteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18013D620 (--_GInteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ?get_Condition@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z @ 0x18013D7B0 (-get_Condition@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UE.c)
 *     ?get_RestingValue@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z @ 0x18013D860 (-get_RestingValue@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@.c)
 *     ?put_Condition@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013D910 (-put_Condition@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UE.c)
 *     ?put_RestingValue@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013D9F0 (-put_RestingValue@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@.c)
 *     ?get_Condition@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z @ 0x18013DD20 (-get_Condition@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEA.c)
 *     ?get_Motion@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z @ 0x18013DDD0 (-get_Motion@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAPEA.c)
 *     ?put_Condition@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013DE80 (-put_Condition@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEA.c)
 *     ?put_Motion@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013DF60 (-put_Motion@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIE.c)
 *     ?get_Condition@Api@InteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z @ 0x18013E300 (-get_Condition@Api@InteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@U.c)
 *     ?put_Condition@Api@InteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013E450 (-put_Condition@Api@InteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@U.c)
 *     ?get_Condition@Api@InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z @ 0x18013E960 (-get_Condition@Api@InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Win.c)
 *     ?put_Condition@Api@InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013EAC0 (-put_Condition@Api@InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Win.c)
 *     ??1VisualCapture@Composition@UI@Windows@@UEAA@XZ @ 0x180154454 (--1VisualCapture@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?OnClose@AsyncBase@VisualCapture@Composition@UI@Windows@@UEAAXXZ @ 0x1801548A0 (-OnClose@AsyncBase@VisualCapture@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@VisualCapture@Composition@UI@Windows@@UEAAXXZ @ 0x180154D60 (-Destroy@VisualCapture@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?CreateDrawingSurface2@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@W4DirectXPixelFormat@DirectX@75@W4DirectXAlphaMode@975@PEAPEAUICompositionDrawingSurface@345@@Z @ 0x180156DA0 (-CreateDrawingSurface2@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSizeInt32@Gra.c)
 *     ?Destroy@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x180161BD0 (-Destroy@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?MarshalSurface@CompositionCubeMap@Private@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@345@PEAUICompositionSurface@345@@Z @ 0x18017EC80 (-MarshalSurface@CompositionCubeMap@Private@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@345.c)
 *     ?Destroy@InteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x180190450 (-Destroy@InteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?GetDrawingSurfaceForLevel@Api@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJIPEAPEAUICompositionDrawingSurface@345@@Z @ 0x180193A70 (-GetDrawingSurfaceForLevel@Api@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJIPEAPEAUICo.c)
 *     ?GetDrawingSurfaceForLevel@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJIPEAPEAVCompositionDrawingSurface@234@@Z @ 0x180193B58 (-GetDrawingSurfaceForLevel@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJIPEAPEAVComposi.c)
 *     ?MarshalSurface@CompositionMipmapSurface@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x180193D50 (-MarshalSurface@CompositionMipmapSurface@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@P.c)
 *     ?Insert@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180194E48 (-Insert@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0PEAE@Z.c)
 * Callees:
 *     <none>
 */

Microsoft::WRL2::NestableRuntimeClass *__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(
        Microsoft::WRL2::NestableRuntimeClass **a1)
{
  Microsoft::WRL2::NestableRuntimeClass *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (Microsoft::WRL2::NestableRuntimeClass *)Microsoft::WRL2::NestableRuntimeClass::InternalRelease(result);
  }
  return result;
}
