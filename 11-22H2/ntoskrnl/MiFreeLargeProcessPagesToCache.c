/*
 * XREFs of MiFreeLargeProcessPagesToCache @ 0x1406686B4
 * Callers:
 *     MiFreeLargePages @ 0x1406682C0 (MiFreeLargePages.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x1402120B8 (MiFreeLargeZeroPages.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiInitializeLargePfnList @ 0x1402E8F98 (MiInitializeLargePfnList.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14065D55C (MiCoalesceActivePagesIntoFree.c)
 *     MiAppendTailList @ 0x1406676EC (MiAppendTailList.c)
 */

void __fastcall MiFreeLargeProcessPagesToCache(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR *v3; // rbx
  ULONG_PTR v4; // rcx
  _KPROCESS *Process; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v15; // zf
  signed __int32 v16; // eax
  volatile LONG *v17; // r14
  unsigned __int64 v18; // rdi
  _QWORD *v19; // rbx
  ULONG_PTR v20; // rdx
  _QWORD *v21; // r10
  _QWORD *v22; // rax
  __int64 CurrentIrql; // rcx
  struct _KPRCB *v24; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // edx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  int v29; // eax
  _DWORD *v30; // r8
  unsigned int v31; // [rsp+20h] [rbp-59h]
  _QWORD v33[12]; // [rsp+30h] [rbp-49h] BYREF

  v3 = a1;
  memset(v33, 0, sizeof(v33));
  v4 = *v3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = Process[1].ActiveProcessors.StaticBitmap[28];
  v7 = *(_QWORD *)(v6 + 328);
  LODWORD(v3) = *(unsigned __int8 *)(48 * *v3 - 0x220000000000LL + 34) >> 6;
  MiSearchNumaNodeTable(v4);
  v8 = *(_QWORD *)(qword_140C674C8 + 8LL * Process[1].IdealProcessor[25]);
  MiInitializeLargePfnList(v33);
  v9 = (unsigned int)v3 * (unsigned __int16)KeNumberNodes;
  *(_DWORD *)(v7 + 24) = *(_DWORD *)(v8 + 16104);
  v10 = 16 * a2;
  v12 = (_QWORD *)(v7 + 24 * (v11 + v9) + 32);
  if ( !(16 * a2) )
    goto LABEL_14;
  MiReturnCommit(v8, 16 * a2);
  if ( (unsigned __int16 *)v8 != MiSystemPartition )
    goto LABEL_13;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_13;
  if ( v10 + CachedResidentAvailable > 0x100 || v10 >= 0x80000 )
  {
LABEL_9:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v10 += (int)CachedResidentAvailable - 192;
    }
    if ( !v10 )
      goto LABEL_14;
LABEL_13:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 17280), v10);
    goto LABEL_14;
  }
  while ( 1 )
  {
    v16 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
            v10 + CachedResidentAvailable,
            CachedResidentAvailable);
    v15 = (_DWORD)CachedResidentAvailable == v16;
    LODWORD(CachedResidentAvailable) = v16;
    if ( v15 )
      break;
    if ( v16 == -1 || v10 + v16 > 0x100 )
      goto LABEL_9;
  }
LABEL_14:
  v17 = (volatile LONG *)(v6 + 336);
  v18 = ExAcquireSpinLockExclusive(v17);
  if ( a2 )
  {
    v31 = v18 + 1;
    v19 = v12 + 2;
    while ( 1 )
    {
      while ( 1 )
      {
        v20 = a1[--a2];
        v21 = (_QWORD *)(48 * v20 - 0x220000000000LL);
        if ( (_QWORD *)*v12 != v12
          && (((0xAAAAAAAAAAAAAAABuLL * ((*v12 + 0x220000000000LL) >> 4)) ^ v20) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
        {
          MiAppendTailList(&v33[6], v12);
          v33[8] += *v19;
          *v19 = 0LL;
        }
        v22 = (_QWORD *)v12[1];
        if ( (_QWORD *)*v22 != v12 )
          __fastfail(3u);
        *v21 = v12;
        v21[1] = v22;
        *v22 = v21;
        v12[1] = v21;
        if ( ++*v19 == 32LL )
        {
          MiAppendTailList(&v33[6], v12);
          v33[8] += *v19;
          *v19 = 0LL;
        }
        if ( v33[8] )
          break;
        if ( !a2 )
          goto LABEL_36;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v17);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && (unsigned __int8)CurrentIrql <= 0xFu
          && (unsigned __int8)v18 <= 0xFu
          && (unsigned __int8)CurrentIrql >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          CurrentIrql = v31;
          SchedulerAssist = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << v31);
          v15 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)v24);
        }
      }
      __writecr8(v18);
      if ( v33[8] != 32LL
        || !(unsigned int)MiCoalesceActivePagesIntoFree(
                            CurrentIrql,
                            (0xAAAAAAAAAAAAAAABuLL * ((v33[6] + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFFFFE00uLL,
                            1u) )
      {
        MiFreeLargeZeroPages(v8, (__int64)v33, 1u);
      }
      if ( !a2 )
        break;
      MiInitializeLargePfnList(v33);
      ExAcquireSpinLockExclusive(v17);
    }
  }
  else
  {
LABEL_36:
    ExReleaseSpinLockExclusiveFromDpcLevel(v17);
    if ( (_DWORD)KiIrqlFlags )
    {
      v27 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v30 = v28->SchedulerAssist;
        v15 = (v29 & v30[5]) == 0;
        v30[5] &= v29;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)v28);
      }
    }
    __writecr8(v18);
  }
}
