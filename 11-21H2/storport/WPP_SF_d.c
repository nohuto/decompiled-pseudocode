/*
 * XREFs of WPP_SF_d @ 0x1C003C4B8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0016C00 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidLunQueueWaitForQuiescence @ 0x1C0018768 (RaidLunQueueWaitForQuiescence.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C001AE84 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C001B258 (RaidBusEnumeratorVisitUnit.c)
 *     RaidAdapterHack @ 0x1C0034D20 (RaidAdapterHack.c)
 *     RaidStallDeviceQueue @ 0x1C003E090 (RaidStallDeviceQueue.c)
 *     StorPortAdapterPoFxWaitWakeCompletion @ 0x1C004ACB0 (StorPortAdapterPoFxWaitWakeCompletion.c)
 *     RaWmiDispatchIrp @ 0x1C0089494 (RaWmiDispatchIrp.c)
 *     StorpRegisterShim @ 0x1C009059C (StorpRegisterShim.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_d(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
