/*
 * XREFs of NdisMDeregisterInterrupt @ 0x1C00C7500
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z @ 0x1C00B1844 (-ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z.c)
 */

void __stdcall NdisMDeregisterInterrupt(PNDIS_MINIPORT_INTERRUPT Interrupt)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  struct _KINTERRUPT *InterruptObject; // rax
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+30h] [rbp-18h] BYREF

  Miniport = Interrupt->Miniport;
  Parameters = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xEu,
      (struct _GUID *)&WPP_b57355dc9ebc301c1304e623da4026ea_Traceguids,
      Miniport,
      *(_QWORD *)&Parameters.Version,
      Parameters.ConnectionContext.Generic);
  if ( Interrupt->InterruptObject )
  {
    if ( _InterlockedExchangeAdd(&Miniport->RegisteredInterrupts, 0xFFFFFFFF) == 1 )
      Interrupt->Miniport->Flags |= 0x20u;
    InterruptObject = Interrupt->InterruptObject;
    *(&Parameters.Version + 1) = 0;
    Parameters.ConnectionContext.Generic = InterruptObject;
    Parameters.Version = 1;
    IoDisconnectInterruptEx(&Parameters);
    ndisWaitForDpcCompletion(
      &Interrupt->DpcCount,
      (volatile unsigned __int8 *)&Interrupt->8,
      &Interrupt->DpcsCompletedEvent);
    Interrupt->Miniport->Interrupt = 0LL;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_b57355dc9ebc301c1304e623da4026ea_Traceguids,
      Interrupt->Miniport);
}
