/*
 * XREFs of ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D7FC
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009560 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006C894 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMResetComplete @ 0x1C006F9A0 (NdisMResetComplete.c)
 * Callees:
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00144E4 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C001A410 (NdisMIndicateStatusEx.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F6C4 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

void __fastcall ndisMResetCompleteStage2(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_OPEN_BLOCK *ResetOpen; // rdi
  _SINGLE_LIST_ENTRY *Next; // rcx
  struct _KEVENT *ResetCompletedEvent; // rcx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+20h] [rbp-98h] BYREF

  ResetOpen = 0LL;
  if ( (a1->Flags & 0x40000) != 0 )
  {
    ResetOpen = a1->ResetOpen;
    a1->ResetOpen = 0LL;
  }
  else
  {
    Next = a1->WorkQueue[4].Next;
    if ( Next )
    {
      a1->WorkQueue[4] = (_SINGLE_LIST_ENTRY)Next->Next;
      ResetOpen = (_NDIS_OPEN_BLOCK *)Next[2].Next;
      Next->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[3];
      a1->SingleWorkItems[3].Next = Next;
    }
  }
  a1->Flags &= ~0x200000u;
  ndisMRestoreOpenHandlers(a1, 1u);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.StatusBuffer = &a1->ResetStatus;
  StatusIndication.SourceHandle = a1;
  StatusIndication.StatusCode = 1073807365;
  StatusIndication.StatusBufferSize = 4;
  NdisMIndicateStatusEx(a1, &StatusIndication);
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( ResetOpen )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    ResetOpen->ResetCompleteHandler(ResetOpen->ProtocolBindingContext, a1->ResetStatus);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    ndisMDereferenceOpenLocked((__int64)ResetOpen, 8u);
  }
  ResetCompletedEvent = a1->ResetCompletedEvent;
  if ( ResetCompletedEvent )
    KeSetEvent(ResetCompletedEvent, 0, 0);
}
