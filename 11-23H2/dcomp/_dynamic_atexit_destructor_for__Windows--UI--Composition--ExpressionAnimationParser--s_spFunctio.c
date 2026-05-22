/*
 * XREFs of _dynamic_atexit_destructor_for__Windows::UI::Composition::ExpressionAnimationParser::s_spFunctionParser__ @ 0x1800B22D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@?$IdentifierParser@$00W4TOKEN_TYPE@Composition@UI@Windows@@@Composition@UI@Windows@@QEAAXXZ @ 0x18009590C (-Unlock@-$IdentifierParser@$00W4TOKEN_TYPE@Composition@UI@Windows@@@Composition@UI@Windows@@QEAA.c)
 */

void dynamic_atexit_destructor_for__Windows::UI::Composition::ExpressionAnimationParser::s_spFunctionParser__()
{
  volatile signed __int32 *v0; // rcx

  v0 = (volatile signed __int32 *)Windows::UI::Composition::ExpressionAnimationParser::s_spFunctionParser;
  if ( Windows::UI::Composition::ExpressionAnimationParser::s_spFunctionParser )
  {
    Windows::UI::Composition::ExpressionAnimationParser::s_spFunctionParser = 0LL;
    Windows::UI::Composition::IdentifierParser<1,enum Windows::UI::Composition::TOKEN_TYPE>::Unlock(v0);
  }
}
