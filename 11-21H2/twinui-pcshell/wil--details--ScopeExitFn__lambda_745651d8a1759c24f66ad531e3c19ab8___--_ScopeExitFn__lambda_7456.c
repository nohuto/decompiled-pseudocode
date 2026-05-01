/*
 * XREFs of wil::details::ScopeExitFn__lambda_745651d8a1759c24f66ad531e3c19ab8___::_ScopeExitFn__lambda_745651d8a1759c24f66ad531e3c19ab8___ @ 0x1804FFE90
 * Callers:
 *     _TabletModePositioner::MultitaskingViewDismissed_::_1_::dtor$0 @ 0x1802168A2 (_TabletModePositioner--MultitaskingViewDismissed_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_745651d8a1759c24f66ad531e3c19ab8___::_ScopeExitFn__lambda_745651d8a1759c24f66ad531e3c19ab8___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 243) = 0;
  }
  return result;
}
