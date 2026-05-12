/*
 * XREFs of WPP_SF_DDD @ 0x1C003C54C
 * Callers:
 *     StorPortPauseDevice @ 0x1C0002540 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C00026B0 (StorPortResumeDevice.c)
 *     RaidAdapterDeferredRoutine @ 0x1C00028C0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C0002A08 (RaidAdapterResumeUnit.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C001B258 (RaidBusEnumeratorVisitUnit.c)
 *     RaidPnPPassToMiniPort @ 0x1C001D6D0 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterDeviceBusy @ 0x1C00344B4 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C0034588 (RaidAdapterDeviceReady.c)
 *     StorPortCompleteRequest @ 0x1C0042D30 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x1C0043060 (StorPortDeviceReady.c)
 *     StorpLogSystemEvent @ 0x1C0046524 (StorpLogSystemEvent.c)
 *     RaidUnitRequestTimeout @ 0x1C005532C (RaidUnitRequestTimeout.c)
 *     RaWmiPassToMiniPort @ 0x1C0089714 (RaWmiPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
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
