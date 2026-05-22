/*
 * XREFs of ?GetDeviceDockServer@BamoInputSystemProxy@@UEAAPEAVBamoDeviceDockServerProxy@@XZ @ 0x180109A40
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18004C968 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoDeviceDockServerProxy *__fastcall BamoInputSystemProxy::GetDeviceDockServer(BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoDeviceDockServerProxy *)*((_QWORD *)this + 7);
}
