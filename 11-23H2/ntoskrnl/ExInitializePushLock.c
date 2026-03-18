/*
 * XREFs of ExInitializePushLock @ 0x140223590
 * Callers:
 *     IoRegisterPriorityCallback @ 0x14039FDB0 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A890C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     IommuCreateAtsDevice @ 0x140521C90 (IommuCreateAtsDevice.c)
 *     IommupMapDeviceInternal @ 0x140523B68 (IommupMapDeviceInternal.c)
 *     PspInitializeSyscallProvider @ 0x1405A4C00 (PspInitializeSyscallProvider.c)
 *     DbgpInsertDebugPrintCallback @ 0x1405A7844 (DbgpInsertDebugPrintCallback.c)
 *     PspIoRateEntryInitialize @ 0x140688AF8 (PspIoRateEntryInitialize.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x1407409D0 (PspAllocateThread.c)
 *     PfSnPrefetchSections @ 0x14074CB78 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x14074CE44 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnBeginTrace @ 0x14074D9B8 (PfSnBeginTrace.c)
 *     SmKmStoreAdd @ 0x1407B7A6C (SmKmStoreAdd.c)
 *     SepCreateLogonSessionTrack @ 0x1407BD4AC (SepCreateLogonSessionTrack.c)
 *     IoDiskIoAttributionAllocate @ 0x1407D8538 (IoDiskIoAttributionAllocate.c)
 *     PfSnAsyncContextInitialize @ 0x1407DB1D8 (PfSnAsyncContextInitialize.c)
 *     HalpIommuCreateDevice @ 0x140829048 (HalpIommuCreateDevice.c)
 *     PoRegisterCoalescingCallback @ 0x140842F70 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140843200 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x140847164 (PfFbBufferListInitialize.c)
 *     SmPartitionInitialize @ 0x14084F2DC (SmPartitionInitialize.c)
 *     SmcCacheManagerInitialize @ 0x14084F3E0 (SmcCacheManagerInitialize.c)
 *     ObRegisterCallbacks @ 0x140857FB0 (ObRegisterCallbacks.c)
 *     SmcCacheInitialize @ 0x1409DABD8 (SmcCacheInitialize.c)
 *     VmpProcessContextSetup @ 0x1409DD720 (VmpProcessContextSetup.c)
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
