/*
 * XREFs of ?Thunk_CancelResize_19@?$IResizeContextualProcessorPrincipal_Receive@VBamoResizeContextualProcessorPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180170AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IResizeContextualProcessorPrincipal_Receive<BamoImpl::BamoResizeContextualProcessorPrincipalImpl>::Thunk_CancelResize_19(
        BamoImpl::BamoResizeContextualProcessorPrincipalImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoResizeContextualProcessorPrincipalImpl::CancelResize(a1, **a2, *a2[1]);
}
