/*
 * XREFs of ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C
 * Callers:
 *     ?MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@W4BatchState@234@@Z @ 0x18000D204 (-MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV-$RefPtr.c)
 *     ?CreateScopedBatch@Api@Compositor@Composition@UI@Windows@@UEAAJW4CompositionBatchTypes@345@PEAPEAUICompositionScopedBatch@345@@Z @ 0x180016480 (-CreateScopedBatch@Api@Compositor@Composition@UI@Windows@@UEAAJW4CompositionBatchTypes@345@PEAPE.c)
 *     ?Start@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x1800197B0 (-Start@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z @ 0x180019CDC (-RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 *     ?GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PEAPEAVBatchController@234@@Z @ 0x18001A958 (-GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PE.c)
 *     ?Start@ExpressionAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x18001AA30 (-Start@ExpressionAnimator@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z @ 0x18001AC30 (-NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z.c)
 *     ?MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x1800304E0 (-MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PE.c)
 *     ??$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800484E0 (--$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@D.c)
 *     ?RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVKeyFrameAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180050BA0 (-RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMP.c)
 *     ??_EKeyFrameAnimator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180053640 (--_EKeyFrameAnimator@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ?GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVExpressionAnimator@234@@Z @ 0x180054340 (-GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEA.c)
 *     ??$MakeAndInitialize2@VCompositionPropertySet@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPropertySet@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800550C0 (--$MakeAndInitialize2@VCompositionPropertySet@Composition@UI@Windows@@V1234@PEAVCompositor@234@@.c)
 *     ?ChannelCreateResource@CDevice@DirectComposition@@QEAAJI_N0PEAI@Z @ 0x180056030 (-ChannelCreateResource@CDevice@DirectComposition@@QEAAJI_N0PEAI@Z.c)
 *     ?AllocateHandle@CHandleAllocator@DirectComposition@@QEAAJPEAI@Z @ 0x180058970 (-AllocateHandle@CHandleAllocator@DirectComposition@@QEAAJPEAI@Z.c)
 *     ?PostDestroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ @ 0x180058B00 (-PostDestroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?PostDestroy@CompositionObject@Composition@UI@Windows@@UEAAXXZ @ 0x180073980 (-PostDestroy@CompositionObject@Composition@UI@Windows@@UEAAXXZ.c)
 *     ??_GExpressionAnimator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18007BEA0 (--_GExpressionAnimator@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ?InvokeOnSessionThread_NoLock@CompositorCommon@Composition@UI@Windows@@UEAAXP6AJPEAX@Z0@Z @ 0x180080B60 (-InvokeOnSessionThread_NoLock@CompositorCommon@Composition@UI@Windows@@UEAAXP6AJPEAX@Z0@Z.c)
 *     ??1BatchMember@Composition@UI@Windows@@QEAA@XZ @ 0x18008AF28 (--1BatchMember@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?NotifyBatchResumed@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@@Z @ 0x1800B7CC0 (-NotifyBatchResumed@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@@Z.c)
 *     ?CreateBatchSetImpl@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@I@Z @ 0x18015AE8C (-CreateBatchSetImpl@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@I@Z.c)
 *     ?EnsureRegisteredInBatch@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x180190720 (-EnsureRegisteredInBatch@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     ?_Do@FailFast@WRL2@Microsoft@@CAXPEBXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@PEBD@Z @ 0x1801090B0 (-_Do@FailFast@WRL2@Microsoft@@CAXPEBXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@PEBD@Z.c)
 */

void __noreturn Microsoft::WRL2::FailFast::Do(void)
{
  const void *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL2::FailFast::_Do(retaddr, 0LL, 0LL, 0LL);
  JUMPOUT(0x180108A72LL);
}
