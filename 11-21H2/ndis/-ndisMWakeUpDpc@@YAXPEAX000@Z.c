/*
 * XREFs of ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x1C0057B80
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00260F4 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00674F8 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C0067C30 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AC580 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AC668 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMWakeUpDpc(
        PVOID SystemSpecific1,
        struct _NDIS_MINIPORT_BLOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  unsigned __int8 v5; // di
  __int64 Clock; // r14
  char v7; // bp
  int Flags; // r8d
  int v9; // edx
  unsigned int WSyncFlags; // eax
  unsigned __int16 CFHangXTicks; // cx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v13; // rdx
  char v14; // al
  __int64 v15; // rax

  v5 = 0;
  Clock = 0LL;
  if ( HIBYTE(dword_1C00EE5E8) )
  {
    v7 = 1;
    ndisTraceDpcStart(FunctionContext, 4u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
  Flags = FunctionContext->Flags;
  FunctionContext->MiniportThread = KeGetCurrentThread();
  if ( Flags >= 0 && (FunctionContext->PnPFlags & 0x20080000) == 0 && !FunctionContext->LockAcquired )
  {
    FunctionContext->LockAcquired = 1;
    FunctionContext->LockThread = KeGetCurrentThread();
    if ( (Flags & 0x300000) != 0 )
      goto LABEL_33;
    v9 = Flags;
    if ( FunctionContext->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler )
    {
      FunctionContext->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
      v5 = FunctionContext->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler(FunctionContext->MiniportAdapterContext);
      KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
      Flags = FunctionContext->Flags;
      v9 = Flags;
      FunctionContext->MiniportThread = KeGetCurrentThread();
    }
    if ( (v9 & 0x1000000) != 0 )
      goto LABEL_33;
    if ( v5 )
    {
      ++FunctionContext->MiniportResetCount;
LABEL_28:
      if ( (Flags & 0x1000000) == 0
        && FunctionContext->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler )
      {
        ndisMQueueWorkItem(FunctionContext, NdisWorkItemResetRequested, 0LL);
      }
      goto LABEL_32;
    }
    if ( (v9 & 0x1000) == 0 )
    {
      WSyncFlags = FunctionContext->WSyncFlags;
      if ( (WSyncFlags & 1) != 0 )
      {
        if ( (WSyncFlags & 2) != 0 )
        {
          if ( FunctionContext->PendingOidRequest )
          {
LABEL_27:
            ++FunctionContext->InternalResetCount;
            goto LABEL_28;
          }
        }
        else
        {
          CFHangXTicks = FunctionContext->CFHangXTicks;
          if ( CFHangXTicks )
            FunctionContext->CFHangXTicks = CFHangXTicks - 1;
          else
            FunctionContext->WSyncFlags = WSyncFlags | 2;
        }
      }
    }
    if ( (v9 & 0x800) != 0 )
      goto LABEL_32;
    Flink = FunctionContext->PacketList.Flink;
    v13 = Flink - 4;
    if ( Flink == &FunctionContext->PacketList )
      v13 = 0LL;
    if ( !v13 )
      goto LABEL_32;
    v14 = BYTE1(v13[2].Blink);
    if ( (v14 & 0x10) == 0 )
      goto LABEL_32;
    if ( (v14 & 1) == 0 )
    {
      BYTE1(v13[2].Blink) = v14 | 1;
LABEL_32:
      ndisMProcessDeferred(FunctionContext);
LABEL_33:
      FunctionContext->LockThread = 0LL;
      FunctionContext->LockAcquired = 0;
      goto LABEL_34;
    }
    goto LABEL_27;
  }
LABEL_34:
  KeSetEvent(&FunctionContext->CFHCompletedEvent, 0, 0);
  if ( (FunctionContext->Flags & 0x80000000) == 0 && (FunctionContext->PnPFlags & 0x20080000) == 0 )
    ndisSetWakeUpTimer(FunctionContext);
  if ( v7 )
  {
    v15 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(FunctionContext, 4u, v15 - Clock);
  }
  FunctionContext->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
}
