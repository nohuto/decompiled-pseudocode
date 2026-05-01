/*
 * XREFs of wil::details::ScopeExitFn__lambda_246305894d8e1fbff7f30a5279e72041___::_ScopeExitFn__lambda_246305894d8e1fbff7f30a5279e72041___ @ 0x180576BD8
 * Callers:
 *     _CMultitaskingViewControllerBase::_StartTabletModeWindowArrangement_::_1_::dtor$4 @ 0x180577DDE (_CMultitaskingViewControllerBase--_StartTabletModeWindowArrangement_--_1_--dtor$4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_246305894d8e1fbff7f30a5279e72041___::_ScopeExitFn__lambda_246305894d8e1fbff7f30a5279e72041___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a1 + 32LL))(**(_QWORD **)a1);
  }
  return result;
}
