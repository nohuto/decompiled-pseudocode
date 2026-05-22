/*
 * XREFs of ?GetLuid@BamoActivationControllerProxy@@UEAAAEBU_LUID@@XZ @ 0x18001A360
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001A38C (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct _LUID *__fastcall BamoActivationControllerProxy::GetLuid(BamoActivationControllerProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const struct _LUID *)((char *)this + 56);
}
