/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x1402A2F90
 * Callers:
 *     KeDisableTimer2 @ 0x14031DB78 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x14031E0B4 (KiFinalizeTimer2Disablement.c)
 *     KeFlushIoBuffers @ 0x1403472B0 (KeFlushIoBuffers.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403A35FC (KiInvokeInterruptServiceRoutine.c)
 *     HvcallInitiateHypercall @ 0x1403CD360 (HvcallInitiateHypercall.c)
 *     KiScanInterruptObjectList @ 0x1404206E0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1404208C0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420A10 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x140426860 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1404269C0 (KiVmbusInterruptSubDispatch.c)
 *     IopTimerDispatch @ 0x140555CA0 (IopTimerDispatch.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 *     NtSetValueKey @ 0x1406D2A00 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1406D58D0 (CmpSecurityMethod.c)
 *     NtQueryKey @ 0x1406D6BB0 (NtQueryKey.c)
 *     NtEnumerateKey @ 0x1406DBE10 (NtEnumerateKey.c)
 *     CmOpenKey @ 0x1406E2A60 (CmOpenKey.c)
 *     NtQueryValueKey @ 0x1406E2E70 (NtQueryValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14070DD60 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14070E330 (NtEnumerateValueKey.c)
 *     NtDeleteValueKey @ 0x14070EA40 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FCB0 (NtDeleteKey.c)
 *     CmpCloseKeyObject @ 0x140768090 (CmpCloseKeyObject.c)
 *     NtFlushKey @ 0x1407AC4C0 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1407AC9F0 (NtSetInformationKey.c)
 *     CmpReplicateKeyToVirtual @ 0x140A19FA8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     EtwGetKernelTraceTimestampSilo @ 0x1402A2FB0 (EtwGetKernelTraceTimestampSilo.c)
 */

__int64 __fastcall EtwGetKernelTraceTimestamp(__int64 a1, __int64 a2)
{
  return EtwGetKernelTraceTimestampSilo(a1, a2, 0LL);
}
