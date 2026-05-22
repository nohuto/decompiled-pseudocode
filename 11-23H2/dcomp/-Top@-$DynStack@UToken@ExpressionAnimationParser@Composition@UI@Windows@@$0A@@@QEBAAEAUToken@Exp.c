/*
 * XREFs of ?Top@?$DynStack@UToken@ExpressionAnimationParser@Composition@UI@Windows@@$0A@@@QEBAAEAUToken@ExpressionAnimationParser@Composition@UI@Windows@@XZ @ 0x18003D074
 * Callers:
 *     ?ProcessComparisonToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003CF94 (-ProcessComparisonToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18003D1AC (-ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DynStack<Windows::UI::Composition::ExpressionAnimationParser::Token,0>::Top(__int64 a1)
{
  int v1; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_DWORD *)(a1 + 24);
  if ( !v1 )
    ModuleFailFastForHRESULT(2147946717LL, retaddr);
  return *(_QWORD *)a1 + 12LL * (unsigned int)(v1 - 1);
}
