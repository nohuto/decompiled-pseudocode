/*
 * XREFs of ?SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@IIPEBG@Z @ 0x180197848
 * Callers:
 *     ?ProcessComparisonToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003CF94 (-ProcessComparisonToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18003D1AC (-ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_.c)
 *     ?Parse@ExpressionAnimationParser@Composition@UI@Windows@@SAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@PEAVExpressionAnimation@234@PEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@PEAVExpressionAnimationBuilder@234@@Z @ 0x18003D560 (-Parse@ExpressionAnimationParser@Composition@UI@Windows@@SAXAEBV-$basic_string_view@GU-$char_tra.c)
 *     ?GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004ECA0 (-GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@.c)
 *     ?ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@_N@Z @ 0x180057060 (-ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_map@V-.c)
 *     ?ProcessEndPrecedenceToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x180059020 (-ProcessEndPrecedenceToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z @ 0x180059178 (-ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z.c)
 *     ?ParseInternal@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@@Z @ 0x180059F44 (-ParseInternal@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBV-$basic_string_view@GU.c)
 *     ?ProcessArgumentSeperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18007B700 (-ProcessArgumentSeperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ @ 0x180069190 (-GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ.c)
 */

unsigned __int16 *__fastcall Windows::UI::Composition::ExpressionAnimationParser::SetParseError(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5)
{
  unsigned __int16 *result; // rax

  *(_DWORD *)(*(_QWORD *)(a1 + 96) + 1000LL) = a2;
  *(_DWORD *)(*(_QWORD *)(a1 + 96) + 1004LL) = a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 96) + 1008LL) = a4;
  result = Windows::UI::Composition::ExpressionErrorInfo::GetErrorContext((Windows::UI::Composition::ExpressionErrorInfo *)(*(_QWORD *)(a1 + 96) + 1000LL));
  if ( a5 )
    return (unsigned __int16 *)_o_wcscpy_s(result, 120LL, a5);
  *result = 0;
  return result;
}
