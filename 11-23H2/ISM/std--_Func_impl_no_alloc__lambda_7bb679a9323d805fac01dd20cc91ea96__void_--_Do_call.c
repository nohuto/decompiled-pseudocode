/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call @ 0x1800B8D10
 * Callers:
 *     <none>
 * Callees:
 *     ??$MPCHolographicInputManager_InputDisableFlagsChanged@_N_N@ISMTracing@@SAX$$QEA_N0@Z @ 0x1800B2FD0 (--$MPCHolographicInputManager_InputDisableFlagsChanged@_N_N@ISMTracing@@SAX$$QEA_N0@Z.c)
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x1800BD604 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  int v3; // eax
  MPCCursorManager *v4; // rcx
  int v5; // eax
  bool v6; // [rsp+30h] [rbp+8h] BYREF
  bool v7; // [rsp+38h] [rbp+10h] BYREF

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
  v5 = *(_DWORD *)(v1 + 3664);
  v7 = v5 & 1;
  v6 = (v5 & 2) != 0;
  ISMTracing::MPCHolographicInputManager_InputDisableFlagsChanged<bool,bool>(&v7, &v6);
}
