/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBED4
 * Callers:
 *     NtReplacePartitionUnit @ 0x140679E10 (NtReplacePartitionUnit.c)
 *     PiGetRelatedDevice @ 0x1406C9218 (PiGetRelatedDevice.c)
 *     PipProcessDevNodeTree @ 0x1406CB6C0 (PipProcessDevNodeTree.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CBD50 (PiControlGetSetDeviceStatus.c)
 *     PiPnpRtlCmActionCallback @ 0x140788D10 (PiPnpRtlCmActionCallback.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140790974 (IopDeviceObjectFromSymbolicName.c)
 *     PiControlGetPropertyData @ 0x140792940 (PiControlGetPropertyData.c)
 *     IopProcessSetInterfaceState @ 0x1407938C4 (IopProcessSetInterfaceState.c)
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     PiGetDeviceDepth @ 0x1407D5E60 (PiGetDeviceDepth.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1407D8BB4 (PnpIsDeviceInstanceEnabled.c)
 *     IopInitializeDeviceInstanceKey @ 0x140812494 (IopInitializeDeviceInstanceKey.c)
 *     PiSwIrpStartCreateWorker @ 0x14081931C (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpCleanup @ 0x14081A784 (PiSwIrpCleanup.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     PiSwGetChildPdo @ 0x140848620 (PiSwGetChildPdo.c)
 *     PiQueryDeviceRelations @ 0x14084E0FC (PiQueryDeviceRelations.c)
 *     PnpDriverLoadingFailed @ 0x140862E84 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14095B430 (PiDcResetChildDeviceContainerCallback.c)
 *     PiSwCloseDevice @ 0x1409672C0 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x1409678D0 (PiSwProcessRemove.c)
 *     PiCMCreateDevice @ 0x140968630 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x14096DCE4 (PiInitializeDevice.c)
 *     PiQueueDeviceRequest @ 0x14096E0E8 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096E250 (PnpQueueQueryAndRemoveEvent.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140B6A144 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14022D020 (RtlLookupElementGenericTableAvl.c)
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
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
