/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoWindowsMessageDeliveryProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180147200
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateHwnd@BamoWindowsMessageDeliveryProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180019E64 (-UpdateHwnd@BamoWindowsMessageDeliveryProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 */

void __fastcall BamoImpl::BamoWindowsMessageDeliveryProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoWindowsMessageDeliveryProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoWindowsMessageDeliveryProxyImpl::UpdateHwnd(this, 0, *((_QWORD *)a2 + 4));
  BamoImpl::BamoWindowsMessageDeliveryProxyImpl::UpdateType((__int64)this, 0, *((unsigned int *)a2 + 10));
}
