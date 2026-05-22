/*
 * XREFs of _lambda_2c96748461f4900de3746577f815c647_::operator() @ 0x1800BCE18
 * Callers:
 *     wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___ @ 0x1800BCD8C (wil--details--ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___--_ScopeExitFn__lambda_2c96.c)
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x1800BD240 (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 * Callees:
 *     ?Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x1800BCEB8 (-Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x1800BD464 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 */

bool __fastcall lambda_2c96748461f4900de3746577f815c647_::operator()(__int64 a1)
{
  __int64 v2; // rax
  MPCCursorManager *v3; // rcx
  bool result; // al

  if ( **(_BYTE **)(a1 + 32) )
  {
    v2 = *(_QWORD *)(a1 + 40);
    v3 = *(MPCCursorManager **)a1;
    *(_OWORD *)v3 = *(_OWORD *)(v2 + 380);
    *((_OWORD *)v3 + 1) = *(_OWORD *)(v2 + 12);
    *((_DWORD *)v3 + 8) = *(_DWORD *)(v2 + 376);
  }
  else
  {
    v3 = *(MPCCursorManager **)a1;
    *(_OWORD *)v3 = 0LL;
    *((_OWORD *)v3 + 1) = 0LL;
    *((_DWORD *)v3 + 8) = 0;
  }
  MPCCursorManager::UpdateCursorVisibility(v3, **(_BYTE **)(a1 + 16), **(_BYTE **)(a1 + 24), 0);
  result = !MPCCursorManager::Is3DCursorVisible(*(MPCCursorManager **)a1);
  **(_BYTE **)(a1 + 8) = result;
  return result;
}
