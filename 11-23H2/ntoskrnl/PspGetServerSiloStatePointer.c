/*
 * XREFs of PspGetServerSiloStatePointer @ 0x1405A3E14
 * Callers:
 *     PsStartSiloMonitor @ 0x14084A400 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1409B4210 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x1409B4468 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x1409B4514 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1409B461C (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1488) + 1304LL;
}
