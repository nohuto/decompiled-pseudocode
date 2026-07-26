/*
 * XREFs of NdisMInitializeTimer @ 0x1C00C4450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMInitializeTimer(
        PNDIS_MINIPORT_TIMER Timer,
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_TIMER_FUNCTION TimerFunction,
        PVOID FunctionContext)
{
  void (__fastcall *v8)(struct _KDPC *, char *, void *, void *); // rdx

  KeInitializeTimer(&Timer->Timer);
  Timer->Miniport = (_NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
  Timer->MiniportTimerFunction = (void (__fastcall *)(void *, void *, void *, void *))TimerFunction;
  v8 = ndisMTimerDpcX;
  Timer->MiniportTimerContext = FunctionContext;
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x40000) == 0 )
    v8 = (void (__fastcall *)(struct _KDPC *, char *, void *, void *))ndisMTimerDpc;
  KeInitializeDpc(&Timer->Dpc, (PKDEFERRED_ROUTINE)v8, Timer);
}
