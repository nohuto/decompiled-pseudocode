/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180148160
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180144B2C (-UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ.c)
 *     ?UpdateRoutingMode@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4EdgyRoutingMode@Input@Internal@UI@Windows@@@Z @ 0x1801479E8 (-UpdateRoutingMode@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4EdgyRoutingMode@.c)
 */

void __fastcall BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoEdgyNotificationSourceClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v4; // rax

  BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateRoutingMode((__int64)this, 0LL, *((unsigned int *)a2 + 8));
  v4 = *((_QWORD *)a2 + 5);
  if ( v4 )
    BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateGestureRecognitionConfiguration(
      this,
      0,
      *(unsigned int *)(v4 + 40));
}
