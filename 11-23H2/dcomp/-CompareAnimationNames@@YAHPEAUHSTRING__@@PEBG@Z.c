/*
 * XREFs of ?CompareAnimationNames@@YAHPEAUHSTRING__@@PEBG@Z @ 0x18000C820
 * Callers:
 *     ?QueryExternalIAnimationObject_NoLock@AnimationHelper@Composition@UI@Windows@@YAXPEAV?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@PEAUIAnimationObject@234@PEAUHSTRING__@@PEAVAnimationPropertyInfo@234@@Z @ 0x1800223D0 (-QueryExternalIAnimationObject_NoLock@AnimationHelper@Composition@UI@Windows@@YAXPEAV-$vector@UA.c)
 *     ?GetAnimatablePropertyInfo@KeyFrameAnimator@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B7D50 (-GetAnimatablePropertyInfo@KeyFrameAnimator@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4An.c)
 *     ?DebugProperty@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180138A80 (-DebugProperty@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?TryGetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAPEAVCompositionObject@234@PEAW4AnimationReferenceType@@@Z @ 0x18014FFB4 (-TryGetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4CompositionGetVal.c)
 *     ?SetFinalValueParameter@CompositionClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180155890 (-SetFinalValueParameter@CompositionClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVComposi.c)
 *     ??$IsPseudoPropertyName@PEAUHSTRING__@@@@YA_NPEAUHSTRING__@@@Z @ 0x180169984 (--$IsPseudoPropertyName@PEAUHSTRING__@@@@YA_NPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareAnimationNames(HSTRING a1, const unsigned __int16 *a2)
{
  const unsigned __int16 *StringRawBuffer; // rax

  StringRawBuffer = 0LL;
  if ( a1 )
    StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  return CompareAnimationNames(StringRawBuffer, a2);
}
