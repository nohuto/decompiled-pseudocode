/*
 * XREFs of ?GetCallbacks@BamoMPCConstantManagerClientStub@@UEAAPEAVBamoMPCConstantManagerClientCallbacksProxy@@XZ @ 0x1800BDED0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001ABBC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoMPCConstantManagerClientCallbacksProxy *__fastcall BamoMPCConstantManagerClientStub::GetCallbacks(
        BamoMPCConstantManagerClientStub *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL));
  return (struct BamoMPCConstantManagerClientCallbacksProxy *)*((_QWORD *)this + 9);
}
