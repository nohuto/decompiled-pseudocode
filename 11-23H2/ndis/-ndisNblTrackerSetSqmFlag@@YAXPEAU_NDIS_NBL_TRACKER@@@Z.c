/*
 * XREFs of ?ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0072178
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0006640 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001E0DC (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 */

void __fastcall ndisNblTrackerSetSqmFlag(struct _NDIS_NBL_TRACKER *a1)
{
  int v1; // edx
  int v2; // edx
  int v3; // edx
  int v4; // edx
  __int64 v5; // rbx
  KIRQL v6; // al
  KSPIN_LOCK *p_Lock; // rcx
  KIRQL v8; // dl
  struct _NDIS_FILTER_BLOCK *Context; // rbx
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((__int16 *)a1 + 8);
  NewIrql = 0;
  if ( !v1 )
    goto LABEL_6;
  v2 = v1 - 1;
  if ( !v2 )
  {
    Context = (struct _NDIS_FILTER_BLOCK *)a1->Context;
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(Context, &NewIrql);
    Context->Flags |= 0x100000u;
    p_Lock = &Context->Lock;
    Context->LockThread = 0LL;
    v8 = NewIrql;
    goto LABEL_10;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v5 = *((_QWORD *)a1->Context + 3);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 32));
    *(_DWORD *)(v5 + 64) |= 2u;
    p_Lock = (KSPIN_LOCK *)(v5 + 32);
    v8 = v6;
LABEL_10:
    KeReleaseSpinLock(p_Lock, v8);
    return;
  }
  v4 = v3 - 1;
  if ( !v4 || (unsigned int)(v4 - 1) <= 1 )
LABEL_6:
    _InterlockedOr((volatile signed __int32 *)a1->Context + 1106, 1u);
}
