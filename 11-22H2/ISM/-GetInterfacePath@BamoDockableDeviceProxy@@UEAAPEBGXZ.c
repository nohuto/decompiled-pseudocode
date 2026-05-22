/*
 * XREFs of ?GetInterfacePath@BamoDockableDeviceProxy@@UEAAPEBGXZ @ 0x1801333D0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001ABBC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const unsigned __int16 *__fastcall BamoDockableDeviceProxy::GetInterfacePath(BamoDockableDeviceProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const unsigned __int16 *)*((_QWORD *)this + 5);
}
