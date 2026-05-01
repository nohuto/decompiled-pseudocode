/*
 * XREFs of wil::details::ScopeExitFn__lambda_37ce3c0886db64cd36632e83c34f1ff5___::_ScopeExitFn__lambda_37ce3c0886db64cd36632e83c34f1ff5___ @ 0x1803FC160
 * Callers:
 *     __lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator()_::_1_::dtor$0 @ 0x1803FC669 (__lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_37ce3c0886db64cd36632e83c34f1ff5_::operator() @ 0x1803FC224 (_lambda_37ce3c0886db64cd36632e83c34f1ff5_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_37ce3c0886db64cd36632e83c34f1ff5___::_ScopeExitFn__lambda_37ce3c0886db64cd36632e83c34f1ff5___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_37ce3c0886db64cd36632e83c34f1ff5_::operator()();
  }
  return result;
}
