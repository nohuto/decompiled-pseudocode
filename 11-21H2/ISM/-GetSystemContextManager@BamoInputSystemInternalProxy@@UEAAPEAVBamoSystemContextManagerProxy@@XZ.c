/*
 * XREFs of ?GetSystemContextManager@BamoInputSystemInternalProxy@@UEAAPEAVBamoSystemContextManagerProxy@@XZ @ 0x18010A5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18004C968 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoSystemContextManagerProxy *__fastcall BamoInputSystemInternalProxy::GetSystemContextManager(
        BamoInputSystemInternalProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoSystemContextManagerProxy *)*((_QWORD *)this + 6);
}
