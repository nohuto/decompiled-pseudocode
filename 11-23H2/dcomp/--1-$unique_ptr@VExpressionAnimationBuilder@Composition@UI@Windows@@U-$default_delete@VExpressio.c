/*
 * XREFs of ??1?$unique_ptr@VExpressionAnimationBuilder@Composition@UI@Windows@@U?$default_delete@VExpressionAnimationBuilder@Composition@UI@Windows@@@wistd@@@wistd@@QEAA@XZ @ 0x180197470
 * Callers:
 *     ?ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18003D1AC (-ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_.c)
 * Callees:
 *     ??_GExpressionAnimationBuilder@Composition@UI@Windows@@QEAAPEAXI@Z @ 0x1800931EC (--_GExpressionAnimationBuilder@Composition@UI@Windows@@QEAAPEAXI@Z.c)
 */

Windows::UI::Composition::ExpressionAnimationBuilder *__fastcall wistd::unique_ptr<Windows::UI::Composition::ExpressionAnimationBuilder,wistd::default_delete<Windows::UI::Composition::ExpressionAnimationBuilder>>::~unique_ptr<Windows::UI::Composition::ExpressionAnimationBuilder,wistd::default_delete<Windows::UI::Composition::ExpressionAnimationBuilder>>(
        Windows::UI::Composition::ExpressionAnimationBuilder **a1)
{
  Windows::UI::Composition::ExpressionAnimationBuilder *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return Windows::UI::Composition::ExpressionAnimationBuilder::`scalar deleting destructor'(result);
  return result;
}
