/*
 * XREFs of ?FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z @ 0x180030EB4
 * Callers:
 *     ?UpdateTargets@CompositionLight@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z @ 0x180002140 (-UpdateTargets@CompositionLight@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z.c)
 *     ?UpdateSharedLights@Visual@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z @ 0x180002434 (-UpdateSharedLights@Visual@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z.c)
 *     ?MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x1800304E0 (-MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PE.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z @ 0x18003401C (-ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@U_D3DCOLORVALUE@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x180044B50 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPro.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAVCompositionPropertyAnimator@234@@Z @ 0x180050220 (-RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@23.c)
 *     ?GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVExpressionAnimator@234@@Z @ 0x180054340 (-GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEA.c)
 *     ??1CDevice@DirectComposition@@QEAA@XZ @ 0x18005E2D8 (--1CDevice@DirectComposition@@QEAA@XZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 *     ?OnAnimatedPropertyChanged@CompositionSpriteShape@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180070E40 (-OnAnimatedPropertyChanged@CompositionSpriteShape@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_.c)
 *     ?OnAnimatedPropertyChanged@CompositionShape@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180071090 (-OnAnimatedPropertyChanged@CompositionShape@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRES.c)
 *     ?CreateAndInitializeSharedSectionProxy@CDevice@DirectComposition@@QEAAJ_K_NPEAPEAVCSharedSectionBaseProxy@2@PEAPEAX@Z @ 0x18007EA9C (-CreateAndInitializeSharedSectionProxy@CDevice@DirectComposition@@QEAAJ_K_NPEAPEAVCSharedSection.c)
 *     ?TelemetrySetApplicationId@CDevice@DirectComposition@@UEAAJGPEBG@Z @ 0x180084AE0 (-TelemetrySetApplicationId@CDevice@DirectComposition@@UEAAJGPEBG@Z.c)
 *     ?AnimationGetAnimationTime@CDevice@DirectComposition@@QEAAXI_KPEA_J@Z @ 0x1800EDD28 (-AnimationGetAnimationTime@CDevice@DirectComposition@@QEAAXI_KPEA_J@Z.c)
 *     ?InternalRenderVisual@CDevice@DirectComposition@@QEAAJIIIIIW4DXGI_FORMAT@@PEAPEAX1PEAI@Z @ 0x1800F22CC (-InternalRenderVisual@CDevice@DirectComposition@@QEAAJIIIIIW4DXGI_FORMAT@@PEAPEAX1PEAI@Z.c)
 * Callees:
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall DirectComposition::CDevice::FlushKernelCommands(DirectComposition::CDevice *this, bool a2)
{
  if ( *((_DWORD *)this + 46) )
  {
    if ( (int)DirectComposition::CDevice::TryFlushKernelCommands(this, a2) < 0 )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
}
