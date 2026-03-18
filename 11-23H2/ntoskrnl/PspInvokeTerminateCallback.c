/*
 * XREFs of PspInvokeTerminateCallback @ 0x1409B4208
 * Callers:
 *     PsStartSiloMonitor @ 0x14084A100 (PsStartSiloMonitor.c)
 *     PspNotifyServerSiloTermination @ 0x1409B441C (PspNotifyServerSiloTermination.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403A5E60 (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall PspInvokeTerminateCallback(__int64 a1, __int64 a2)
{
  EtwTraceJobServerSiloMonitorCallback(2, a1, (unsigned __int16 *)(a2 + 40), 0);
  (*(void (__fastcall **)(__int64))(a2 + 32))(a1);
  return EtwTraceJobServerSiloMonitorCallback(3, a1, (unsigned __int16 *)(a2 + 40), 0);
}
