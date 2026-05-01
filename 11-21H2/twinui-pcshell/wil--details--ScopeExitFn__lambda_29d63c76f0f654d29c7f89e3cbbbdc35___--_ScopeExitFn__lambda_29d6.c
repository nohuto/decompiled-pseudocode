/*
 * XREFs of wil::details::ScopeExitFn__lambda_29d63c76f0f654d29c7f89e3cbbbdc35___::_ScopeExitFn__lambda_29d63c76f0f654d29c7f89e3cbbbdc35___ @ 0x1805F0E90
 * Callers:
 *     __lambda_8e74cd273561b15a8d8b985ad84a422d_::operator()_::_1_::dtor$2 @ 0x180212E86 (__lambda_8e74cd273561b15a8d8b985ad84a422d_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_29d63c76f0f654d29c7f89e3cbbbdc35_::operator() @ 0x18000C354 (_lambda_29d63c76f0f654d29c7f89e3cbbbdc35_--operator().c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_29d63c76f0f654d29c7f89e3cbbbdc35___::_ScopeExitFn__lambda_29d63c76f0f654d29c7f89e3cbbbdc35___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    lambda_29d63c76f0f654d29c7f89e3cbbbdc35_::operator()(a1);
  }
}
