/*
 * XREFs of ?GetMPCConstantManagerClient@BamoMPCManagerProxy@@UEAAPEAVBamoMPCConstantManagerClientProxy@@XZ @ 0x180179CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001A38C (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoMPCConstantManagerClientProxy *__fastcall BamoMPCManagerProxy::GetMPCConstantManagerClient(
        BamoMPCManagerProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoMPCConstantManagerClientProxy *)*((_QWORD *)this + 5);
}
