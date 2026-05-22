/*
 * XREFs of ??$make_unique_failfast@VExpressionAnimationBuilder@Composition@UI@Windows@@AEAPEAVExpressionAnimation@234@@wil@@YA?AV?$unique_ptr@VExpressionAnimationBuilder@Composition@UI@Windows@@U?$default_delete@VExpressionAnimationBuilder@Composition@UI@Windows@@@wistd@@@wistd@@AEAPEAVExpressionAnimation@Composition@UI@Windows@@@Z @ 0x18003D434
 * Callers:
 *     ?ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18003D1AC (-ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_.c)
 * Callees:
 *     ??0ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA@PEAVExpressionAnimation@123@@Z @ 0x18003D484 (--0ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA@PEAVExpressionAnimation@123@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158AB4 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 *__fastcall wil::make_unique_failfast<Windows::UI::Composition::ExpressionAnimationBuilder,Windows::UI::Composition::ExpressionAnimation * &>(
        __int64 *a1,
        struct Windows::UI::Composition::ExpressionAnimation **a2)
{
  Windows::UI::Composition::ExpressionAnimationBuilder *v4; // rax
  const char *v5; // r9
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (Windows::UI::Composition::ExpressionAnimationBuilder *)DefaultHeap::AllocClear(0x278uLL);
  if ( !v4 || (v6 = Windows::UI::Composition::ExpressionAnimationBuilder::ExpressionAnimationBuilder(v4, *a2)) == 0 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x90B,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v5);
  *a1 = v6;
  return a1;
}
