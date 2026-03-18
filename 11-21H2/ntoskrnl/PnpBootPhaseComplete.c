/*
 * XREFs of PnpBootPhaseComplete @ 0x140827E8C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14082830C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1402DCF44 (PnpRequestDeviceAction.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     PiDmaGuardInitialize @ 0x1403C09F8 (PiDmaGuardInitialize.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     PiPnpRtlInit @ 0x140825E70 (PiPnpRtlInit.c)
 *     PpDevCfgProcessDevices @ 0x140827F54 (PpDevCfgProcessDevices.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 PnpBootPhaseComplete()
{
  int v0; // ebx
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  v0 = PiPnpRtlInit(2u);
  if ( v0 >= 0 )
  {
    PnpBootMode = 0;
    if ( PnpSetupOOBEInProgress
      && (int)ExSubscribeWnfStateChange(
                (int)&PnpSetupWnfSubscription,
                (int)&WNF_DEP_OOBE_COMPLETE,
                1,
                0,
                (__int64)PipUpdateSetupOobeCompleteWnfCallback,
                0LL) < 0 )
    {
      PnpSetupOOBEInProgress = 0;
    }
    v0 = PiDmaGuardInitialize(2);
    if ( v0 >= 0 )
    {
      PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 2, 0, 39LL, 0LL, 0LL, 0LL);
      v0 = PpDevCfgProcessDevices();
      if ( v0 >= 0 )
      {
        Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1852403792LL);
        if ( Pool2 )
        {
          Pool2->List.Flink = 0LL;
          Pool2->WorkerRoutine = PipUpdateDeviceProducts;
          Pool2->Parameter = Pool2;
          ExQueueWorkItem(Pool2, NormalWorkQueue);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)v0;
}
