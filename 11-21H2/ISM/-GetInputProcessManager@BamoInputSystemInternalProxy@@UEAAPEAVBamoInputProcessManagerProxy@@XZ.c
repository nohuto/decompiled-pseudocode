/*
 * XREFs of ?GetInputProcessManager@BamoInputSystemInternalProxy@@UEAAPEAVBamoInputProcessManagerProxy@@XZ @ 0x18010A030
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18004C968 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoInputProcessManagerProxy *__fastcall BamoInputSystemInternalProxy::GetInputProcessManager(
        BamoInputSystemInternalProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoInputProcessManagerProxy *)*((_QWORD *)this + 5);
}
