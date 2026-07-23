/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x1402A3220
 * Callers:
 *     KeDisableTimer2 @ 0x14031DE08 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x14031E344 (KiFinalizeTimer2Disablement.c)
 *     KeFlushIoBuffers @ 0x140347540 (KeFlushIoBuffers.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403A37DC (KiInvokeInterruptServiceRoutine.c)
 *     HvcallInitiateHypercall @ 0x1403CD540 (HvcallInitiateHypercall.c)
 *     KiScanInterruptObjectList @ 0x140420A70 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140420C50 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420DA0 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x140426BF0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140426D50 (KiVmbusInterruptSubDispatch.c)
 *     IopTimerDispatch @ 0x140556360 (IopTimerDispatch.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 *     NtSetValueKey @ 0x1406D2A30 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1406D5900 (CmpSecurityMethod.c)
 *     NtQueryKey @ 0x1406D6BE0 (NtQueryKey.c)
 *     NtEnumerateKey @ 0x1406DBE40 (NtEnumerateKey.c)
 *     CmOpenKey @ 0x1406E2A90 (CmOpenKey.c)
 *     NtQueryValueKey @ 0x1406E2EA0 (NtQueryValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14070DF70 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14070E540 (NtEnumerateValueKey.c)
 *     NtDeleteValueKey @ 0x14070EC50 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FEC0 (NtDeleteKey.c)
 *     CmpCloseKeyObject @ 0x140768280 (CmpCloseKeyObject.c)
 *     NtFlushKey @ 0x1407AC6B0 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1407ACBE0 (NtSetInformationKey.c)
 *     CmpReplicateKeyToVirtual @ 0x140A1A258 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     EtwGetKernelTraceTimestampSilo @ 0x1402A3240 (EtwGetKernelTraceTimestampSilo.c)
 */

__int64 __fastcall EtwGetKernelTraceTimestamp(__int64 a1, __int64 a2)
{
  return EtwGetKernelTraceTimestampSilo(a1, a2, 0LL);
}
