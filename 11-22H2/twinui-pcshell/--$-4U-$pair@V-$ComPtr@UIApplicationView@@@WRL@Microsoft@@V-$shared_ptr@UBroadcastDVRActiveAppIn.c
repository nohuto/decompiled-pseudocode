/*
 * XREFs of ??$?4U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@AEBU01@@Z @ 0x1801B9934
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18009BDC8 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ??4?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009C468 (--4-$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 *__fastcall std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>,0>(
        __int64 *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(a1, a2);
  std::shared_ptr<SnapInteraction::InteractionRecord>::operator=(a1 + 1, a2 + 1);
  return a1;
}
