/*
 * XREFs of ?SetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAXPEBG@Z @ 0x180069158
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 *     ?GetTargetMapEntry@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAVSubchannelMaskInfo@@PEAPEAVTargetMapEntry@234@@Z @ 0x18004D6C0 (-GetTargetMapEntry@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVProxyObject@234@PEAU.c)
 *     ?ConnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004DF00 (-ConnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimati.c)
 *     ?ProcessReferenceParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGIIPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@_N@Z @ 0x180056280 (-ProcessReferenceParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGIIPEA.c)
 *     ?WriteConstantParameterToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAE_KPEAUExpressionParameter@234@PEAVCompositionAnimation@234@PEAI@Z @ 0x1800599B0 (-WriteConstantParameterToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAE_KPE.c)
 *     ?ParsePropertyName@ExpressionAnimationParser@Composition@UI@Windows@@CAXPEAUHSTRING__@@W4AnimationBindingDirection@234@PEAVCompositionObject@234@PEAUExpressionErrorInfo@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAH@Z @ 0x1801974E8 (-ParsePropertyName@ExpressionAnimationParser@Composition@UI@Windows@@CAXPEAUHSTRING__@@W4Animati.c)
 *     ?ParseTargetProperty@ExpressionAnimationParser@Composition@UI@Windows@@SAXPEAUHSTRING__@@PEAVCompositionObject@234@PEAUExpressionErrorInfo@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAPEAU5@@Z @ 0x18019767C (-ParseTargetProperty@ExpressionAnimationParser@Composition@UI@Windows@@SAXPEAUHSTRING__@@PEAVCom.c)
 * Callees:
 *     ?GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ @ 0x180069190 (-GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ.c)
 */

void __fastcall Windows::UI::Composition::ExpressionErrorInfo::SetErrorContext(
        Windows::UI::Composition::ExpressionErrorInfo *this,
        const unsigned __int16 *a2)
{
  unsigned __int16 *ErrorContext; // rax

  if ( a2 )
  {
    ErrorContext = Windows::UI::Composition::ExpressionErrorInfo::GetErrorContext(this);
    StringCchCopyW(ErrorContext, 0x78uLL, a2);
  }
  else
  {
    Windows::UI::Composition::ExpressionErrorInfo::ClearErrorContext(this);
  }
}
