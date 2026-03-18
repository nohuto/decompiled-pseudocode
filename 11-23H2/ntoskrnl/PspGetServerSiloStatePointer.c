/*
 * XREFs of PspGetServerSiloStatePointer @ 0x1405A3924
 * Callers:
 *     PsStartSiloMonitor @ 0x14084A100 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1409B4010 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x1409B4268 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x1409B4314 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1409B441C (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1488) + 1304LL;
}
