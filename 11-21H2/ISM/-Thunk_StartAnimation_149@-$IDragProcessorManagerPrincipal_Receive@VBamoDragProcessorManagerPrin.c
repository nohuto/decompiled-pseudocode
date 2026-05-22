/*
 * XREFs of ?Thunk_StartAnimation_149@?$IDragProcessorManagerPrincipal_Receive@VBamoDragProcessorManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18013AFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDragProcessorManagerPrincipal_Receive<BamoImpl::BamoDragProcessorManagerPrincipalImpl>::Thunk_StartAnimation_149(
        __int64 a1,
        __int64 a2)
{
  return BamoImpl::BamoDragProcessorManagerPrincipalImpl::StartAnimation(
           a1,
           **(_DWORD **)a2,
           **(_DWORD **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
