/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180147F10
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDisplayOcclusionSupported@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180143E30 (-UpdateDisplayOcclusionSupported@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z @ 0x180146B4C (-UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z.c)
 */

void __fastcall BamoImpl::BamoDockDeviceProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDockDeviceProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8

  BamoImpl::BamoDockDeviceProxyImpl::UpdatePanelId(this, 0, *((Microsoft::BamoImpl::Util **)a2 + 4), a4);
  LOBYTE(v6) = *((_BYTE *)a2 + 40);
  BamoImpl::BamoDockDeviceProxyImpl::UpdateDisplayOcclusionSupported(this, 0LL, v6);
  BamoImpl::BamoDockDeviceProxyImpl::UpdateDisplayOcclusionLogicalRange(
    this,
    0LL,
    (const struct tagRECT *)((char *)a2 + 44));
}
