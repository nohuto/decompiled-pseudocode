/*
 * XREFs of ?OnConnected@SystemButtonEventController@@MEAAJXZ @ 0x180152480
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x180081DA0 (-GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ.c)
 *     ?RegisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x180152C10 (-RegisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z.c)
 */

__int64 __fastcall SystemButtonEventController::OnConnected(SystemButtonEventController *this)
{
  SystemButtonEventControllerManager *SystemButtonEventControllerManager; // rax

  SystemButtonEventControllerManager = ISMStatics::GetSystemButtonEventControllerManager();
  SystemButtonEventControllerManager::RegisterController(SystemButtonEventControllerManager, this);
  return 0LL;
}
