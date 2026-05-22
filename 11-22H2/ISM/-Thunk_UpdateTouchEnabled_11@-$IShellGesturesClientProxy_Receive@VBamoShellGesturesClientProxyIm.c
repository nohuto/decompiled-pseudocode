/*
 * XREFs of ?Thunk_UpdateTouchEnabled_11@?$IShellGesturesClientProxy_Receive@VBamoShellGesturesClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001B820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IShellGesturesClientProxy_Receive<BamoImpl::BamoShellGesturesClientProxyImpl>::Thunk_UpdateTouchEnabled_11(
        BamoImpl::BamoShellGesturesClientProxyImpl *a1,
        _BYTE **a2,
        __int64 a3)
{
  LOBYTE(a3) = **a2;
  return BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchEnabled(a1, 1, a3);
}
