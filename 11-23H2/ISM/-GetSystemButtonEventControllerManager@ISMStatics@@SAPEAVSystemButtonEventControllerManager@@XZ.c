/*
 * XREFs of ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x180051990
 * Callers:
 *     ?OnConnected@SystemButtonEventController@@MEAAJXZ @ 0x180051940 (-OnConnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x1801713E0 (-DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x180171400 (-OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x180171500 (-OnDisconnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801D3270 (-OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
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
