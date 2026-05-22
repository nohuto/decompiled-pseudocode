/*
 * XREFs of ?Thunk_SetConvertGraspToSystemGesture_43@?$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800C47A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IMPCManagerPrincipal_Receive<BamoImpl::BamoMPCManagerPrincipalImpl>::Thunk_SetConvertGraspToSystemGesture_43(
        BamoImpl::BamoMPCManagerPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoMPCManagerPrincipalImpl::SetConvertGraspToSystemGesture(
           a1,
           **(_BYTE **)a2,
           **(_DWORD **)(a2 + 8));
}
