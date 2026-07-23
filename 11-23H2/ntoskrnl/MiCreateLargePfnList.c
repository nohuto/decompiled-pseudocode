/*
 * XREFs of MiCreateLargePfnList @ 0x140667F3C
 * Callers:
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14066768C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiMapUserLargePages @ 0x140669310 (MiMapUserLargePages.c)
 *     MiAllocateFastAwePages @ 0x140A40454 (MiAllocateFastAwePages.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x140212098 (MiFreeLargeZeroPages.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1402E4638 (MiChargeResident.c)
 *     MiAllocateLargeZeroPages @ 0x1402E7A70 (MiAllocateLargeZeroPages.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiComputePreferredNode @ 0x140617CE0 (MiComputePreferredNode.c)
 *     MiGetCrossPartitionCharges @ 0x14065A4C8 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x14065B8A4 (MiReturnCrossPartitionCharges.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14066768C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiComputeIdealLargePage @ 0x140667C70 (MiComputeIdealLargePage.c)
 */

__int64 __fastcall MiCreateLargePfnList(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 *a7,
        char a8,
        _QWORD *a9)
{
  __int64 v11; // r10
  struct _KTHREAD *CurrentThread; // r11
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  int v15; // r8d
  unsigned __int64 v16; // r12
  __int64 v17; // r14
  unsigned int CrossPartitionCharges; // edi
  __int64 v19; // r10
  char v20; // r12
  int LargeProcessPagesFromCache; // eax
  int v23; // r9d
  int v24; // eax
  _DWORD *v25; // rdi
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v33; // zf
  signed __int32 v34; // eax
  int v35; // [rsp+38h] [rbp-59h]
  _QWORD v36[16]; // [rsp+48h] [rbp-49h] BYREF
  int v37; // [rsp+D8h] [rbp+47h]
  _DWORD *v38; // [rsp+D8h] [rbp+47h]

  memset(v36, 0, 0x50uLL);
  v11 = *(_QWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)a1 )
  {
    v13 = *(_DWORD *)(v11 + 48);
    *(_QWORD *)(a1 + 8) = MiVadPageSizes[(v13 >> 19) & 3];
    *(_DWORD *)(a1 + 20) = (v13 >> 7) & 0x1F;
    *(_DWORD *)(a1 + 16) = (v13 & 0x1A00000) == 27262976;
  }
  v14 = 0;
  v15 = *(_DWORD *)(a1 + 8);
  v16 = 0LL;
  v35 = *(_DWORD *)(a1 + 20);
  v37 = v15;
  v17 = *(_QWORD *)(qword_140C673C8 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessor[25]);
  if ( !v11 )
    goto LABEL_11;
  if ( !a7 )
  {
LABEL_9:
    if ( !(unsigned int)MiChargeResident((void *)v17, a3, 0LL) )
      goto LABEL_32;
    v15 = v37;
    v14 |= 4u;
LABEL_11:
    v19 = 0LL;
    if ( v16 || v15 != 16 || a3 >= 0x200 )
    {
      v20 = a6;
    }
    else
    {
      v20 = a6;
      if ( (*(_DWORD *)(v17 + 4) & 0x10) == 0 )
      {
        LargeProcessPagesFromCache = MiAllocateLargeProcessPagesFromCache(a1, a2, a3, a5, a6, a9);
        v19 = 16LL * a9[8];
        if ( LargeProcessPagesFromCache >= 0 )
          return 0LL;
      }
    }
    v23 = MmMakeProtectNotWriteCopy[v35];
    if ( a5 )
    {
      v24 = a5 - 1;
      if ( a5 - 1 >= (unsigned int)(unsigned __int16)KeNumberNodes )
      {
        CrossPartitionCharges = -1073741811;
LABEL_33:
        if ( v14 < 4 )
          goto LABEL_46;
        v30 = a3;
        if ( (unsigned __int16 *)v17 == MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable != -1 )
          {
            if ( a3 + CachedResidentAvailable <= 0x100 && a3 < 0x80000 )
            {
              while ( 1 )
              {
                v34 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                        CachedResidentAvailable + a3,
                        CachedResidentAvailable);
                v33 = (_DWORD)CachedResidentAvailable == v34;
                LODWORD(CachedResidentAvailable) = v34;
                if ( v33 )
                  break;
                if ( v34 == -1 || a3 + v34 > 0x100 )
                  goto LABEL_41;
              }
LABEL_46:
              if ( (v14 & 2) != 0 )
                MiReturnCommit(v17, a3);
              if ( (v14 & 1) == 0 )
                return CrossPartitionCharges;
              goto LABEL_49;
            }
LABEL_41:
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v30 = a3 + (int)CachedResidentAvailable - 192;
            }
          }
        }
        if ( v30 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 17280), v30);
        goto LABEL_46;
      }
    }
    else
    {
      v24 = MiComputePreferredNode(*(_QWORD *)a1);
    }
    v36[4] = __PAIR64__(v23, v24);
    v36[1] = v17;
    v36[8] = v19;
    v36[2] = a3;
    v36[7] = a2;
    v25 = (_DWORD *)(qword_140C65A98 + 4LL * v24 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v38 = &v25[(unsigned __int16)KeNumberNodes];
    v26 = 0;
    if ( *(_DWORD *)(a1 + 16) )
      v26 = 8;
    v36[5] = -1LL;
    LODWORD(v36[0]) = v26;
    v36[3] = a4;
    if ( (a8 & 0x10) != 0 )
      LODWORD(v36[0]) = v26 | 0x10;
    v27 = *(_QWORD *)a1;
    v36[9] = a9;
    if ( v27 )
      MiComputeIdealLargePage(v27, a2 + (v19 << 12), a3 - v19, (__int64)v36);
    MiAllocateLargeZeroPages((unsigned int *)v36);
    v28 = v36[8];
    v29 = v36[2];
    if ( v36[8] == v36[2] )
      return 0;
    if ( !v20 )
    {
      do
      {
        if ( ++v25 == v38 )
          break;
        LODWORD(v36[4]) = *v25;
        MiAllocateLargeZeroPages((unsigned int *)v36);
        v28 = v36[8];
        v29 = v36[2];
      }
      while ( v36[8] != v36[2] );
    }
    if ( v28 == v29 )
      return 0;
    MiFreeLargeZeroPages(v17, (__int64)a9, (LODWORD(v36[0]) >> 3) & 1);
LABEL_32:
    CrossPartitionCharges = -1073741670;
    goto LABEL_33;
  }
  v16 = *a7;
  v17 = *a7;
  CrossPartitionCharges = MiGetCrossPartitionCharges(*a7, 2, 1, a3);
  if ( (CrossPartitionCharges & 0x80000000) == 0 )
  {
    if ( !(unsigned int)MiChargeCommit(v16, a3, 0LL) )
    {
      CrossPartitionCharges = -1073741523;
LABEL_49:
      MiReturnCrossPartitionCharges(v17, 2, 1, a3);
      return CrossPartitionCharges;
    }
    v14 = 3;
    goto LABEL_9;
  }
  return CrossPartitionCharges;
}
