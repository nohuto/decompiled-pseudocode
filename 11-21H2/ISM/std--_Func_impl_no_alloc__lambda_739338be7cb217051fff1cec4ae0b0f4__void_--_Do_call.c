/*
 * XREFs of std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x1800A15F0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x180034E08 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z @ 0x18009E734 (-MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x1800A5718 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  MPCCursorManager *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  ISMTracing *v6; // rcx
  bool v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(MPCCursorManager **)(v1 + 3384);
  *(_DWORD *)(v1 + 3648) = v2;
  if ( v3 )
    MPCCursorManager::UpdateState(v3);
  MPCHolographicInputManager::UpdateDoubleClickValues((MPCHolographicInputManager *)v1);
  v7 = *(_DWORD *)(v1 + 3648) == 1;
  if ( ISMTracing::IsEnabled(v4) )
  {
    wil::details::static_lazy<ISMTracing>::get(v5, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_DisplayContextChanged_(v6, &v7);
  }
}
