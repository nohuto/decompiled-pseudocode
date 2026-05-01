/*
 * XREFs of wil::details::ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___::_ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1805F0ED4
 * Callers:
 *     _CSingleViewShellExperience::WaitForWindowReadyForPresentation_::_1_::dtor$1 @ 0x180212DF4 (_CSingleViewShellExperience--WaitForWindowReadyForPresentation_--_1_--dtor$1.c)
 * Callees:
 *     _lambda_6914baa2bbb41478f35591fe55a15932_::operator() @ 0x1805F1130 (_lambda_6914baa2bbb41478f35591fe55a15932_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___::_ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_6914baa2bbb41478f35591fe55a15932_::operator()(a1);
  }
  return result;
}
