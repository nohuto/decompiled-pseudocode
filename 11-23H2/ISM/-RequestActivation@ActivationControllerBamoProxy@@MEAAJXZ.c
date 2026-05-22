/*
 * XREFs of ?RequestActivation@ActivationControllerBamoProxy@@MEAAJXZ @ 0x1800A5C00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x180026B3C (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800A2D7C (-RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 */

__int64 __fastcall ActivationControllerBamoProxy::RequestActivation(ActivationControllerBamoProxy *this)
{
  ForegroundManager *ForegroundManager; // rax

  ForegroundManager = ISMStatics::GetForegroundManager();
  ForegroundManager::RequestActivation(ForegroundManager, this);
  return 0LL;
}
