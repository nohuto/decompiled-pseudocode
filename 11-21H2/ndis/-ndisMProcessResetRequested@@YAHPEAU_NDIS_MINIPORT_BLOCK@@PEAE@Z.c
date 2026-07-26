/*
 * XREFs of ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00678D0
 * Callers:
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00674F8 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     NdisMIndicateStatusEx @ 0x1C0019EA0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0069538 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall ndisMProcessResetRequested(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 *a2)
{
  _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned int v5; // edi
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-98h] BYREF

  Next = a1->WorkQueue[3].Next;
  if ( Next )
  {
    a1->WorkQueue[3] = (_SINGLE_LIST_ENTRY)Next->Next;
    LODWORD(Next[1].Next) = 4;
    Next->Next = (_SINGLE_LIST_ENTRY *)a1->WorkQueue[4];
    a1->WorkQueue[4].Next = Next;
  }
  if ( (a1->PnPFlags & 0x80000) != 0 )
  {
    a1->Flags &= ~0x100000u;
    return (unsigned int)-2147418111;
  }
  else
  {
    a1->Flags = a1->Flags & 0xFFCFFFFF | 0x200000;
    ndisMSwapOpenHandlers(a1, 1u);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.StatusBuffer = 0LL;
    StatusIndication.StatusBufferSize = 0;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807364;
    NdisMIndicateStatusEx(a1, &StatusIndication);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x11u,
        0x46u,
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
        a1);
    if ( (byte_1C00EE581 & 4) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer();
    v5 = ((__int64 (__fastcall *)(unsigned __int8 *, void *))a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler)(
           a2,
           a1->MiniportAdapterContext);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
  }
  return v5;
}
