/*
 * XREFs of ?GetDeviceId@BamoDockableDeviceProxy@@UEAAAEBUDockableDeviceIdentity@@XZ @ 0x180109A70
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18004C968 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct DockableDeviceIdentity *__fastcall BamoDockableDeviceProxy::GetDeviceId(BamoDockableDeviceProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (BamoDockableDeviceProxy *)((char *)this + 48);
}
