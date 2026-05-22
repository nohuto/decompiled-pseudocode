/*
 * XREFs of ?GetDragProcessorManager@BamoInputSystemProxy@@UEAAPEAVBamoDragProcessorManagerProxy@@XZ @ 0x180109B50
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18004C968 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoDragProcessorManagerProxy *__fastcall BamoInputSystemProxy::GetDragProcessorManager(
        BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoDragProcessorManagerProxy *)*((_QWORD *)this + 8);
}
