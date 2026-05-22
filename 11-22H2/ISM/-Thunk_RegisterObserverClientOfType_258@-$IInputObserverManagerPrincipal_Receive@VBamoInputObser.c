/*
 * XREFs of ?Thunk_RegisterObserverClientOfType_258@?$IInputObserverManagerPrincipal_Receive@VBamoInputObserverManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180072400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IInputObserverManagerPrincipal_Receive<BamoImpl::BamoInputObserverManagerPrincipalImpl>::Thunk_RegisterObserverClientOfType_258(
        __int64 a1,
        unsigned int **a2)
{
  return BamoImpl::BamoInputObserverManagerPrincipalImpl::RegisterObserverClientOfType(a1, **a2, *a2[1]);
}
