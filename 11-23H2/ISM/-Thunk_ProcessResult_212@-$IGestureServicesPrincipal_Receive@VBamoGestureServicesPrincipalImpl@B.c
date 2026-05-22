/*
 * XREFs of ?Thunk_ProcessResult_212@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800611E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall IGestureServicesPrincipal_Receive<BamoImpl::BamoGestureServicesPrincipalImpl>::Thunk_ProcessResult_212(
        BamoImpl::BamoGestureServicesPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoGestureServicesPrincipalImpl::ProcessResult(
           a1,
           **(_DWORD **)a2,
           *(const struct Windows::UI::Internal::Input::DragOperationResult **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
