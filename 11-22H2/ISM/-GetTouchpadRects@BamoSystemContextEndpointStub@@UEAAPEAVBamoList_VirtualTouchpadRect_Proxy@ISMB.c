/*
 * XREFs of ?GetTouchpadRects@BamoSystemContextEndpointStub@@UEAAPEAVBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@XZ @ 0x1800B1390
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001ABBC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Proxy *__fastcall BamoSystemContextEndpointStub::GetTouchpadRects(
        BamoSystemContextEndpointStub *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL));
  return (struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Proxy *)*((_QWORD *)this + 10);
}
