/*
 * XREFs of PspGetServerSiloStatePointer @ 0x1405E0084
 * Callers:
 *     PsStartSiloMonitor @ 0x140852D60 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1409B1B50 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x1409B1DA0 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x1409B1E4C (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1409B1F54 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1464) + 1304LL;
}
