/*
 * XREFs of WPP_SF_ @ 0x1C00046A8
 * Callers:
 *     CiSchedulerDeepSleep @ 0x1C0001190 (CiSchedulerDeepSleep.c)
 *     CiSchedulerWait @ 0x1C0001630 (CiSchedulerWait.c)
 *     CiSchedulerThreadFunction @ 0x1C0002F80 (CiSchedulerThreadFunction.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C000A240 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000AD60 (CiDispatchCreateMmThreadClient.c)
 *     CiThreadCreate @ 0x1C000AED0 (CiThreadCreate.c)
 *     CiTaskIndexCreate @ 0x1C000B4E0 (CiTaskIndexCreate.c)
 *     CiDriverUnload @ 0x1C000C4B0 (CiDriverUnload.c)
 *     CiSchedulerInitialize @ 0x1C000D140 (CiSchedulerInitialize.c)
 *     CiConfigInitialize @ 0x1C000D4E0 (CiConfigInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00033D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
