/*
 * XREFs of ExInitializePushLock @ 0x140223590
 * Callers:
 *     IoRegisterPriorityCallback @ 0x14039FF90 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A8AEC (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     IommuCreateAtsDevice @ 0x1405221E0 (IommuCreateAtsDevice.c)
 *     IommupMapDeviceInternal @ 0x1405240B8 (IommupMapDeviceInternal.c)
 *     PspInitializeSyscallProvider @ 0x1405A5170 (PspInitializeSyscallProvider.c)
 *     DbgpInsertDebugPrintCallback @ 0x1405A7DB4 (DbgpInsertDebugPrintCallback.c)
 *     PspIoRateEntryInitialize @ 0x140688AF8 (PspIoRateEntryInitialize.c)
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 *     PfSnPrefetchSections @ 0x14074CD68 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x14074D034 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnBeginTrace @ 0x14074DBA8 (PfSnBeginTrace.c)
 *     SmKmStoreAdd @ 0x1407B7D4C (SmKmStoreAdd.c)
 *     SepCreateLogonSessionTrack @ 0x1407BD77C (SepCreateLogonSessionTrack.c)
 *     IoDiskIoAttributionAllocate @ 0x1407D8808 (IoDiskIoAttributionAllocate.c)
 *     PfSnAsyncContextInitialize @ 0x1407DB4A8 (PfSnAsyncContextInitialize.c)
 *     HalpIommuCreateDevice @ 0x140829348 (HalpIommuCreateDevice.c)
 *     PoRegisterCoalescingCallback @ 0x140843270 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140843500 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x140847464 (PfFbBufferListInitialize.c)
 *     SmPartitionInitialize @ 0x14084F5DC (SmPartitionInitialize.c)
 *     SmcCacheManagerInitialize @ 0x14084F6E0 (SmcCacheManagerInitialize.c)
 *     ObRegisterCallbacks @ 0x1408581F0 (ObRegisterCallbacks.c)
 *     SmcCacheInitialize @ 0x1409DADD8 (SmcCacheInitialize.c)
 *     VmpProcessContextSetup @ 0x1409DD920 (VmpProcessContextSetup.c)
 *     PfTAccessTracingInitialize @ 0x140A88A4C (PfTAccessTracingInitialize.c)
 *     PspInitPhase0 @ 0x140B4A894 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     PfInitializeSuperfetch @ 0x140B617C0 (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x140B61BE0 (PfpRpInitialize.c)
 *     EtwpInitializeCoverageSampler @ 0x140B74030 (EtwpInitializeCoverageSampler.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PEX_RUNDOWN_REF RunRef)
{
  RunRef->Count = 0LL;
}
