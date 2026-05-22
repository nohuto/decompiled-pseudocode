/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoShellGesturesClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18014FFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTouchEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180150018 (-UpdateTouchEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTouchpadEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18015014C (-UpdateTouchpadEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 */

void __fastcall BamoImpl::BamoShellGesturesClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoShellGesturesClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchpadEnabled(this, 0, *((_BYTE *)a2 + 32));
  BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchEnabled(this, 0, *((_BYTE *)a2 + 33));
  BamoImpl::BamoShellGesturesClientProxyImpl::UpdateInputSinkData(
    this,
    0LL,
    (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)a2 + 40));
}
