/*
 * XREFs of ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C003F3E0
 * Callers:
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C003F7E2 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00ADF08 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0003B00 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00130F4 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 */

void __fastcall ndisReplaySendNbls(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_BUFFER_LIST *a2, unsigned __int8 a3)
{
  unsigned int v3; // ebx
  struct _NET_BUFFER_LIST *v4; // rdi
  _SLIST_HEADER *v5; // r12
  struct _NET_BUFFER_LIST *Alignment; // rsi
  unsigned int Scratch; // r14d
  struct _NET_BUFFER_LIST *v10; // rax

  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  Alignment = a2;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, (unsigned __int64)a1->NblTracker, 146LL, 0);
  while ( Alignment )
  {
    Scratch = (unsigned int)Alignment->Scratch;
    if ( v4 && Scratch != v3 )
    {
      v5->Alignment = 0LL;
      ndisMSendNBLToMiniportInternal(a1, v4, v3, 0, a3);
      v4 = 0LL;
    }
    v10 = Alignment;
    v5 = (_SLIST_HEADER *)Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    if ( v4 )
    {
      v10 = v4;
      Scratch = v3;
    }
    v3 = Scratch;
    v4 = v10;
  }
  ndisMSendNBLToMiniportInternal(a1, v4, v3, 0, a3);
}
