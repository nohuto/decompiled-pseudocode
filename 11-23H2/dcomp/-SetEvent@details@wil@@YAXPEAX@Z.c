/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180019218
 * Callers:
 *     ?Destroy@CompositionEffectFactory@Composition@UI@Windows@@UEAAXXZ @ 0x180019160 (-Destroy@CompositionEffectFactory@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E54F4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x92D,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
}
