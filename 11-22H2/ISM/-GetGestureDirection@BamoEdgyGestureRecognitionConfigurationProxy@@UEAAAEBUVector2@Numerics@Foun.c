/*
 * XREFs of ?GetGestureDirection@BamoEdgyGestureRecognitionConfigurationProxy@@UEAAAEBUVector2@Numerics@Foundation@Windows@@XZ @ 0x180133000
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001ABBC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct Windows::Foundation::Numerics::Vector2 *__fastcall BamoEdgyGestureRecognitionConfigurationProxy::GetGestureDirection(
        BamoEdgyGestureRecognitionConfigurationProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (BamoEdgyGestureRecognitionConfigurationProxy *)((char *)this + 40);
}
