/*
 * XREFs of ?Thunk_StartAnimation_205@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180073AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@Z @ 0x180161CC8 (-StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@.c)
 */

__int64 __fastcall IGestureServicesPrincipal_Receive<BamoImpl::BamoGestureServicesPrincipalImpl>::Thunk_StartAnimation_205(
        __int64 a1,
        unsigned int **a2)
{
  return BamoImpl::BamoGestureServicesPrincipalImpl::StartAnimation(
           a1,
           **a2,
           a2[1],
           *((unsigned int *)a2 + 4),
           *a2[3],
           *a2[4]);
}
