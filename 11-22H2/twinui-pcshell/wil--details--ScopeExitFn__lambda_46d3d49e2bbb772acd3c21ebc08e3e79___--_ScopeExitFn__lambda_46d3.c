/*
 * XREFs of wil::details::ScopeExitFn__lambda_46d3d49e2bbb772acd3c21ebc08e3e79___::_ScopeExitFn__lambda_46d3d49e2bbb772acd3c21ebc08e3e79___ @ 0x180285A84
 * Callers:
 *     __lambda_71ae74f74888d637c85562ef224bc48a_::operator()_::_1_::dtor$2 @ 0x180285DA0 (__lambda_71ae74f74888d637c85562ef224bc48a_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_46d3d49e2bbb772acd3c21ebc08e3e79_::operator() @ 0x180285AE4 (_lambda_46d3d49e2bbb772acd3c21ebc08e3e79_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_46d3d49e2bbb772acd3c21ebc08e3e79___::_ScopeExitFn__lambda_46d3d49e2bbb772acd3c21ebc08e3e79___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_46d3d49e2bbb772acd3c21ebc08e3e79_::operator()();
  }
  return result;
}
