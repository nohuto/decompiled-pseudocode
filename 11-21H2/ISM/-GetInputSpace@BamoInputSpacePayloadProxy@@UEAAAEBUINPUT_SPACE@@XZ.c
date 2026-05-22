/*
 * XREFs of ?GetInputSpace@BamoInputSpacePayloadProxy@@UEAAAEBUINPUT_SPACE@@XZ @ 0x18010A090
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18004C968 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct INPUT_SPACE *__fastcall BamoInputSpacePayloadProxy::GetInputSpace(BamoInputSpacePayloadProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (BamoInputSpacePayloadProxy *)((char *)this + 40);
}
