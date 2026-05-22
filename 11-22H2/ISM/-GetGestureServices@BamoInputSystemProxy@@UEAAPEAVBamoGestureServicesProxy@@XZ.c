/*
 * XREFs of ?GetGestureServices@BamoInputSystemProxy@@UEAAPEAVBamoGestureServicesProxy@@XZ @ 0x1801330D0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001ABBC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoGestureServicesProxy *__fastcall BamoInputSystemProxy::GetGestureServices(BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoGestureServicesProxy *)*((_QWORD *)this + 9);
}
