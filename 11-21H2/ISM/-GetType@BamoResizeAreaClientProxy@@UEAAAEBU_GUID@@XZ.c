/*
 * XREFs of ?GetType@BamoResizeAreaClientProxy@@UEAAAEBU_GUID@@XZ @ 0x18010A780
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18004C968 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct _GUID *__fastcall BamoResizeAreaClientProxy::GetType(BamoResizeAreaClientProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const struct _GUID *)((char *)this + 40);
}
