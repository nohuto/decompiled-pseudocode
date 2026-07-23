/*
 * XREFs of PsGetServerSiloState @ 0x1403099B4
 * Callers:
 *     SepQueueWorkItem @ 0x140309840 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x1409ACC98 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ACCF0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspCatchCriticalBreak @ 0x1409B3C20 (PspCatchCriticalBreak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 1488) + 1304LL);
  else
    return 1LL;
}
