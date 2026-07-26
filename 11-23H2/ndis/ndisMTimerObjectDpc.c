/*
 * XREFs of ndisMTimerObjectDpc @ 0x1C0040A00
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001F354 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00228F4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00B1FB0 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B2098 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMTimerObjectDpc(
        struct _KDPC *Dpc,
        _NDIS_MINIPORT_TIMER **DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  __int64 Clock; // r15
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  char v8; // r14
  $8D9684D6D9B0041687A8861C64350A2D *v9; // rdx
  _NDIS_MINIPORT_TIMER *TimerQueue; // rcx
  __int64 v11; // rax
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v4 = (struct _NDIS_MINIPORT_BLOCK *)DeferredContext[3];
  Clock = 0LL;
  if ( v4->Header.Type == 17 )
  {
    DriverHandle = v4->DriverHandle;
    v12 = 0;
    if ( ndisReferenceRefEx(&DriverHandle->Ref.SpinLock, 0xAu, (enum _NDIS_REFERENCE_STATUS *)&v12) )
    {
      if ( HIBYTE(dword_1C00F76B0) )
      {
        v8 = 1;
        ndisTraceDpcStart(v4, 2u);
        Clock = WmiGetClock(0LL, 0LL);
      }
      else
      {
        v8 = 0;
      }
      if ( (DriverHandle->Flags & 2) != 0 )
      {
        KeAcquireSpinLockAtDpcLevel(&v4->TimerQueueLock);
        v9 = &v4->560;
        TimerQueue = v4->TimerQueue;
        if ( TimerQueue )
        {
          while ( TimerQueue != (_NDIS_MINIPORT_TIMER *)DeferredContext )
          {
            v9 = ($8D9684D6D9B0041687A8861C64350A2D *)TimerQueue;
            TimerQueue = *(_NDIS_MINIPORT_TIMER **)&TimerQueue->Timer.Header.Lock;
            if ( !TimerQueue )
              goto LABEL_13;
          }
          if ( !*((_DWORD *)DeferredContext + 23) )
            v9->TimerQueue = *DeferredContext;
        }
LABEL_13:
        KeReleaseSpinLockFromDpcLevel(&v4->TimerQueueLock);
      }
      if ( (v4->PnPFlags & 0x1000000) == 0 )
        ((void (__fastcall *)(_QWORD, _NDIS_MINIPORT_TIMER *, _QWORD, _QWORD))DeferredContext[21])(
          0LL,
          DeferredContext[23],
          0LL,
          0LL);
      if ( v8 )
      {
        v11 = WmiGetClock(0LL, 0LL);
        ndisTraceDpcEnd(v4, 2u, v11 - Clock);
      }
      ndisDereferenceDriver(DriverHandle, 0, 0xAu);
    }
  }
}
