/*
 * XREFs of ?GetGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxy@@UEAAPEAVBamoEdgyGestureRecognitionConfigurationProxy@@XZ @ 0x1801330A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001ABBC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoEdgyGestureRecognitionConfigurationProxy *__fastcall BamoEdgyNotificationSourceClientProxy::GetGestureRecognitionConfiguration(
        BamoEdgyNotificationSourceClientProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoEdgyGestureRecognitionConfigurationProxy *)*((_QWORD *)this + 6);
}
