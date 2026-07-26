/*
 * XREFs of NdisSetTimerEx @ 0x1C00C36D0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMSetTimer @ 0x1C00C45D0 (NdisMSetTimer.c)
 */

void __stdcall NdisSetTimerEx(PNDIS_TIMER NdisTimer, UINT MillisecondsToDelay, PVOID FunctionContext)
{
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rax

  DeferredRoutine = NdisTimer->Dpc.DeferredRoutine;
  NdisTimer->Dpc.DeferredContext = FunctionContext;
  if ( (char *)DeferredRoutine == (char *)ndisMTimerDpc || (char *)DeferredRoutine == (char *)ndisMTimerDpcX )
    NdisMSetTimer((char)NdisTimer);
  else
    KeSetTimer(&NdisTimer->Timer, (LARGE_INTEGER)(-10000LL * (int)MillisecondsToDelay), &NdisTimer->Dpc);
}
