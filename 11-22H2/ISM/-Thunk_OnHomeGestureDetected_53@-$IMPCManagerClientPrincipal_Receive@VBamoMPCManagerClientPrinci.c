/*
 * XREFs of ?Thunk_OnHomeGestureDetected_53@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18018DD20
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHomeGestureDetected@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJII_KII@Z @ 0x18018D0DC (-OnHomeGestureDetected@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJII_KII@Z.c)
 */

__int64 __fastcall IMPCManagerClientPrincipal_Receive<BamoImpl::BamoMPCManagerClientPrincipalImpl>::Thunk_OnHomeGestureDetected_53(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoMPCManagerClientPrincipalImpl::OnHomeGestureDetected(
           a1,
           **(_DWORD **)a2,
           **(_DWORD **)(a2 + 8),
           **(_QWORD **)(a2 + 16));
}
