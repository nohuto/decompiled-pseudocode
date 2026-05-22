/*
 * XREFs of ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x180171500
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x180051990 (-GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x1801713E0 (-DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z.c)
 *     ?UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x1801719A0 (-UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@.c)
 *     ?GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z @ 0x180171B9C (-GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z.c)
 */

__int64 __fastcall SystemButtonEventController::OnDisconnected(SystemButtonEventController *this)
{
  SystemButtonEventControllerManager *SystemButtonEventControllerManager; // rax
  __int128 i; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0LL;
        SystemButtonEventBuffer::GetOldestEvent(
          (SystemButtonEventController *)((char *)this + 64),
          (struct SystemButtonEventInfo *)&i);
        SystemButtonEventController::DeliverToNextTarget(this, (const struct SystemButtonEventInfo *)&i) )
  {
    ;
  }
  SystemButtonEventControllerManager = ISMStatics::GetSystemButtonEventControllerManager();
  SystemButtonEventControllerManager::UnregisterController(SystemButtonEventControllerManager, this);
  return 0LL;
}
