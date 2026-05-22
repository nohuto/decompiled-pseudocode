/*
 * XREFs of ?GetUIAHitTest@BamoInputSystemProxy@@UEAAPEAVBamoUIAHitTestProxy@@XZ @ 0x180125AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001A38C (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoUIAHitTestProxy *__fastcall BamoInputSystemProxy::GetUIAHitTest(BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoUIAHitTestProxy *)*((_QWORD *)this + 20);
}
