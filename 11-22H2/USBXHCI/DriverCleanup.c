/*
 * XREFs of DriverCleanup @ 0x1C00798D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C0038A48 (McGenEventUnregister_EtwUnregister.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C0053A08 (UninitializeTelemetryAssertsKM.c)
 *     wil_UninitializeFeatureStaging @ 0x1C006D008 (wil_UninitializeFeatureStaging.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x1C00799B0 (TraceLoggingUnregister_EtwUnregister.c)
 *     WppCleanupKm @ 0x1C00799DC (WppCleanupKm.c)
 */

__int64 __fastcall DriverCleanup(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 944))(WdfDriverGlobals, a1);
  WppCleanupKm(v1);
  if ( *(_QWORD *)(g_WdfDriverUsbXhciContext + 32) )
  {
    if ( qword_1C0064AE8 )
      qword_1C0064AE8();
    *(_QWORD *)(g_WdfDriverUsbXhciContext + 32) = 0LL;
  }
  UninitializeTelemetryAssertsKM();
  McGenEventUnregister_EtwUnregister();
  TraceLoggingUnregister_EtwUnregister(&dword_1C0063748);
  if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) )
  {
    PcwUnregister(Ctr_Interrupter);
    PcwUnregister(Ctr_CommonBuffer);
    PcwUnregister(Ctr_TransferRing);
  }
  return wil_UninitializeFeatureStaging();
}
