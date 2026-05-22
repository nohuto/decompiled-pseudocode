/*
 * XREFs of ?Thunk_StartDrag_144@?$IDragProcessorManagerPrincipal_Receive@VBamoDragProcessorManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18013AFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDragProcessorManagerPrincipal_Receive<BamoImpl::BamoDragProcessorManagerPrincipalImpl>::Thunk_StartDrag_144(
        BamoImpl::BamoDragProcessorManagerPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoDragProcessorManagerPrincipalImpl::StartDrag(
           a1,
           **(_DWORD **)a2,
           **(_QWORD **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
