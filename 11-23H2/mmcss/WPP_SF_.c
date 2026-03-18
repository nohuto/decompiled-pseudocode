/*
 * XREFs of WPP_SF_ @ 0x1C0004F34
 * Callers:
 *     CiSchedulerDeepSleep @ 0x1C00011C0 (CiSchedulerDeepSleep.c)
 *     CiSchedulerWait @ 0x1C0001680 (CiSchedulerWait.c)
 *     CiSchedulerThreadFunction @ 0x1C0002E60 (CiSchedulerThreadFunction.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C000B670 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000BF30 (CiDispatchCreateMmThreadClient.c)
 *     CiThreadCreate @ 0x1C000C1B0 (CiThreadCreate.c)
 *     CiTaskIndexCreate @ 0x1C000C7A0 (CiTaskIndexCreate.c)
 *     CiDriverUnload @ 0x1C000D870 (CiDriverUnload.c)
 *     CiSchedulerInitialize @ 0x1C000F540 (CiSchedulerInitialize.c)
 *     CiConfigInitialize @ 0x1C000F670 (CiConfigInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
