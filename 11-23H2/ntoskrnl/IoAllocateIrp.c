/*
 * XREFs of IoAllocateIrp @ 0x14022E720
 * Callers:
 *     PopAllocateIrp @ 0x14028F6C4 (PopAllocateIrp.c)
 *     CcSetValidData @ 0x140354FC4 (CcSetValidData.c)
 *     SmKmIssueVolumeIo @ 0x1405CBB3C (SmKmIssueVolumeIo.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1406C73C8 (WmipSendWmiIrp.c)
 *     CmpFileFlushAndPurge @ 0x140750DB4 (CmpFileFlushAndPurge.c)
 *     IopSynchronousCall @ 0x140768594 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140790420 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x140795184 (PnpAsynchronousCall.c)
 *     WmipGetFilePDO @ 0x1407C3C5C (WmipGetFilePDO.c)
 *     PopFxRegisterDeviceWorker @ 0x1408369AC (PopFxRegisterDeviceWorker.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140849184 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x14084D050 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14084E4C4 (PopAcquireCoolingInterface.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x140854030 (PpIrpAllocateDeviceUsageNotification.c)
 *     WmipSetTraceNotify @ 0x14086BFC0 (WmipSetTraceNotify.c)
 *     IopEjectDevice @ 0x14096CF18 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8EFC (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14022F0B0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x140290050 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140AC0CD0 (IovAllocateIrp.c)
 */

PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, (unsigned __int8)StackSize, ChargeQuota);
  if ( IopDispatchAllocateIrp == 2 || ViVerifyAllDrivers != 1 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, (unsigned __int8)StackSize, ChargeQuota);
  return (PIRP)IovAllocateIrp(0LL, (unsigned __int8)StackSize, ChargeQuota, retaddr);
}
