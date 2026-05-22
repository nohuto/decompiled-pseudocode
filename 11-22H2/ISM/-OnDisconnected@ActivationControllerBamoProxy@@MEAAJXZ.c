/*
 * XREFs of ?OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x1800B8450
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18001D79C (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800B6128 (-UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 */

__int64 __fastcall ActivationControllerBamoProxy::OnDisconnected(ActivationControllerBamoProxy *this)
{
  ForegroundManager *v2; // rcx

  ISMStatics::GetForegroundManager();
  ForegroundManager::UnregisterActivationController(v2, this);
  return 0LL;
}
