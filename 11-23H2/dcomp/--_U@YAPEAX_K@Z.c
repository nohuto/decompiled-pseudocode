/*
 * XREFs of ??_U@YAPEAX_K@Z @ 0x1800691D8
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
 *     ?GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ @ 0x180069190 (-GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 *     ?OnAnimatedPropertyChanged@CompositionSpriteShape@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180070E40 (-OnAnimatedPropertyChanged@CompositionSpriteShape@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_.c)
 *     ?OnAnimatedPropertyChanged@CompositionShape@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180071090 (-OnAnimatedPropertyChanged@CompositionShape@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRES.c)
 *     ?FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z @ 0x1800F1CD8 (-FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z.c)
 *     ?RuntimeClassInitialize@ConditionalExpressionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAVConditionalExpressionAnimation@234@@Z @ 0x18019AEA8 (-RuntimeClassInitialize@ConditionalExpressionAnimator@Composition@UI@Windows@@QEAAJPEAVComposito.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall operator new[](SIZE_T a1)
{
  LPVOID result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::Alloc(a1);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return result;
}
