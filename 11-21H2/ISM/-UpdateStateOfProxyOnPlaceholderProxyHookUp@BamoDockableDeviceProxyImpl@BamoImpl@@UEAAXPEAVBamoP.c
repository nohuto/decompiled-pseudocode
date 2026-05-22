/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockableDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18011E8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDeviceId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBUDockableDeviceIdentity@@@Z @ 0x18011A38C (-UpdateDeviceId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBUDockableDeviceIdentity@@@Z.c)
 *     ?UpdateDeviceType@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NW4DockableDeviceObjectType@@@Z @ 0x18011A4C4 (-UpdateDeviceType@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NW4DockableDeviceObjectType@@@Z.c)
 *     ?UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z @ 0x18011CD00 (-UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z.c)
 *     ?UpdatePrimaryUsagePage@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NG@Z @ 0x18011DC60 (-UpdatePrimaryUsagePage@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NG@Z.c)
 */

void __fastcall BamoImpl::BamoDockableDeviceProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDockableDeviceProxyImpl *this,
        Microsoft::BamoImpl::Util **a2,
        __int64 a3,
        const char *a4)
{
  BamoImpl::BamoDockableDeviceProxyImpl::UpdateInterfacePath(this, 0, a2[4], a4);
  BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceId(this, 0LL, (const struct DockableDeviceIdentity *)(a2 + 5));
  BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceType((__int64)this, 0LL, *((unsigned int *)a2 + 14));
  BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsagePage(this, 0LL, *((unsigned __int16 *)a2 + 30));
  BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsageId(this, 0LL, *((unsigned __int16 *)a2 + 31));
}
