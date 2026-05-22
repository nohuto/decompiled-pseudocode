/*
 * XREFs of ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x180081DA0
 * Callers:
 *     ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x180152464 (-DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnConnected@SystemButtonEventController@@MEAAJXZ @ 0x180152480 (-OnConnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x180152520 (-OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x180152620 (-OnDisconnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B4DD0 (-OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 */

struct SystemButtonEventControllerManager *ISMStatics::GetSystemButtonEventControllerManager(void)
{
  struct SystemButtonEventControllerManager *result; // rax

  result = ISMStatics::s_systemButtonControllerManager;
  if ( !ISMStatics::s_systemButtonControllerManager )
  {
    result = (struct SystemButtonEventControllerManager *)operator new(0x10uLL);
    ISMStatics::s_systemButtonControllerManager = result;
    *(_QWORD *)result = 0LL;
    *((_QWORD *)result + 1) = 0LL;
  }
  return result;
}
