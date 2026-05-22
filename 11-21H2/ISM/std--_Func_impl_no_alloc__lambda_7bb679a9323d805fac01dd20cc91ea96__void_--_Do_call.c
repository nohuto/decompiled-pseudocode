/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call @ 0x1800A1660
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z @ 0x18009E9B4 (-MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z.c)
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x1800A5718 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // r8d
  int v3; // eax
  __int64 v4; // rcx
  ISMTracing *v5; // rcx
  bool v6; // [rsp+30h] [rbp+8h] BYREF
  bool v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v1 + 3664) ^ v2;
  *(_DWORD *)(v1 + 3664) = v2;
  if ( (v3 & 1) != 0 )
  {
    a1 = *(_QWORD *)(v1 + 3384);
    if ( a1 )
    {
      MPCCursorManager::UpdateState((MPCCursorManager *)a1);
      v2 = *(_DWORD *)(v1 + 3664);
    }
  }
  v7 = v2 & 1;
  v6 = (v2 & 2) != 0;
  if ( ISMTracing::IsEnabled(a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v4, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_InputDisableFlagsChanged_(v5, &v7, &v6);
  }
}
