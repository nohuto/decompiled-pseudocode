/*
 * XREFs of ?GetStartPosition@BamoControllerNavigationClientProxy@@UEAAAEBUtagPOINT@@XZ @ 0x1801930C0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001A38C (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct tagPOINT *__fastcall BamoControllerNavigationClientProxy::GetStartPosition(
        BamoControllerNavigationClientProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const struct tagPOINT *)((char *)this + 64);
}
