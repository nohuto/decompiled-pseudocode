/*
 * XREFs of ?GetHeatGripService@BamoInputSystemProxy@@UEAAPEAVBamoHeatGripServiceProxy@@XZ @ 0x180109E60
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18004C968 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoHeatGripServiceProxy *__fastcall BamoInputSystemProxy::GetHeatGripService(BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoHeatGripServiceProxy *)*((_QWORD *)this + 10);
}
