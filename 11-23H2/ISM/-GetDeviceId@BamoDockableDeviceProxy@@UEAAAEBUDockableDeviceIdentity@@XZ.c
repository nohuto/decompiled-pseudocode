/*
 * XREFs of ?GetDeviceId@BamoDockableDeviceProxy@@UEAAAEBUDockableDeviceIdentity@@XZ @ 0x180124DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001A38C (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct DockableDeviceIdentity *__fastcall BamoDockableDeviceProxy::GetDeviceId(BamoDockableDeviceProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (BamoDockableDeviceProxy *)((char *)this + 48);
}
