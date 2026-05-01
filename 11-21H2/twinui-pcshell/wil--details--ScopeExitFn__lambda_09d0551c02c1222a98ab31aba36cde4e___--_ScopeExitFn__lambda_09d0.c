/*
 * XREFs of wil::details::ScopeExitFn__lambda_09d0551c02c1222a98ab31aba36cde4e___::_ScopeExitFn__lambda_09d0551c02c1222a98ab31aba36cde4e___ @ 0x180409264
 * Callers:
 *     _WindowWrapperBase::FlushStashedWindowingEnvironmentSettings_::_1_::dtor$0 @ 0x180216750 (_WindowWrapperBase--FlushStashedWindowingEnvironmentSettings_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_09d0551c02c1222a98ab31aba36cde4e___::_ScopeExitFn__lambda_09d0551c02c1222a98ab31aba36cde4e___(
        _BYTE *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
    *(_QWORD *)(result + 144) = 0LL;
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
