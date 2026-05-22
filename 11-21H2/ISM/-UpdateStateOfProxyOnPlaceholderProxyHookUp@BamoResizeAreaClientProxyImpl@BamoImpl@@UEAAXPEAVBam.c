/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoResizeAreaClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18011EE20
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateType@BamoResizeAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18011FF80 (-UpdateType@BamoResizeAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoResizeAreaClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoResizeAreaClientProxyImpl *this,
        const struct _GUID *a2)
{
  BamoImpl::BamoResizeAreaClientProxyImpl::UpdateType(this, 0, a2 + 2);
  BamoImpl::BamoResizeAreaClientProxyImpl::UpdateRegion((__int64)this, 0LL, a2[3].Data1);
}
