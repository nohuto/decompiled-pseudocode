/*
 * XREFs of ?Unlock@?$IdentifierParser@$00W4TOKEN_TYPE@Composition@UI@Windows@@@Composition@UI@Windows@@QEAAXXZ @ 0x18009590C
 * Callers:
 *     ?EnsureFunctionParser@ExpressionAnimationParser@Composition@UI@Windows@@CAJXZ @ 0x18003D640 (-EnsureFunctionParser@ExpressionAnimationParser@Composition@UI@Windows@@CAJXZ.c)
 *     _dynamic_atexit_destructor_for__Windows::UI::Composition::ExpressionAnimationParser::s_spFunctionParser__ @ 0x1800B22D0 (_dynamic_atexit_destructor_for__Windows--UI--Composition--ExpressionAnimationParser--s_spFunctio.c)
 * Callees:
 *     ?Flush@?$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@UEAAXXZ @ 0x18003CD70 (-Flush@-$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@UEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::IdentifierParser<1,enum Windows::UI::Composition::TOKEN_TYPE>::Unlock(
        volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 14, 0xFFFFFFFF) == 1 )
  {
    if ( a1 )
    {
      *(_QWORD *)a1 = &CTrie<enum Windows::UI::Composition::TOKEN_TYPE,1,0>::`vftable';
      CTrie<enum Windows::UI::Composition::TOKEN_TYPE,1,0>::Flush((__int64)a1);
      operator delete((void *)a1, 0x40uLL);
    }
  }
}
