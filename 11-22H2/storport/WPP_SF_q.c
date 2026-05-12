/*
 * XREFs of WPP_SF_q @ 0x1C003E93C
 * Callers:
 *     StorpRequestTimer @ 0x1C000D7FC (StorpRequestTimer.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C000EA30 (RaidUnitPendingDpcRoutine.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C001605C (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C00182F0 (RaidpBuildAdapterBusRelations.c)
 *     RaDriverUnload @ 0x1C003F8A0 (RaDriverUnload.c)
 *     StorPortReady @ 0x1C0046890 (StorPortReady.c)
 *     StorpFreeTimer @ 0x1C004895C (StorpFreeTimer.c)
 *     StorpInitializeTimer @ 0x1C00493AC (StorpInitializeTimer.c)
 *     RaidQueryAcpiDsdSynchronous @ 0x1C005A56C (RaidQueryAcpiDsdSynchronous.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x1C005CF80 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitAttributeManagement @ 0x1C005D398 (RaUnitAttributeManagement.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C005DA30 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitGetQOSIoctl @ 0x1C005DF04 (RaUnitGetQOSIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C005E730 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C005ED7C (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C00605A8 (RaUnitUnresponsiveAttributeMgmt.c)
 *     RaidUnitRequestTimeout @ 0x1C00620B8 (RaidUnitRequestTimeout.c)
 *     RaidUnitGetDeviceParameters @ 0x1C00A30B8 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_q(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           0LL);
}
