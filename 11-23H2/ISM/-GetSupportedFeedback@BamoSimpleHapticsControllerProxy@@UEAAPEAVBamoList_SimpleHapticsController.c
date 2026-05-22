/*
 * XREFs of ?GetSupportedFeedback@BamoSimpleHapticsControllerProxy@@UEAAPEAVBamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@XZ @ 0x180125850
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001A38C (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Proxy *__fastcall BamoSimpleHapticsControllerProxy::GetSupportedFeedback(
        BamoSimpleHapticsControllerProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Proxy *)*((_QWORD *)this + 5);
}
