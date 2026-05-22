/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call @ 0x1800C9E50
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z @ 0x1800C72F4 (-MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z.c)
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x1800CDE80 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx
  int v3; // eax
  MPCCursorManager *v4; // rcx
  __int64 v5; // rcx
  bool v6; // al
  __int64 v7; // rcx
  ISMTracing *v8; // rcx
  bool v9; // [rsp+30h] [rbp+8h] BYREF
  bool v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v1 + 3664);
  *(_DWORD *)(v1 + 3664) = v2;
  if ( (((unsigned __int8)v3 ^ (unsigned __int8)v2) & 1) != 0 )
  {
    v4 = *(MPCCursorManager **)(v1 + 3384);
    if ( v4 )
      MPCCursorManager::UpdateState(v4);
  }
  v5 = *(unsigned int *)(v1 + 3664);
  LOBYTE(v5) = v5 & 1;
  v6 = (*(_DWORD *)(v1 + 3664) & 2) != 0;
  v10 = v5;
  v9 = v6;
  if ( ISMTracing::IsEnabled(v5) )
  {
    wil::details::static_lazy<ISMTracing>::get(v7, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_InputDisableFlagsChanged_(v8, &v10, &v9);
  }
}
