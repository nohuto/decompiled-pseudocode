/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18011E970
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateHitTestConfiguration@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z @ 0x18011BE24 (-UpdateHitTestConfiguration@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4HitTestConfiguratio.c)
 *     ?UpdateId@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x18011C090 (-UpdateId@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     ?UpdateType@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18011F968 (-UpdateType@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoDragSourceClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDragSourceClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoDragSourceClientProxyImpl::UpdateType(this, 0, (const struct _GUID *)a2 + 2);
  BamoImpl::BamoDragSourceClientProxyImpl::UpdateId(this, 0LL, *((_QWORD *)a2 + 6));
  BamoImpl::BamoDragSourceClientProxyImpl::UpdateHitTestConfiguration((__int64)this, 0LL, *((unsigned int *)a2 + 14));
  BamoImpl::BamoDragSourceClientProxyImpl::UpdateControlPoints(
    this,
    0,
    *((struct tagPOINT **)a2 + 8),
    (const char *)*((unsigned int *)a2 + 18));
}
