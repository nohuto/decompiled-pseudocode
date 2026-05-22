/*
 * XREFs of ?GetActivationWatcher@BamoInputSystemProxy@@UEAAPEAVBamoActivationWatcherProxy@@XZ @ 0x180132BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001ABBC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoActivationWatcherProxy *__fastcall BamoInputSystemProxy::GetActivationWatcher(BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoActivationWatcherProxy *)*((_QWORD *)this + 5);
}
