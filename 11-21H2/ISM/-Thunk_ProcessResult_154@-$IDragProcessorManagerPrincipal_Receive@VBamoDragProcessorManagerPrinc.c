/*
 * XREFs of ?Thunk_ProcessResult_154@?$IDragProcessorManagerPrincipal_Receive@VBamoDragProcessorManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18013AF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDragProcessorManagerPrincipal_Receive<BamoImpl::BamoDragProcessorManagerPrincipalImpl>::Thunk_ProcessResult_154(
        BamoImpl::BamoDragProcessorManagerPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoDragProcessorManagerPrincipalImpl::ProcessResult(
           a1,
           **(_DWORD **)a2,
           *(const struct Windows::UI::Internal::Input::DragOperationResult **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
