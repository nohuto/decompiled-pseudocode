/*
 * XREFs of ?Thunk_UpdateTouchpadEnabled_11@?$IShellGesturesClientProxy_Receive@VBamoShellGesturesClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180055BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IShellGesturesClientProxy_Receive<BamoImpl::BamoShellGesturesClientProxyImpl>::Thunk_UpdateTouchpadEnabled_11(
        BamoImpl::BamoShellGesturesClientProxyImpl *a1,
        _QWORD *a2,
        __int64 a3)
{
  _BYTE *v3; // rax

  v3 = (_BYTE *)*a2;
  LOBYTE(a2) = 1;
  LOBYTE(a3) = *v3;
  return BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchpadEnabled(a1, (__int64)a2, a3);
}
