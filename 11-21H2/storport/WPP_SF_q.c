/*
 * XREFs of WPP_SF_q @ 0x1C003C5A8
 * Callers:
 *     StorpRequestTimer @ 0x1C000F4E0 (StorpRequestTimer.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C0013A80 (RaidUnitPendingDpcRoutine.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C001A598 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C001AE84 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaDriverUnload @ 0x1C003D670 (RaDriverUnload.c)
 *     StorPortReady @ 0x1C0043A70 (StorPortReady.c)
 *     StorpFreeTimer @ 0x1C0045484 (StorpFreeTimer.c)
 *     StorpInitializeTimer @ 0x1C0046240 (StorpInitializeTimer.c)
 *     RaidQueryAcpiDsdSynchronous @ 0x1C004EED8 (RaidQueryAcpiDsdSynchronous.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x1C00509E0 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitAttributeManagement @ 0x1C0050B84 (RaUnitAttributeManagement.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C0051240 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitGetQOSIoctl @ 0x1C0051548 (RaUnitGetQOSIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0051F24 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C005256C (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C0053CD4 (RaUnitUnresponsiveAttributeMgmt.c)
 *     RaidUnitRequestTimeout @ 0x1C005532C (RaidUnitRequestTimeout.c)
 *     RaidUnitGetDeviceParameters @ 0x1C0088000 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
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
