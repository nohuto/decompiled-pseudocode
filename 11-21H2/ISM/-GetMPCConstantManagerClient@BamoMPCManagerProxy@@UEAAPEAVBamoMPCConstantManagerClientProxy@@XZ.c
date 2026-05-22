/*
 * XREFs of ?GetMPCConstantManagerClient@BamoMPCManagerProxy@@UEAAPEAVBamoMPCConstantManagerClientProxy@@XZ @ 0x18015AA50
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18004C968 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoMPCConstantManagerClientProxy *__fastcall BamoMPCManagerProxy::GetMPCConstantManagerClient(
        BamoMPCManagerProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoMPCConstantManagerClientProxy *)*((_QWORD *)this + 5);
}
