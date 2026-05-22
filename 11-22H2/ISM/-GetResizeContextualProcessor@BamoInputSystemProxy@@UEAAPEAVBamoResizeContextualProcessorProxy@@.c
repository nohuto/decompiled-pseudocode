/*
 * XREFs of ?GetResizeContextualProcessor@BamoInputSystemProxy@@UEAAPEAVBamoResizeContextualProcessorProxy@@XZ @ 0x180133730
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001ABBC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoResizeContextualProcessorProxy *__fastcall BamoInputSystemProxy::GetResizeContextualProcessor(
        BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoResizeContextualProcessorProxy *)*((_QWORD *)this + 16);
}
