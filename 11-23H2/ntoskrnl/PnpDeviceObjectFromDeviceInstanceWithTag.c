/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBEA4
 * Callers:
 *     NtReplacePartitionUnit @ 0x1406798C0 (NtReplacePartitionUnit.c)
 *     PiGetRelatedDevice @ 0x1406C91E8 (PiGetRelatedDevice.c)
 *     PipProcessDevNodeTree @ 0x1406CB690 (PipProcessDevNodeTree.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CBD20 (PiControlGetSetDeviceStatus.c)
 *     PiPnpRtlCmActionCallback @ 0x140788B20 (PiPnpRtlCmActionCallback.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140790784 (IopDeviceObjectFromSymbolicName.c)
 *     PiControlGetPropertyData @ 0x140792750 (PiControlGetPropertyData.c)
 *     IopProcessSetInterfaceState @ 0x1407936D4 (IopProcessSetInterfaceState.c)
 *     PiProcessNewDeviceNode @ 0x140795748 (PiProcessNewDeviceNode.c)
 *     PiGetDeviceDepth @ 0x1407D5B90 (PiGetDeviceDepth.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1407D88E4 (PnpIsDeviceInstanceEnabled.c)
 *     IopInitializeDeviceInstanceKey @ 0x1408121C4 (IopInitializeDeviceInstanceKey.c)
 *     PiSwIrpStartCreateWorker @ 0x14081904C (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpCleanup @ 0x14081A4B4 (PiSwIrpCleanup.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     PiSwGetChildPdo @ 0x140848320 (PiSwGetChildPdo.c)
 *     PiQueryDeviceRelations @ 0x14084DDFC (PiQueryDeviceRelations.c)
 *     PnpDriverLoadingFailed @ 0x140862C44 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14095B230 (PiDcResetChildDeviceContainerCallback.c)
 *     PiSwCloseDevice @ 0x1409670C0 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x1409676D0 (PiSwProcessRemove.c)
 *     PiCMCreateDevice @ 0x140968430 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x14096DAE4 (PiInitializeDevice.c)
 *     PiQueueDeviceRequest @ 0x14096DEE8 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096E050 (PnpQueueQueryAndRemoveEvent.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140B6A144 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14022CF10 (RtlLookupElementGenericTableAvl.c)
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1402B68C0 (ObfReferenceObjectWithTag.c)
 */

_QWORD *__fastcall PnpDeviceObjectFromDeviceInstanceWithTag(__int64 a1, ULONG a2)
{
  _QWORD *v2; // rbx
  _QWORD **v4; // rax
  __int64 v5; // rcx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = a1;
  v2 = 0LL;
  Buffer[0] = 0LL;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v4 = (_QWORD **)RtlLookupElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  if ( v4 )
  {
    v2 = *v4;
    if ( *v4 )
    {
      if ( *(_WORD *)v2 == 3 && (v5 = *(_QWORD *)(v2[39] + 40LL)) != 0 && *(_QWORD **)(v5 + 32) == v2 )
        ObfReferenceObjectWithTag(v2, a2);
      else
        v2 = 0LL;
    }
  }
  ExReleaseFastMutex(&PnpDeviceReferenceTableLock);
  return v2;
}
