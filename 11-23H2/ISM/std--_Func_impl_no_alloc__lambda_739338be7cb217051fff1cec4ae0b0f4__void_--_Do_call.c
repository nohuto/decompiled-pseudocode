/*
 * XREFs of std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x1800B8CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x180052658 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ??$MPCHolographicInputManager_DisplayContextChanged@_N@ISMTracing@@SAX$$QEA_N@Z @ 0x1800B2D10 (--$MPCHolographicInputManager_DisplayContextChanged@_N@ISMTracing@@SAX$$QEA_N@Z.c)
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x1800BD604 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  MPCCursorManager *v3; // rcx
  bool v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(MPCCursorManager **)(v1 + 3384);
  *(_DWORD *)(v1 + 3648) = v2;
  if ( v3 )
    MPCCursorManager::UpdateState(v3);
  MPCHolographicInputManager::UpdateDoubleClickValues((MPCHolographicInputManager *)v1);
  v4 = *(_DWORD *)(v1 + 3648) == 1;
  ISMTracing::MPCHolographicInputManager_DisplayContextChanged<bool>(&v4);
}
