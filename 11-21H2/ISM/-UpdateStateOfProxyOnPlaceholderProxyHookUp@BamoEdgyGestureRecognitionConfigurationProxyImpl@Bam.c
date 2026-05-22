/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18011EA80
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGestureDirection@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NPEBUVector2@Numerics@Foundation@Windows@@@Z @ 0x18011B240 (-UpdateGestureDirection@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NPEBUVe.c)
 *     ?UpdateGestureMinimumDistanceInHimetrics@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18011B378 (-UpdateGestureMinimumDistanceInHimetrics@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoIm.c)
 *     ?UpdateOrientationBiasInDegrees@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NM@Z @ 0x18011D364 (-UpdateOrientationBiasInDegrees@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ.c)
 */

void __fastcall BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureDirection(
    this,
    0LL,
    (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)a2 + 32));
  BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateOrientationBiasInDegrees(
    this,
    0LL,
    *((float *)a2 + 10));
  BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureMinimumDistanceInHimetrics(
    this,
    0LL,
    *((unsigned int *)a2 + 11));
  BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureTimeoutInMilliseconds(
    this,
    0LL,
    *((unsigned int *)a2 + 12));
}
