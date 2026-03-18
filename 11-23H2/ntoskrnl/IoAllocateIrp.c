/*
 * XREFs of IoAllocateIrp @ 0x14022E610
 * Callers:
 *     PopAllocateIrp @ 0x14028F434 (PopAllocateIrp.c)
 *     CcSetValidData @ 0x140354E24 (CcSetValidData.c)
 *     SmKmIssueVolumeIo @ 0x1405CB5CC (SmKmIssueVolumeIo.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1406C7398 (WmipSendWmiIrp.c)
 *     CmpFileFlushAndPurge @ 0x140750BC4 (CmpFileFlushAndPurge.c)
 *     IopSynchronousCall @ 0x1407683A4 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140790230 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x140794F94 (PnpAsynchronousCall.c)
 *     WmipGetFilePDO @ 0x1407C398C (WmipGetFilePDO.c)
 *     PopFxRegisterDeviceWorker @ 0x1408366AC (PopFxRegisterDeviceWorker.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140848E84 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x14084CD50 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14084E1C4 (PopAcquireCoolingInterface.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x140853D30 (PpIrpAllocateDeviceUsageNotification.c)
 *     WmipSetTraceNotify @ 0x14086BD80 (WmipSetTraceNotify.c)
 *     IopEjectDevice @ 0x14096CD18 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8CFC (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14022EFA0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14028FDC0 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140AC0CE0 (IovAllocateIrp.c)
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
