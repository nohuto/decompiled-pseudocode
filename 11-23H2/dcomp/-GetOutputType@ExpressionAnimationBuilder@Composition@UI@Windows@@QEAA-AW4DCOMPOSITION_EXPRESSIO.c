/*
 * XREFs of ?GetOutputType@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@XZ @ 0x18003E768
 * Callers:
 *     ?Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z @ 0x18003D728 (-Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z.c)
 *     ?ProcessSwizzleToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003E668 (-ProcessSwizzleToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?GenerateExpressionInstance@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVCompositionAnimation@234@PEAVExpressionAnimation@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAV1234@@Z @ 0x180190864 (-GenerateExpressionInstance@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVComposi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::GetOutputType(_DWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a1 )
    return (unsigned int)a1[*a1 - 1 + 66];
  return result;
}
