/*
 * XREFs of ?GetGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxy@@UEAAPEAVBamoEdgyGestureRecognitionConfigurationProxy@@XZ @ 0x180109D50
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18004C968 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoEdgyGestureRecognitionConfigurationProxy *__fastcall BamoEdgyDragSourceClientProxy::GetGestureRecognitionConfiguration(
        BamoEdgyDragSourceClientProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoEdgyGestureRecognitionConfigurationProxy *)*((_QWORD *)this + 8);
}
