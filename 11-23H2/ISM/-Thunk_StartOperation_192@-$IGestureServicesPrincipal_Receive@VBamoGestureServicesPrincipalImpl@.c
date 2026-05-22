/*
 * XREFs of ?Thunk_StartOperation_192@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180153F10
 * Callers:
 *     <none>
 * Callees:
 *     ?StartOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJI_N_K1IW4GestureProcessorType@@@Z @ 0x180060E84 (-StartOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJI_N_K1IW4GestureProcessorType@@@.c)
 */

__int64 __fastcall IGestureServicesPrincipal_Receive<BamoImpl::BamoGestureServicesPrincipalImpl>::Thunk_StartOperation_192(
        int *a1,
        __int64 a2)
{
  return BamoImpl::BamoGestureServicesPrincipalImpl::StartOperation(
           a1,
           **(_DWORD **)a2,
           **(_BYTE **)(a2 + 8),
           **(_QWORD **)(a2 + 16),
           **(_QWORD **)(a2 + 24),
           **(_DWORD **)(a2 + 32));
}
