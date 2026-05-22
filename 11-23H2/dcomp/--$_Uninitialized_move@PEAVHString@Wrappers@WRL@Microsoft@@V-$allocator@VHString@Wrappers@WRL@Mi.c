/*
 * XREFs of ??$_Uninitialized_move@PEAVHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAPEAVHString@Wrappers@WRL@Microsoft@@QEAV1234@0PEAV1234@AEAV?$allocator@VHString@Wrappers@WRL@Microsoft@@@0@@Z @ 0x1800B7522
 * Callers:
 *     ?PopulateReferenceNodeInfo@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAUExpressionParameter@234@PEAV1234@PEAVCompositionAnimation@234@PEAUExpressionReferenceNode@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAI55@Z @ 0x180057CA0 (-PopulateReferenceNodeInfo@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAUExpressio.c)
 *     ??$_Emplace_reallocate@VHString@Wrappers@WRL@Microsoft@@@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAPEAVHString@Wrappers@WRL@Microsoft@@QEAV2345@$$QEAV2345@@Z @ 0x1800B7422 (--$_Emplace_reallocate@VHString@Wrappers@WRL@Microsoft@@@-$vector@VHString@Wrappers@WRL@Microsof.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAXPEAVHString@Wrappers@WRL@Microsoft@@QEAV1234@AEAV?$allocator@VHString@Wrappers@WRL@Microsoft@@@0@@Z @ 0x1800B73DE (--$_Destroy_range@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAXPEAVHString@Wrapp.c)
 */

HSTRING *__fastcall std::_Uninitialized_move<Microsoft::WRL::Wrappers::HString *>(
        HSTRING *a1,
        HSTRING *a2,
        HSTRING *a3)
{
  while ( a1 != a2 )
  {
    *a3++ = *a1;
    *a1++ = 0LL;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::Wrappers::HString>>(a3, a3);
  return a3;
}
