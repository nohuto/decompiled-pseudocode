/*
 * XREFs of ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00BFAE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00674F8 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AC580 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AC668 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     NdisMSetTimer @ 0x1C00BF990 (NdisMSetTimer.c)
 */

void __fastcall ndisMTimerDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  __int64 Clock; // r15
  char v7; // r14
  void **i; // rcx
  char *v9; // rax
  void (__fastcall *v10)(_QWORD, _QWORD, _QWORD, _QWORD); // rbx
  __int64 v11; // rax

  v4 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)DeferredContext + 18);
  Clock = 0LL;
  if ( HIBYTE(dword_1C00EE5E8) )
  {
    v7 = 1;
    ndisTraceDpcStart(v4, 2u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v7 = 0;
  }
  while ( 1 )
  {
    KeAcquireSpinLockAtDpcLevel(&v4->Lock);
    v4->MiniportThread = KeGetCurrentThread();
    if ( !v4->LockAcquired )
      break;
    v4->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&v4->Lock);
    KeStallExecutionProcessor(1u);
  }
  v4->LockAcquired = 1;
  v4->LockThread = KeGetCurrentThread();
  if ( (v4->DriverHandle->Flags & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel(&v4->TimerQueueLock);
    for ( i = (void **)&v4->TimerQueue; ; i = (void **)(v9 + 152) )
    {
      v9 = (char *)*i;
      if ( !*i )
        break;
      if ( v9 == DeferredContext )
      {
        if ( !*((_DWORD *)DeferredContext + 15) )
          *i = (void *)*((_QWORD *)DeferredContext + 19);
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&v4->TimerQueueLock);
  }
  if ( (v4->Flags & 2) != 0 )
  {
    NdisMSetTimer((__int64)DeferredContext, 10);
  }
  else if ( (v4->PnPFlags & 0x1000000) == 0 )
  {
    v10 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)DeferredContext + 16);
    v4->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&v4->Lock);
    v10(0LL, *((_QWORD *)DeferredContext + 17), 0LL, 0LL);
    KeAcquireSpinLockAtDpcLevel(&v4->Lock);
    v4->MiniportThread = KeGetCurrentThread();
    ndisMProcessDeferred(v4);
  }
  v4->LockAcquired = 0;
  v4->LockThread = 0LL;
  v4->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&v4->Lock);
  if ( v7 )
  {
    v11 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v4, 2u, v11 - Clock);
  }
}
