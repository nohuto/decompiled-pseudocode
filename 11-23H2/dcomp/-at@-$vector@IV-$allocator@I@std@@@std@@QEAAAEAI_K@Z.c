/*
 * XREFs of ?at@?$vector@IV?$allocator@I@std@@@std@@QEAAAEAI_K@Z @ 0x18001F118
 * Callers:
 *     ?ResolveProperties_Callback_Base@AnimationHelper@Composition@UI@Windows@@YAJV?$span@U?$pair@PEAVCompositionAnimation@Composition@UI@Windows@@V?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@std@@$0?0@gsl@@PEAVCompositionObject@234@PEAUIAnimationObject@234@V?$span@VHString@Wrappers@WRL@Microsoft@@$0?0@6@@Z @ 0x18001F728 (-ResolveProperties_Callback_Base@AnimationHelper@Composition@UI@Windows@@YAJV-$span@U-$pair@PEAV.c)
 *     ?CreateConditionalExpressionAnimator@VisualInteractionSource@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4SourceModifierIndex@@PEAPEAVCompositionPropertyAnimator@345@@Z @ 0x18011D350 (-CreateConditionalExpressionAnimator@VisualInteractionSource@Interactions@Composition@UI@Windows.c)
 *     ?ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4ScrollAxis@@@Z @ 0x180137548 (-ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AE.c)
 * Callees:
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<unsigned int>::at(__int64 a1, unsigned __int64 a2)
{
  if ( (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2 <= a2 )
    std::_Dwm_Xlength_error((const char *)a1);
  return *(_QWORD *)a1 + 4 * a2;
}
