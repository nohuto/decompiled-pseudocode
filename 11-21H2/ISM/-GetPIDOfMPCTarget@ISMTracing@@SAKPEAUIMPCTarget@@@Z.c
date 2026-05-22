/*
 * XREFs of ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x18009D9B0
 * Callers:
 *     ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z @ 0x18009E638 (-MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z.c)
 *     ?MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@IJ@Z @ 0x1800AE910 (-MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInput.c)
 *     ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@_NI@Z @ 0x1800AEA10 (-MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@_NI@Z.c)
 *     ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800F136C (-MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z @ 0x1800F3A54 (-MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z.c)
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x1800F3B14 (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMTracing::GetPIDOfMPCTarget(struct IMPCTarget *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return (*(__int64 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a1 + 48LL))(a1);
  return result;
}
