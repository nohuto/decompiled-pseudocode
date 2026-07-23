/*
 * XREFs of MiManageUltraSpacePageTable @ 0x14046E63C
 * Callers:
 *     MiDeleteUltraMapContext @ 0x1402E92DC (MiDeleteUltraMapContext.c)
 *     MiReuseUltraPageTable @ 0x14046EA2C (MiReuseUltraPageTable.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     KeFlushTb @ 0x140279850 (KeFlushTb.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiReleaseFreshPage @ 0x1402E7F20 (MiReleaseFreshPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiManageUltraSpacePageTable(__int64 *a1, unsigned int a2, int a3)
{
  int v5; // r14d
  int v6; // r15d
  __int64 v7; // rdi
  __int64 **v8; // rbx
  int v9; // r13d
  unsigned int v10; // ebp
  unsigned __int64 v11; // rdx
  int v12; // ecx
  _QWORD **v13; // rcx
  __int64 *v14; // rdx
  _QWORD *v15; // r15
  __int64 v16; // rcx
  __int64 **v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // r14
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  unsigned __int8 CurrentIrql; // al
  KIRQL v25; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  unsigned __int64 v30; // rbp
  __int64 *v31; // rbx
  struct _KPRCB *v32; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v34; // eax
  signed __int32 v36[8]; // [rsp+0h] [rbp-78h] BYREF
  int v37; // [rsp+20h] [rbp-58h]
  __int64 v38; // [rsp+28h] [rbp-50h]
  PEX_SPIN_LOCK SpinLock; // [rsp+30h] [rbp-48h]
  KIRQL v40; // [rsp+88h] [rbp+10h]
  unsigned int v41; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v6 = *(_DWORD *)(qword_140C6B648 + 4);
  v38 = *(_QWORD *)(qword_140C65BA0 + 376LL * (a2 >> byte_140C65B8D) + 368);
  v37 = v6;
  v7 = v38 + 392;
  SpinLock = (PEX_SPIN_LOCK)(v38 + 552);
  v8 = (__int64 **)(v38 + 520);
  v40 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v38 + 552));
  _InterlockedOr(v36, 0);
  v9 = KiTbFlushTimeStamp;
  v10 = 0;
  v41 = KiTbFlushTimeStamp & 3;
  do
  {
    v11 = *(_QWORD *)(v7 + 16);
    if ( v11 )
    {
      v12 = *(_DWORD *)(v7 + 24);
      if ( (unsigned int)(v9 - v12) <= 2 && ((v12 & 1) != 0 || (unsigned int)(v9 - v12) < 2) )
      {
        if ( v6 && !v5 && v11 >= 8 )
        {
          KeFlushTb(3u, 1u);
          v5 = 1;
          --v10;
          v7 -= 32LL;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v7 + 8LL) = *(_QWORD *)(v7 + 8);
        **(_QWORD **)(v7 + 8) = *(_QWORD *)v7;
        v13 = *(_QWORD ***)v7;
        v14 = v8[1];
        if ( (__int64 **)(*v8)[1] != v8
          || (__int64 **)*v14 != v8
          || (_QWORD **)(*v13)[1] != v13
          || (_QWORD **)*v13[1] != v13 )
        {
          goto LABEL_39;
        }
        *v14 = (__int64)v13;
        v8[1] = v13[1];
        *v13[1] = v8;
        v13[1] = v14;
        v8[2] = (__int64 *)((char *)v8[2] + *(_QWORD *)(v7 + 16));
        *(_QWORD *)(v7 + 8) = v7;
        *(_QWORD *)v7 = v7;
        *(_QWORD *)(v7 + 16) = 0LL;
      }
    }
    ++v10;
    v7 += 32LL;
  }
  while ( v10 < 4 );
  v15 = v8 + 2;
  if ( a1 )
  {
    if ( !*v15 && !a3 )
    {
      KeFlushTb(3u, 1u);
      goto LABEL_29;
    }
    v16 = 32LL * v41 + v38 + 392;
    if ( !*(_QWORD *)(v16 + 16) )
      *(_DWORD *)(v16 + 24) = v9;
    v17 = *(__int64 ***)(v16 + 8);
    if ( *v17 != (__int64 *)v16 )
      goto LABEL_39;
    *a1 = v16;
    a1[1] = (__int64)v17;
    *v17 = a1;
    *(_QWORD *)(v16 + 8) = a1;
    a1 = 0LL;
    ++*(_QWORD *)(v16 + 16);
  }
  if ( !a3 && *v15 )
  {
    a1 = *v8;
    v18 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v18 + 8) != a1 )
      goto LABEL_39;
    *v8 = (__int64 *)v18;
    *(_QWORD *)(v18 + 8) = v8;
    --*v15;
  }
LABEL_29:
  if ( *v15 <= 0x100uLL || !a3 )
  {
    v23 = 0LL;
    v19 = 0LL;
    goto LABEL_41;
  }
  v19 = *v8;
  if ( !v37 )
  {
    v22 = 256LL;
    do
    {
      v19 = (__int64 *)*v19;
      --v22;
    }
    while ( v22 );
    v20 = (__int64 *)v19[1];
    if ( *(__int64 **)(*v19 + 8) == v19 && (__int64 *)*v20 == v19 )
    {
      *v20 = (__int64)v8;
      v21 = 256LL;
      goto LABEL_38;
    }
LABEL_39:
    __fastfail(3u);
  }
  *v8 = (__int64 *)v8;
  v20 = (__int64 *)v8;
  v21 = 0LL;
LABEL_38:
  v8[1] = v20;
  v23 = *v15 - v21;
  *v15 = v21;
LABEL_41:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( (_DWORD)KiIrqlFlags
    && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
    && CurrentIrql <= 0xFu )
  {
    v25 = v40;
    if ( v40 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << (v40 + 1));
      v29 = (v28 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v28;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v25 = v40;
  }
  __writecr8(v25);
  if ( !v19 )
    goto LABEL_64;
  if ( v23 )
  {
    v30 = v23;
    do
    {
      v31 = (__int64 *)*v19;
      MiReleaseFreshPage((__int64)v19);
      v19 = v31;
      --v30;
    }
    while ( v30 );
  }
  MiReturnCommit((__int64)&MiSystemPartition, v23);
  v32 = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)v32->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
  {
LABEL_62:
    if ( v23 )
      _InterlockedExchangeAdd64(&qword_140C6F880, v23);
    goto LABEL_64;
  }
  if ( v23 + CachedResidentAvailable > 0x100 || v23 >= 0x80000 )
  {
LABEL_59:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v32->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v23 += (int)CachedResidentAvailable - 192;
    }
    goto LABEL_62;
  }
  while ( 1 )
  {
    v34 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&v32->CachedResidentAvailable,
            CachedResidentAvailable + v23,
            CachedResidentAvailable);
    v29 = (_DWORD)CachedResidentAvailable == v34;
    LODWORD(CachedResidentAvailable) = v34;
    if ( v29 )
      break;
    if ( v34 == -1 || v23 + v34 > 0x100 )
      goto LABEL_59;
  }
LABEL_64:
  if ( a1 )
    return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4);
  else
    return -1LL;
}
