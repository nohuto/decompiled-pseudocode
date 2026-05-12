/*
 * XREFs of WPP_SF_DDD @ 0x1C003E8E0
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x1C00165A8 (RaidBusEnumeratorVisitUnit.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019810 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterDeviceBusy @ 0x1C003511C (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C00351A8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterPauseUnit @ 0x1C0036A6C (RaidAdapterPauseUnit.c)
 *     RaidAdapterResumeUnit @ 0x1C0037DAC (RaidAdapterResumeUnit.c)
 *     StorPortCompleteRequest @ 0x1C0045970 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x1C0045CA0 (StorPortDeviceReady.c)
 *     StorPortPauseDevice @ 0x1C0046510 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0046DB0 (StorPortResumeDevice.c)
 *     StorpLogSystemEvent @ 0x1C0049540 (StorpLogSystemEvent.c)
 *     RaidUnitRequestTimeout @ 0x1C00620B8 (RaidUnitRequestTimeout.c)
 *     ParseLockingObjectInfo @ 0x1C007B030 (ParseLockingObjectInfo.c)
 *     ParseGetTableColumnData @ 0x1C007C270 (ParseGetTableColumnData.c)
 *     RaWmiPassToMiniPort @ 0x1C00A2B7C (RaWmiPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_DDD(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           0LL);
}
