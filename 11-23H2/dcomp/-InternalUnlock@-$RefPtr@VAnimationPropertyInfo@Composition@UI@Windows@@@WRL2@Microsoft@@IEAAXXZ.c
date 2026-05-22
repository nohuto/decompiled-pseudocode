/*
 * XREFs of ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C
 * Callers:
 *     ?CreateExponentialEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@MPEAPEAUICompositionEasingFunction@345@@Z @ 0x18000C2E0 (-CreateExponentialEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMP.c)
 *     ?put_StrokeBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x18000C860 (-put_StrokeBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@3.c)
 *     ??1CompositionSpriteShape@Composition@UI@Windows@@UEAA@XZ @ 0x18000E684 (--1CompositionSpriteShape@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?Destroy@CompositionSpriteShape@Composition@UI@Windows@@UEAAXXZ @ 0x18000E990 (-Destroy@CompositionSpriteShape@Composition@UI@Windows@@UEAAXXZ.c)
 *     ??1CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAA@XZ @ 0x1800114A4 (--1CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??1CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAA@XZ @ 0x1800123F4 (--1CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?SetSystemBackdrop@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAUICompositionBrush@345@@Z @ 0x1800157E0 (-SetSystemBackdrop@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Wind.c)
 *     ?SetWindowBackgroundTreatment@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180015860 (-SetWindowBackgroundTreatment@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@.c)
 *     ?PopulatePropertyInfo@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIAnimationPropertyInfo@345@@Z @ 0x18001EFF0 (-PopulatePropertyInfo@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIAni.c)
 *     ?ResolveProperties_Callback_Base@AnimationHelper@Composition@UI@Windows@@YAJV?$span@U?$pair@PEAVCompositionAnimation@Composition@UI@Windows@@V?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@std@@$0?0@gsl@@PEAVCompositionObject@234@PEAUIAnimationObject@234@V?$span@VHString@Wrappers@WRL@Microsoft@@$0?0@6@@Z @ 0x18001F728 (-ResolveProperties_Callback_Base@AnimationHelper@Composition@UI@Windows@@YAJV-$span@U-$pair@PEAV.c)
 *     ?Destroy@CompositionMaskBrush@Composition@UI@Windows@@UEAAXXZ @ 0x18002B060 (-Destroy@CompositionMaskBrush@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionEffectBrush@Composition@UI@Windows@@UEAAXXZ @ 0x18002E620 (-Destroy@CompositionEffectBrush@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?put_FillBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180046160 (-put_FillBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345.c)
 *     ?ValidateShapeBrush@Composition@UI@Windows@@YAJPEAUICompositionBrush@123@PEAVContextSession@WRL2@Microsoft@@PEAPEAVCompositionBrush@123@@Z @ 0x1800462A4 (-ValidateShapeBrush@Composition@UI@Windows@@YAJPEAUICompositionBrush@123@PEAVContextSession@WRL2.c)
 *     ?InsertKeyFrameWithEasingFunction@Api@ColorKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUColor@45@PEAUICompositionEasingFunction@345@@Z @ 0x18004BAF0 (-InsertKeyFrameWithEasingFunction@Api@ColorKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUColo.c)
 *     ?InsertKeyFrameWithEasingFunction@Api@Vector2KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector2@Numerics@Foundation@5@PEAUICompositionEasingFunction@345@@Z @ 0x18004BC90 (-InsertKeyFrameWithEasingFunction@Api@Vector2KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVe.c)
 *     ?InsertKeyFrameWithEasingFunction@Api@ScalarKeyFrameAnimation@Composition@UI@Windows@@UEAAJMMPEAUICompositionEasingFunction@345@@Z @ 0x18004BDB0 (-InsertKeyFrameWithEasingFunction@Api@ScalarKeyFrameAnimation@Composition@UI@Windows@@UEAAJMMPEA.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?put_Brush@Api@SpriteVisual@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180073E30 (-put_Brush@Api@SpriteVisual@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z.c)
 *     ?CreatePowerEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@MPEAPEAUICompositionEasingFunction@345@@Z @ 0x180079530 (-CreatePowerEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITIO.c)
 *     ?InsertKeyFrameWithEasingFunction@Api@Vector3KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector3@Numerics@Foundation@5@PEAUICompositionEasingFunction@345@@Z @ 0x18007C600 (-InsertKeyFrameWithEasingFunction@Api@Vector3KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVe.c)
 *     ??1?$RefPtr@VCompositionBrush@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x180082820 (--1-$RefPtr@VCompositionBrush@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ.c)
 *     ?InsertExpressionKeyFrameWithEasingFunction@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJMPEAUHSTRING__@@PEAUICompositionEasingFunction@345@@Z @ 0x180084140 (-InsertExpressionKeyFrameWithEasingFunction@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJM.c)
 *     ?UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Windows@@AEAAXH@Z @ 0x1800937F0 (-UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Windows@@AEAAXH@Z.c)
 *     ?ContainsBackdropInput@CompositionEffectBrush@Composition@UI@Windows@@QEBA_NXZ @ 0x18009466C (-ContainsBackdropInput@CompositionEffectBrush@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ??_EDropShadow@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180124080 (--_EDropShadow@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ?CreateAnimationPropertyInfo@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIAnimationPropertyInfo@345@@Z @ 0x180124C70 (-CreateAnimationPropertyInfo@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIAnimation.c)
 *     ?CreateBackEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@MPEAPEAUICompositionEasingFunction@345@@Z @ 0x180124DF0 (-CreateBackEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION.c)
 *     ?CreateBounceEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@HMPEAPEAUICompositionEasingFunction@345@@Z @ 0x180124F60 (-CreateBounceEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITI.c)
 *     ?CreateCircleEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@PEAPEAUICompositionEasingFunction@345@@Z @ 0x1801253C0 (-CreateCircleEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITI.c)
 *     ?CreateElasticEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@HMPEAPEAUICompositionEasingFunction@345@@Z @ 0x180125BE0 (-CreateElasticEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSIT.c)
 *     ?CreateSineEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@PEAPEAUICompositionEasingFunction@345@@Z @ 0x180127320 (-CreateSineEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION.c)
 *     ?SetSystemBackdrop@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAUICompositionBrush@345@@Z @ 0x18016F750 (-SetSystemBackdrop@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@W.c)
 *     ?get_FillBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z @ 0x180171A00 (-get_FillBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@.c)
 *     ?get_StrokeBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z @ 0x180171C60 (-get_StrokeBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrus.c)
 *     ?GetSourceParameter@Api@?$CompositionEffectBrushT@VCompositionEffectBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICompositionBrush@345@@Z @ 0x1801769A0 (-GetSourceParameter@Api@-$CompositionEffectBrushT@VCompositionEffectBrush@Composition@UI@Windows.c)
 *     ?InsertKeyFrameWithEasingFunction@Api@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJMPEAUICompositionPath@345@PEAUICompositionEasingFunction@345@@Z @ 0x180178410 (-InsertKeyFrameWithEasingFunction@Api@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJMPEAUIC.c)
 *     ?InsertKeyFrameWithEasingFunction@Api@QuaternionKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUQuaternion@Numerics@Foundation@5@PEAUICompositionEasingFunction@345@@Z @ 0x18017B480 (-InsertKeyFrameWithEasingFunction@Api@QuaternionKeyFrameAnimation@Composition@UI@Windows@@UEAAJM.c)
 *     ?InsertKeyFrameWithEasingFunction@Api@Vector4KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector4@Numerics@Foundation@5@PEAUICompositionEasingFunction@345@@Z @ 0x18017E840 (-InsertKeyFrameWithEasingFunction@Api@Vector4KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVe.c)
 *     ?put_Mask@Api@DropShadow@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180183490 (-put_Mask@Api@DropShadow@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z.c)
 *     ?put_Brush@Api@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x1801840B0 (-put_Brush@Api@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAUICompositionBru.c)
 *     ?put_Mask@Velocity@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180184190 (-put_Mask@Velocity@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAUICompositio.c)
 *     ?put_Mask@Velocity@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x1801844C0 (-put_Mask@Velocity@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJPEAUIComposit.c)
 *     ?get_SystemBackdrop@SystemOnly@CompositionTarget@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z @ 0x180197130 (-get_SystemBackdrop@SystemOnly@CompositionTarget@Composition@UI@Windows@@UEAAJPEAPEAUICompositio.c)
 *     ?put_SystemBackdrop@SystemOnly@CompositionTarget@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180197390 (-put_SystemBackdrop@SystemOnly@CompositionTarget@Composition@UI@Windows@@UEAAJPEAUICompositionBr.c)
 *     ?GetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVCompositionBrush@234@@Z @ 0x18019BC5C (-GetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVCo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(
        volatile signed __int32 **a1,
        __int64 a2)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx

  result = (__int64)a1;
  v3 = *a1;
  if ( v3 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 4, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      LOBYTE(a2) = 1;
      return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 64LL))(v3, a2);
    }
  }
  return result;
}
