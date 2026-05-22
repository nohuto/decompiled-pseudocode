/*
 * XREFs of ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x18009E560
 * Callers:
 *     _lambda_dd0ac130d9769d2b3db8f6249ecd131b_::operator() @ 0x18009D048 (_lambda_dd0ac130d9769d2b3db8f6249ecd131b_--operator().c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18009F804 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x1800A023C (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  char v3; // bl

  v3 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 72LL))(a2) )
    return (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 272LL))(a2) != 0;
  return v3;
}
