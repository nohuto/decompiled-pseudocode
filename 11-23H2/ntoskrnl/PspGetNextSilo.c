/*
 * XREFs of PspGetNextSilo @ 0x1406A31F4
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14020C9A0 (EtwpAdjustTraceBuffers.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1407D514C (EtwpUpdateGlobalGroupMasks.c)
 *     PsStartSiloMonitor @ 0x14084A400 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x1409AC790 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x1409AC990 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x1409B3744 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x1409B4210 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020C020 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x1406A3338 (PspGetNextJob.c)
 */

void *__fastcall PspGetNextSilo(void *a1, char a2)
{
  __int64 NextJob; // rax
  void *v4; // r8

  while ( 1 )
  {
    NextJob = PspGetNextJob(a1);
    v4 = (void *)NextJob;
    if ( !NextJob )
      return 0LL;
    if ( (*(_DWORD *)(NextJob + 1536) & 0x40000000) != 0 && (!a2 || PsIsServerSilo(NextJob)) )
      break;
    a1 = v4;
  }
  return v4;
}
