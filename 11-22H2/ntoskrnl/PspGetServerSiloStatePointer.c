/*
 * XREFs of PspGetServerSiloStatePointer @ 0x1405A39B4
 * Callers:
 *     PsStartSiloMonitor @ 0x14084B360 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1409B40C0 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x1409B4318 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x1409B43C4 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1409B44CC (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1488) + 1304LL;
}
