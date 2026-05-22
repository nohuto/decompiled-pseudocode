/*
 * XREFs of ?HasInitialValueExpressions@CompositionAnimation@Composition@UI@Windows@@QEBA_NXZ @ 0x180085CD0
 * Callers:
 *     ?GetReferencedPropertiesFromAllExpressions@CompositionAnimation@Composition@UI@Windows@@MEAAXPEBGPEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180085CA0 (-GetReferencedPropertiesFromAllExpressions@CompositionAnimation@Composition@UI@Windows@@MEAAXPEB.c)
 *     ?GenerateInstance@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180188B00 (-GenerateInstance@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@2.c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::UI::Composition::CompositionAnimation::HasInitialValueExpressions(
        Windows::UI::Composition::CompositionAnimation *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 33);
  result = 0;
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 + 160) )
      return 1;
  }
  return result;
}
