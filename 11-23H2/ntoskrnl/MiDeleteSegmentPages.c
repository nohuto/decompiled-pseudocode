/*
 * XREFs of MiDeleteSegmentPages @ 0x140219670
 * Callers:
 *     MiSegmentDelete @ 0x1406B0984 (MiSegmentDelete.c)
 *     MiInitializeImageExtents @ 0x140A3413C (MiInitializeImageExtents.c)
 * Callees:
 *     MiDeleteSubsectionPages @ 0x140218EF0 (MiDeleteSubsectionPages.c)
 *     MiGetCommittedPages @ 0x1402197C0 (MiGetCommittedPages.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteFileExtentList @ 0x140A340C0 (MiDeleteFileExtentList.c)
 */

__int64 __fastcall MiDeleteSegmentPages(__int64 *a1)
{
  __int16 v1; // dx
  BOOL v3; // esi
  __int64 v4; // rbp
  __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // r15
  int v8; // ebx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  char v11; // di
  volatile LONG *v12; // rcx
  unsigned __int64 v13; // rax
  __int64 CommittedPages; // rdi
  void *v16; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // edx
  bool v21; // zf
  unsigned __int8 v22; // dl
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  unsigned __int64 v25; // r8
  struct _KPRCB *v26; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v28; // eax
  int v29; // [rsp+78h] [rbp+10h] BYREF
  __int64 v30; // [rsp+80h] [rbp+18h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h]

  v1 = *((_WORD *)a1 + 30);
  v30 = 0LL;
  v3 = 0;
  v4 = *(_QWORD *)(qword_140C673C8 + 8LL * (v1 & 0x3FF));
  if ( a1[8] )
    v3 = (a1[7] & 0x20) == 0;
  v5 = *a1;
  v6 = a1 + 16;
  v31 = 0LL;
  v7 = 0LL;
  v8 = *(_DWORD *)(v5 + 12);
  if ( a1 != (__int64 *)-128LL )
  {
    do
    {
      v7 += MiDeleteSubsectionPages(v6, (__int64)&v30);
      if ( v3 )
      {
        if ( *(_QWORD *)(*v6 + 64LL) )
        {
          if ( (*(_BYTE *)(*v6 + 62LL) & 0xC) == 8 )
          {
            v16 = (void *)v6[14];
            if ( v16 )
            {
              MiDeleteFileExtentList(v16);
              v6[14] = 0LL;
            }
          }
        }
      }
      v6 = (_QWORD *)v6[2];
    }
    while ( v6 );
    v31 = v7;
  }
  v29 = 0;
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
  v10 = v9;
  v11 = v9 + 1;
  while ( 1 )
  {
    v12 = (volatile LONG *)(a1 + 9);
    if ( !a1[4] )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(v12);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v9 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << v11);
        v21 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    v10 = v9;
    __writecr8(v9);
    KeYieldProcessorEx(&v29);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  v13 = v9;
  if ( (_DWORD)KiIrqlFlags )
  {
    v22 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 )
    {
      v13 = v10;
      if ( v22 <= 0xFu )
      {
        v13 = v9;
        if ( (unsigned __int8)v9 <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          v21 = (~(unsigned __int16)(-1LL << v11) & v24[5]) == 0;
          v13 = v9;
          v24[5] &= ~(unsigned __int16)(-1LL << v11);
          if ( v21 )
          {
            KiRemoveSystemWorkPriorityKick(v23);
            v13 = v9;
          }
        }
      }
    }
  }
  __writecr8(v13);
  CommittedPages = MiGetCommittedPages(a1);
  if ( CommittedPages )
  {
    if ( (v8 & 0x1000) != 0 )
    {
      v25 = CommittedPages - v30;
      if ( (_UNKNOWN *)v4 == &MiSystemPartition )
      {
        v26 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v26->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v25 + CachedResidentAvailable <= 0x100 && v25 < 0x80000 )
          {
            do
            {
              v28 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v26->CachedResidentAvailable,
                      CachedResidentAvailable + v25,
                      CachedResidentAvailable);
              v21 = (_DWORD)CachedResidentAvailable == v28;
              LODWORD(CachedResidentAvailable) = v28;
              if ( v21 )
                goto LABEL_15;
            }
            while ( v28 != -1 && v25 + v28 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v26->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v25 += (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v25 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 17280), v25);
    }
LABEL_15:
    MiReturnCommit(v4, CommittedPages - v30);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 17848), -CommittedPages);
  }
  return v31;
}
