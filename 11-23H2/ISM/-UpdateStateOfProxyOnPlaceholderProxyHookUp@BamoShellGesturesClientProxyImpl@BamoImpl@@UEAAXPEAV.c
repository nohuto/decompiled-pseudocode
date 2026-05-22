/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoShellGesturesClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18016DCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTouchEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180012F38 (-UpdateTouchEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTouchpadEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x1800543E0 (-UpdateTouchpadEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 */

void __fastcall BamoImpl::BamoShellGesturesClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoShellGesturesClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2,
        __int64 a3)
{
  __int64 v5; // r8

  LOBYTE(a3) = *((_BYTE *)a2 + 32);
  BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchpadEnabled(this, 0LL, a3);
  LOBYTE(v5) = *((_BYTE *)a2 + 33);
  BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchEnabled(this, 0, v5);
  BamoImpl::BamoShellGesturesClientProxyImpl::UpdateInputSinkData(
    this,
    0LL,
    (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)a2 + 40));
}
