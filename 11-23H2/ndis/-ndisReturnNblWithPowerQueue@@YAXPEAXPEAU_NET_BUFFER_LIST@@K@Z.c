/*
 * XREFs of ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C003DF40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013284 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C003EFAE (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003F880 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 */

void __fastcall ndisReturnNblWithPowerQueue(_QWORD *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  char v3; // r13
  unsigned int v4; // r14d
  struct _NET_BUFFER_LIST *i; // rax
  KIRQL v9; // bp
  KSPIN_LOCK *v10; // rcx
  char v11; // r15
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v13; // rcx
  KSPIN_LOCK *v14; // rcx
  KSPIN_LOCK *v15; // rcx
  KSPIN_LOCK *v16; // rcx

  v3 = 0;
  v4 = 0;
  if ( !a1[556] )
    goto LABEL_6;
  for ( i = a2; i; ++v4 )
    i = (struct _NET_BUFFER_LIST *)i->Link.Alignment;
  if ( (unsigned __int8)ndisSetBusyAsync(a1, v4, 54LL, a2, 0) )
  {
    v3 = 1;
LABEL_6:
    if ( *((int *)a1 + 468) < 0 && ndisNoPauseOnSuspend )
    {
      v9 = 0;
      v10 = a1 + 484;
      if ( (a3 & 1) != 0 )
      {
        KeAcquireSpinLockAtDpcLevel(v10);
        v11 = 1;
      }
      else
      {
        v11 = 0;
        v9 = KeAcquireSpinLockRaiseToDpc(v10);
      }
      if ( (unsigned int)(*((_DWORD *)a1 + 970) - 2) > 2 || *((_BYTE *)a1 + 3900) )
      {
        ++*((_DWORD *)a1 + 974);
        v15 = a1 + 484;
        if ( v11 )
          KeReleaseSpinLockFromDpcLevel(v15);
        else
          KeReleaseSpinLock(v15, v9);
        (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(a1[470] + 192LL))(a1[3], a2, a3);
        v16 = a1 + 484;
        if ( v11 )
          KeAcquireSpinLockAtDpcLevel(v16);
        else
          v9 = KeAcquireSpinLockRaiseToDpc(v16);
        --*((_DWORD *)a1 + 974);
      }
      else
      {
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(a2, 0LL, a1[488], 1LL, 1u);
        Alignment = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
        v13 = a2;
        while ( Alignment )
        {
          v13 = Alignment;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        v13->Link.Alignment = a1[486];
        a1[486] = a2;
      }
      v14 = a1 + 484;
      if ( v11 )
        KeReleaseSpinLockFromDpcLevel(v14);
      else
        KeReleaseSpinLock(v14, v9);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(a1[470] + 192LL))(a1[3], a2, a3);
    }
    if ( v3 )
      ndisClearBusy(a1, v4, 54LL);
  }
}
