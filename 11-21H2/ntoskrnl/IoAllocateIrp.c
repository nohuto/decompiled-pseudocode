/*
 * XREFs of IoAllocateIrp @ 0x1402AAB20
 * Callers:
 *     CcSetValidData @ 0x14023F3E8 (CcSetValidData.c)
 *     PopAllocateIrp @ 0x1403A3F0C (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x1405FB99C (SmKmIssueVolumeIo.c)
 *     CmpFileFlushAndPurge @ 0x14068A23C (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x14068BEAC (CmpGetVolumeClusterSize.c)
 *     WmipGetFilePDO @ 0x1406C1BD4 (WmipGetFilePDO.c)
 *     IopFilterResourceRequirementsCall @ 0x140748D6C (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x14074C5A8 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x14074CA9C (IopSynchronousCall.c)
 *     WmipSendWmiIrp @ 0x1407839B4 (WmipSendWmiIrp.c)
 *     WmipSetTraceNotify @ 0x140810B00 (WmipSetTraceNotify.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14081AB80 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopFxRegisterDeviceWorker @ 0x140823988 (PopFxRegisterDeviceWorker.c)
 *     PopAcquireCoolingInterface @ 0x1408296B8 (PopAcquireCoolingInterface.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x14084BCDC (PpIrpAllocateDeviceUsageNotification.c)
 *     PopConnectToPolicyDevice @ 0x140858D04 (PopConnectToPolicyDevice.c)
 *     IopEjectDevice @ 0x1409585A4 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D5B38 (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14020B830 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1402AACD0 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x140A7FE00 (IovAllocateIrp.c)
 */

// local variable allocation has failed, the output may be wrong!
PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, (unsigned __int8)StackSize);
  if ( IopDispatchAllocateIrp == 2 || ViVerifyAllDrivers != 1 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, (unsigned __int8)StackSize);
  return (PIRP)IovAllocateIrp(0LL, (unsigned __int8)StackSize, ChargeQuota, retaddr);
}
