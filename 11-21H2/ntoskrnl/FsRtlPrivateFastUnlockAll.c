/*
 * XREFs of FsRtlPrivateFastUnlockAll @ 0x14021D404
 * Callers:
 *     FsRtlProcessFileLock @ 0x14021D0B0 (FsRtlProcessFileLock.c)
 *     FsRtlFastUnlockAll @ 0x14021D3E0 (FsRtlFastUnlockAll.c)
 *     FsRtlFastUnlockAllByKey @ 0x140541A60 (FsRtlFastUnlockAllByKey.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     RtlRealSuccessor @ 0x14021D710 (RtlRealSuccessor.c)
 *     IoGetRequestorProcess @ 0x14021DC00 (IoGetRequestorProcess.c)
 *     RtlDelete @ 0x14021EBA0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x14021EF80 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14021F280 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x14021F514 (FsRtlSplitLocks.c)
 *     FsRtlCompleteLockIrpReal @ 0x14021F5E4 (FsRtlCompleteLockIrpReal.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlPrivateFastUnlockAll(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        struct _KPROCESS *a3,
        int a4,
        char a5,
        __int64 a6)
{
  __int64 v6; // r13
  _RTL_SPLAY_LINKS *v7; // rdi
  KSPIN_LOCK *v8; // rsi
  KIRQL v9; // al
  __int64 v10; // r8
  RTL_SPLAY_LINKS *v11; // r15
  KIRQL v12; // bp
  unsigned int v13; // ebx
  _RTL_SPLAY_LINKS *i; // rax
  PRTL_SPLAY_LINKS v16; // rax
  RTL_SPLAY_LINKS *v17; // rcx
  _RTL_SPLAY_LINKS *Parent; // r14
  _RTL_SPLAY_LINKS *v19; // rbx
  PRTL_SPLAY_LINKS v20; // r13
  RTL_SPLAY_LINKS *v21; // r10
  RTL_SPLAY_LINKS *v22; // rdx
  PRTL_SPLAY_LINKS v23; // rbx
  _RTL_SPLAY_LINKS *k; // rax
  PRTL_SPLAY_LINKS v25; // rdi
  void *v26; // rdi
  void **v27; // r15
  _RTL_SPLAY_LINKS *v28; // rax
  _RTL_SPLAY_LINKS *v29; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  PVOID v39; // rbx
  _RTL_SPLAY_LINKS *j; // rax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  KIRQL v45; // al
  _RTL_SPLAY_LINKS *m; // rax
  __int64 v47; // r14
  __int64 v48; // r13
  KIRQL v49; // dl
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r8
  _DWORD *v52; // r10
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  int v57; // eax
  int v58; // [rsp+30h] [rbp-88h] BYREF
  __int64 v59; // [rsp+38h] [rbp-80h]
  RTL_SPLAY_LINKS *v60; // [rsp+40h] [rbp-78h]
  _RTL_SPLAY_LINKS *v61; // [rsp+48h] [rbp-70h] BYREF
  _RTL_SPLAY_LINKS *v62; // [rsp+50h] [rbp-68h] BYREF
  PVOID Entry; // [rsp+58h] [rbp-60h]
  RTL_SPLAY_LINKS *v64; // [rsp+60h] [rbp-58h]
  char v65; // [rsp+C0h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 24);
  v7 = 0LL;
  v58 = 0;
  Entry = 0LL;
  v59 = v6;
  if ( !v6 )
    return 3221225598LL;
  v8 = (KSPIN_LOCK *)(v6 + 24);
  a2[5].Parent = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 24));
  v11 = *(RTL_SPLAY_LINKS **)(v6 + 32);
  v12 = v9;
  if ( !v11 )
  {
    if ( *(_QWORD *)(v6 + 40) )
      goto LABEL_22;
    KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 24));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v34 = (v33 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v33;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    v13 = -1073741698;
    goto LABEL_6;
  }
  for ( i = v11->LeftChild; i; i = i->LeftChild )
    v11 = i;
  v65 = 0;
  do
  {
    v16 = RtlRealSuccessor(v11);
    v17 = v11 - 1;
    v62 = 0LL;
    Parent = v11[-1].Parent;
    v19 = 0LL;
    v61 = 0LL;
    v20 = v16;
    v60 = v11 - 1;
    v21 = 0LL;
    v22 = v11 - 1;
    if ( !Parent )
    {
      v7 = 0LL;
      goto LABEL_19;
    }
    while ( 1 )
    {
      Entry = Parent;
      if ( Parent[1].LeftChild == a2
        && (struct _KPROCESS *)Parent[1].RightChild == a3
        && (!a5 || HIDWORD(Parent[1].Parent) == a4) )
      {
        break;
      }
      v22 = Parent;
      v60 = Parent;
LABEL_13:
      if ( !v21 )
      {
        if ( Parent[2].Parent > v19 )
          v19 = Parent[2].Parent;
        v61 = v19;
      }
      Parent = v22->Parent;
      if ( !v22->Parent )
        goto LABEL_18;
    }
    v28 = Parent[2].Parent;
    if ( !v21 )
      v21 = v22;
    v64 = v21;
    if ( v28 > v7 )
      v7 = v28;
    v29 = v17[2].Parent;
    v62 = v7;
    if ( v22->Parent == v29 )
      v17[2].Parent = v22;
    v22->Parent = Parent->Parent;
    if ( !*(_QWORD *)(v59 + 16) )
    {
      ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
      v22 = v60;
      v17 = v11 - 1;
      v21 = v64;
      goto LABEL_13;
    }
    v65 = 1;
LABEL_18:
    v7 = 0LL;
    if ( v21 )
    {
      if ( v17->Parent )
      {
        FsRtlSplitLocks(v17, v21, &v62, &v61);
      }
      else
      {
        v8[1] = (KSPIN_LOCK)RtlDelete(v11);
        ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v11[-1]);
      }
    }
LABEL_19:
    if ( v65 )
    {
      KxReleaseSpinLock(v8);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && v12 <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = v36->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << (v12 + 1));
            v34 = (v38 & v37[5]) == 0;
            v37[5] &= v38;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
      }
      __writecr8(v12);
      v39 = Entry;
      (*(void (__fastcall **)(__int64, char *))(v59 + 16))(a6, (char *)Entry + 8);
      v12 = KeAcquireSpinLockRaiseToDpc(v8);
      ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v39);
      v20 = (PRTL_SPLAY_LINKS)v8[1];
      v65 = 0;
      if ( v20 )
      {
        for ( j = v20->LeftChild; j; j = j->LeftChild )
          v20 = j;
      }
    }
    v11 = v20;
  }
  while ( v20 );
  v6 = v59;
LABEL_22:
  v23 = (PRTL_SPLAY_LINKS)v8[2];
  if ( v23 )
  {
    for ( k = v23->LeftChild; k; k = k->LeftChild )
      v23 = k;
    do
    {
      v25 = RtlRealSuccessor(v23);
      if ( v23[2].Parent == a2
        && (struct _KPROCESS *)v23[2].LeftChild == a3
        && (!a5 || HIDWORD(v23[1].RightChild) == a4) )
      {
        v8[2] = (KSPIN_LOCK)RtlDelete(v23);
        if ( *(_QWORD *)(v6 + 16) )
        {
          KxReleaseSpinLock(v8);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v41 = KeGetCurrentIrql();
              if ( v41 <= 0xFu && v12 <= 0xFu && v41 >= 2u )
              {
                v42 = KeGetCurrentPrcb();
                v43 = v42->SchedulerAssist;
                v44 = ~(unsigned __int16)(-1LL << (v12 + 1));
                v34 = (v44 & v43[5]) == 0;
                v43[5] &= v44;
                if ( v34 )
                  KiRemoveSystemWorkPriorityKick(v42);
              }
            }
          }
          __writecr8(v12);
          (*(void (__fastcall **)(__int64, PRTL_SPLAY_LINKS))(v6 + 16))(a6, v23 + 1);
          v45 = KeAcquireSpinLockRaiseToDpc(v8);
          v25 = (PRTL_SPLAY_LINKS)v8[2];
          v12 = v45;
          if ( v25 )
          {
            for ( m = v25->LeftChild; m; m = m->LeftChild )
              v25 = m;
          }
        }
        ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v23);
      }
      v23 = v25;
    }
    while ( v25 );
  }
  v26 = (void *)v8[3];
  v27 = (void **)(v8 + 3);
  if ( v26 )
  {
    do
    {
      v47 = *((_QWORD *)v26 + 3);
      v48 = *(_QWORD *)(v47 + 184);
      if ( a2 != *(_RTL_SPLAY_LINKS **)(v48 + 48)
        || a3 != IoGetRequestorProcess(*((PIRP *)v26 + 3))
        || a5 && a4 != *(_DWORD *)(v48 + 16) )
      {
        goto LABEL_103;
      }
      *(_BYTE *)(v47 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v47 + 104), 0LL);
      v49 = *(_BYTE *)(v47 + 69);
      if ( *(_BYTE *)(v47 + 68) )
        v47 = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v49);
      if ( v47 )
      {
        *(_QWORD *)(v47 + 56) = 0LL;
        *v27 = *(void **)v26;
        if ( v26 == (void *)v8[4] )
          v8[4] = (KSPIN_LOCK)v27;
        KxReleaseSpinLock(v8);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v50 = KeGetCurrentIrql();
            if ( v50 <= 0xFu && v12 <= 0xFu && v50 >= 2u )
            {
              v51 = KeGetCurrentPrcb();
              v52 = v51->SchedulerAssist;
              v53 = ~(unsigned __int16)(-1LL << (v12 + 1));
              v34 = (v53 & v52[5]) == 0;
              v52[5] &= v53;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
        }
        __writecr8(v12);
        FsRtlCompleteLockIrpReal(*(_QWORD *)(v59 + 8), *((_QWORD *)v26 + 2), v47, 3221225598LL, &v58, 0LL);
        v12 = KeAcquireSpinLockRaiseToDpc(v8);
        v27 = (void **)(v8 + 3);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v26);
      }
      else
      {
LABEL_103:
        v27 = (void **)v26;
      }
      v26 = *v27;
    }
    while ( *v27 );
  }
  LOBYTE(v10) = v12;
  FsRtlPrivateCheckWaitingLocks(v59, v8, v10);
  FsRtlPrivateResetLowestLockOffset(v59);
  KxReleaseSpinLock(v8);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v54 = KeGetCurrentIrql();
      if ( v54 <= 0xFu && v12 <= 0xFu && v54 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = v55->SchedulerAssist;
        v57 = ~(unsigned __int16)(-1LL << (v12 + 1));
        v34 = (v57 & v56[5]) == 0;
        v56[5] &= v57;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
  }
  v13 = 0;
LABEL_6:
  __writecr8(v12);
  return v13;
}
