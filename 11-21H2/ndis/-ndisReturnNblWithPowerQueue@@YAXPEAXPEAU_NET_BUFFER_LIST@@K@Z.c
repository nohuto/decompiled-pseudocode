/*
 * XREFs of ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0001BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00037F0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A6768 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A8234 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 */

void __fastcall ndisReturnNblWithPowerQueue(char *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  char v3; // r13
  unsigned int v4; // r15d
  KIRQL v8; // bp
  KSPIN_LOCK *v9; // rcx
  char v10; // r14
  KSPIN_LOCK *v11; // rcx
  KSPIN_LOCK *v12; // rcx
  KSPIN_LOCK *v13; // rcx
  struct _NET_BUFFER_LIST *i; // rax
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v16; // rcx

  v3 = 0;
  v4 = 0;
  if ( !*((_QWORD *)a1 + 556) )
    goto LABEL_2;
  for ( i = a2; i; ++v4 )
    i = (struct _NET_BUFFER_LIST *)i->Link.Alignment;
  if ( (unsigned __int8)ndisSetBusyAsync(a1, v4, 54LL, a2, 0) )
  {
    v3 = 1;
LABEL_2:
    if ( *((int *)a1 + 468) < 0 && ndisNoPauseOnSuspend )
    {
      v8 = 0;
      v9 = (KSPIN_LOCK *)(a1 + 3872);
      if ( (a3 & 1) != 0 )
      {
        v10 = 1;
        KeAcquireSpinLockAtDpcLevel(v9);
      }
      else
      {
        v10 = 0;
        v8 = KeAcquireSpinLockRaiseToDpc(v9);
      }
      if ( (unsigned int)(*((_DWORD *)a1 + 970) - 2) > 2 || a1[3900] )
      {
        ++*((_DWORD *)a1 + 974);
        v11 = (KSPIN_LOCK *)(a1 + 3872);
        if ( v10 )
          KeReleaseSpinLockFromDpcLevel(v11);
        else
          KeReleaseSpinLock(v11, v8);
        (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(*((_QWORD *)a1 + 470) + 192LL))(
          *((_QWORD *)a1 + 3),
          a2,
          a3);
        v12 = (KSPIN_LOCK *)(a1 + 3872);
        if ( v10 )
          KeAcquireSpinLockAtDpcLevel(v12);
        else
          v8 = KeAcquireSpinLockRaiseToDpc(v12);
        --*((_DWORD *)a1 + 974);
      }
      else
      {
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(
            a2,
            0LL,
            *((struct NDIS_NBL_TRACKER_HANDLE__ **)a1 + 488),
            (enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT)1,
            1u);
        Alignment = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
        v16 = a2;
        while ( Alignment )
        {
          v16 = Alignment;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        v16->Link.Alignment = *((_QWORD *)a1 + 486);
        *((_QWORD *)a1 + 486) = a2;
      }
      v13 = (KSPIN_LOCK *)(a1 + 3872);
      if ( v10 )
        KeReleaseSpinLockFromDpcLevel(v13);
      else
        KeReleaseSpinLock(v13, v8);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(*((_QWORD *)a1 + 470) + 192LL))(
        *((_QWORD *)a1 + 3),
        a2,
        a3);
    }
    if ( v3 )
      ndisClearBusy(a1, v4, 54LL);
  }
}
