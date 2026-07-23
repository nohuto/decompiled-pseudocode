/*
 * XREFs of PnpBootPhaseComplete @ 0x1408113E0
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14080ABF0 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     PnpRequestDeviceAction @ 0x1403591E4 (PnpRequestDeviceAction.c)
 *     PiDmaGuardInitialize @ 0x140374F78 (PiDmaGuardInitialize.c)
 *     ExSubscribeWnfStateChange @ 0x1407DB000 (ExSubscribeWnfStateChange.c)
 *     PpDevCfgProcessDevices @ 0x140810FE4 (PpDevCfgProcessDevices.c)
 *     PiPnpRtlInit @ 0x1408114E4 (PiPnpRtlInit.c)
 *     Pdcv2ActivationClientRegister @ 0x14085ACA4 (Pdcv2ActivationClientRegister.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 PnpBootPhaseComplete()
{
  int v0; // ebx
  __int64 v1; // rcx
  void *v2; // rcx
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  _QWORD v5[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF

  v0 = PiPnpRtlInit(2LL);
  if ( v0 >= 0 )
  {
    PnpBootMode = 0;
    if ( PnpSetupOOBEInProgress
      && (int)ExSubscribeWnfStateChange(
                (__int64)&PnpSetupWnfSubscription,
                (__int64)&WNF_DEP_OOBE_COMPLETE,
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
      v5[2] = 0LL;
      v5[0] = 1LL;
      v5[1] = AlpcMessageDeleteProcedure;
      Pdcv2ActivationClientRegister(v1, v5);
      v6 = 0LL;
      v2 = (void *)*((_QWORD *)IopRootDeviceNode + 4);
      LODWORD(v6) = 39;
      PnpRequestDeviceAction(v2, 2u, 0, &v6, 0LL, 0LL, 0LL);
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
