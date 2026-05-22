/*
 * XREFs of ?Thunk_CancelOperation_200@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180073A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IGestureServicesPrincipal_Receive<BamoImpl::BamoGestureServicesPrincipalImpl>::Thunk_CancelOperation_200(
        __int64 a1,
        unsigned int **a2)
{
  return BamoImpl::BamoGestureServicesPrincipalImpl::CancelOperation(a1, **a2, *a2[1], *a2[2]);
}
