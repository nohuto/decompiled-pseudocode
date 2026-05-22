/*
 * XREFs of ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B730E
 * Callers:
 *     ?ProcessReferenceParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGIIPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@_N@Z @ 0x180056280 (-ProcessReferenceParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGIIPEA.c)
 *     ?GetAnimatablePropertyInfo@KeyFrameAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18005BD60 (-GetAnimatablePropertyInfo@KeyFrameAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4A.c)
 *     ?GetAnimatablePropertyInfo@CompositionAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180093E80 (-GetAnimatablePropertyInfo@CompositionAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEA.c)
 *     ?PushReferenceParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVSubchannelMaskInfo@@@Z @ 0x1801632B4 (-PushReferenceParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0.c)
 *     ?SetTarget@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVSubchannelMaskInfo@@@Z @ 0x180191134 (-SetTarget@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVExpressionObjectProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetExpressionTypeChannelCount(int a1)
{
  bool v2; // zf
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( a1 > 52 )
  {
    v3 = a1 - 69;
    if ( !v3 )
      return (unsigned int)(a1 >> 4);
    v4 = v3 - 1;
    if ( !v4 )
      return (unsigned int)(a1 >> 4);
    v5 = v4 - 1;
    if ( !v5 )
      return (unsigned int)(a1 >> 4);
    v6 = v5 - 33;
    if ( !v6 )
      return (unsigned int)(a1 >> 4);
    v2 = v6 == 161;
    goto LABEL_13;
  }
  if ( a1 != 52 )
  {
    if ( a1 == 11 )
      return 0LL;
    if ( a1 != 17 && a1 != 18 && a1 != 35 )
    {
      v2 = a1 == 42;
LABEL_13:
      if ( !v2 )
        return 0LL;
    }
  }
  return (unsigned int)(a1 >> 4);
}
