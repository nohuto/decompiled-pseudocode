/*
 * XREFs of CcNotifyOfMappedWrite @ 0x140298124
 * Callers:
 *     MiGatherMappedPages @ 0x140297C04 (MiGatherMappedPages.c)
 * Callees:
 *     CcCanIWriteStreamEx @ 0x14020FCA0 (CcCanIWriteStreamEx.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14023CB90 (KeReleaseInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x1402998D8 (CcScheduleLazyWriteScan.c)
 *     CcPostWorkQueue @ 0x14029AE94 (CcPostWorkQueue.c)
 *     CcGetNodeForLazyWrite @ 0x14029AEC0 (CcGetNodeForLazyWrite.c)
 *     CcAllocateWorkQueueEntry @ 0x14029B550 (CcAllocateWorkQueueEntry.c)
 *     CcDecrementOpenCount @ 0x14029CA00 (CcDecrementOpenCount.c)
 *     CcAcquireByteRangeForWrite @ 0x14029CF10 (CcAcquireByteRangeForWrite.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, signed __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  _DWORD *v6; // r14
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r10
  _BYTE *v10; // rax
  char v11; // r8
  _DWORD *v12; // r13
  unsigned __int8 v13; // r11
  unsigned int v14; // r15d
  unsigned __int8 v15; // r11
  __int64 v16; // r8
  _DWORD *v17; // rdx
  unsigned __int64 v18; // rbx
  int v20; // eax
  unsigned __int8 v21; // r11
  int v22; // eax
  KSPIN_LOCK *v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // r13
  unsigned int v28; // ecx
  bool v29; // zf
  unsigned __int64 OldIrql; // r14
  signed __int64 v31; // rax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v47; // eax
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r10
  _DWORD *v50; // r9
  int v51; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r9
  _DWORD *v54; // r8
  int v55; // eax
  struct _KPRCB *v56; // rcx
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // edx
  __int64 v61; // [rsp+50h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE v62; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v63; // [rsp+70h] [rbp-39h]
  __int64 v64; // [rsp+78h] [rbp-31h]
  __int64 v65; // [rsp+80h] [rbp-29h]
  PKSPIN_LOCK SpinLock; // [rsp+88h] [rbp-21h]
  ULONG_PTR v67; // [rsp+90h] [rbp-19h] BYREF
  _BYTE *v68; // [rsp+98h] [rbp-11h]
  __int64 v69; // [rsp+A0h] [rbp-9h] BYREF
  ULONG_PTR i; // [rsp+A8h] [rbp-1h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v72[7]; // [rsp+C8h] [rbp+1Fh] BYREF
  unsigned __int8 v73; // [rsp+110h] [rbp+67h]
  unsigned __int8 v74; // [rsp+110h] [rbp+67h]
  unsigned __int8 v75; // [rsp+110h] [rbp+67h]
  unsigned int v77; // [rsp+128h] [rbp+7Fh] BYREF

  v69 = 0LL;
  v67 = 0LL;
  v72[0] = 0LL;
  v61 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v62, 0, sizeof(v62));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 || (v6 = (_DWORD *)(v5 + 152), (*(_DWORD *)(v5 + 152) & 0x100) != 0) )
  {
    v14 = 1;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v47 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v29 = (v47 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v47;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    v6 = (_DWORD *)(v5 + 152);
    v12 = (_DWORD *)(v5 + 544);
    goto LABEL_16;
  }
  v7 = 0LL;
  v61 = *(_QWORD *)(v5 + 536);
  if ( CcEnablePerVolumeLazyWriter )
    v7 = *(_QWORD *)(v5 + 600);
  v64 = v7;
  v65 = CcGetNodeForLazyWrite(v5);
  v10 = (_BYTE *)(v9 + 1172);
  if ( !v11 )
    v10 = (_BYTE *)(v8 + 1292);
  v68 = v10;
  SpinLock = (PKSPIN_LOCK)(v8 + 768);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 768), &v62);
  ++*(_DWORD *)(v5 + 4);
  v12 = (_DWORD *)(v5 + 544);
  ++*(_DWORD *)(v5 + 544);
  v63 = (_DWORD *)(v5 + 4);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v62);
  v13 = v62.OldIrql;
  v14 = 2;
  v73 = v62.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v32 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v32 <= 0xFu && v62.OldIrql <= 0xFu && v32 >= 2u )
    {
      v33 = KeGetCurrentPrcb();
      v34 = v33->SchedulerAssist;
      v35 = ~(unsigned __int16)(-1LL << (v62.OldIrql + 1));
      v29 = (v35 & v34[5]) == 0;
      v34[5] &= v35;
      if ( v29 )
      {
        KiRemoveSystemWorkPriorityKick(v33);
        v13 = v73;
      }
    }
  }
  __writecr8(v13);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v15 = LockHandle.OldIrql;
  v74 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v36 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v36 <= 0xFu && LockHandle.OldIrql <= 0xFu && v36 >= 2u )
    {
      v37 = KeGetCurrentPrcb();
      v38 = v37->SchedulerAssist;
      v39 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v29 = (v39 & v38[5]) == 0;
      v38[5] &= v39;
      if ( v29 )
      {
        KiRemoveSystemWorkPriorityKick(v37);
        v15 = v74;
      }
    }
  }
  __writecr8(v15);
  KeAcquireInStackQueuedSpinLock(SpinLock, &v62);
  CcDecrementOpenCount(v5);
  if ( (*v6 & 0x20) != 0 || *(_DWORD *)(v5 + 524) )
  {
LABEL_30:
    v14 = 0;
    goto LABEL_16;
  }
  if ( !*(_DWORD *)(v5 + 112) )
  {
    v17 = (_DWORD *)(v5 + 4);
    goto LABEL_17;
  }
  if ( (*(_DWORD *)((*(_QWORD *)(v5 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) == 0
    && CcCanIWriteStreamEx(v61, v64, *(_QWORD *)(v5 + 96) & 0xFFFFFFFFFFFFFFF0uLL, 0x1000000LL, 0, 8, 0LL) )
  {
    v14 = 0;
    if ( *v68 )
    {
      LOBYTE(v16) = 1;
      CcScheduleLazyWriteScan(v61, v64, v16, 0LL);
    }
    goto LABEL_16;
  }
  v31 = *(_QWORD *)(v5 + 40);
  if ( a2 > v31 && *(_QWORD *)(v5 + 48) > v31 )
  {
    v20 = *(_DWORD *)(v5 + 112);
    *(_DWORD *)(v5 + 200) = v20;
    *(_DWORD *)(v61 + 976) += v20;
    *(_DWORD *)(v61 + 1072) += *(_DWORD *)(v5 + 200);
    *v6 |= 0x20u;
    ++*(_DWORD *)(v5 + 112);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v62);
    v21 = v62.OldIrql;
    v75 = v62.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v40 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v40 <= 0xFu && v62.OldIrql <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << (v62.OldIrql + 1));
        v29 = (v43 & v42[5]) == 0;
        v42[5] &= v43;
        if ( v29 )
        {
          KiRemoveSystemWorkPriorityKick(v41);
          v21 = v75;
        }
      }
    }
    __writecr8(v21);
    v22 = CcAllocateWorkQueueEntry(v61, v64, v65, &v69);
    v23 = SpinLock;
    if ( v22 < 0 )
    {
      KeAcquireInStackQueuedSpinLock(SpinLock, &v62);
      *v6 &= ~0x20u;
      --*(_DWORD *)(v5 + 112);
      goto LABEL_16;
    }
    v24 = v69;
    *(_DWORD *)(v69 + 128) = 2;
    *(_QWORD *)(v24 + 16) = v5;
    KeAcquireInStackQueuedSpinLock(v23, &v62);
    --*(_DWORD *)(v5 + 112);
    v25 = v65;
    if ( (*v6 & 0x10000) != 0 )
    {
      *(_QWORD *)(v5 + 504) = v24 | 1;
      v26 = v25 + 72;
    }
    else
    {
      *(_QWORD *)(v5 + 504) = v24;
      v26 = v25 + 104;
    }
    CcPostWorkQueue(v24, v26);
    goto LABEL_30;
  }
LABEL_16:
  v17 = (_DWORD *)(v5 + 4);
  v63 = (_DWORD *)(v5 + 4);
LABEL_17:
  if ( v14 == 2 && !a3 )
  {
    v14 = 1;
  }
  else if ( v14 > 1 )
  {
    *v6 |= 0x400400u;
    ++*v17;
    ++*v12;
    ++*(_DWORD *)(v5 + 524);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v62);
    v27 = v62.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v48 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v48 <= 0xFu && v62.OldIrql <= 0xFu && v48 >= 2u )
      {
        v49 = KeGetCurrentPrcb();
        v50 = v49->SchedulerAssist;
        v51 = ~(unsigned __int16)(-1LL << (v62.OldIrql + 1));
        v29 = (v51 & v50[5]) == 0;
        v50[5] &= v51;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(v49);
      }
    }
    __writecr8(v27);
    v28 = a3;
    v29 = a3 == 0;
    for ( i = a2; ; i = v67 )
    {
      v77 = v28;
      if ( v29 || !*(_QWORD *)(v5 + 8) && (*v6 & 4) == 0 )
        break;
      if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                               v5,
                               (unsigned int)&i,
                               v28,
                               0,
                               (__int64)&v67,
                               (__int64)&v77,
                               (__int64)v72,
                               0,
                               0LL) )
        break;
      v67 += v77;
      v29 = a3 + (_DWORD)a2 - (_DWORD)v67 == 0;
      v28 = a3 + a2 - v67;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v61 + 768), &v62);
    if ( !*v63 )
      KeBugCheckEx(0x34u, 0x146AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *v6 &= ~0x400000u;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v62);
    v18 = v62.OldIrql;
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_22;
    v52 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 )
      goto LABEL_22;
    if ( v52 > 0xFu )
      goto LABEL_22;
    if ( v62.OldIrql > 0xFu )
      goto LABEL_22;
    if ( v52 < 2u )
      goto LABEL_22;
    v53 = KeGetCurrentPrcb();
    v54 = v53->SchedulerAssist;
    v55 = ~(unsigned __int16)(-1LL << (v62.OldIrql + 1));
    v29 = (v55 & v54[5]) == 0;
    v54[5] &= v55;
    if ( !v29 )
      goto LABEL_22;
    v56 = v53;
    goto LABEL_93;
  }
  if ( v61 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v62);
    v18 = v62.OldIrql;
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_22;
    v57 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 )
      goto LABEL_22;
    if ( v57 > 0xFu )
      goto LABEL_22;
    if ( v62.OldIrql > 0xFu )
      goto LABEL_22;
    if ( v57 < 2u )
      goto LABEL_22;
    v58 = KeGetCurrentPrcb();
    v59 = v58->SchedulerAssist;
    v60 = ~(unsigned __int16)(-1LL << (v62.OldIrql + 1));
    v29 = (v60 & v59[5]) == 0;
    v59[5] &= v60;
    if ( !v29 )
      goto LABEL_22;
    v56 = v58;
LABEL_93:
    KiRemoveSystemWorkPriorityKick(v56);
LABEL_22:
    __writecr8(v18);
  }
  return v14;
}
