/*
 * XREFs of MiAllocateSlabEntry @ 0x1402E6C40
 * Callers:
 *     MiReplenishSlabAllocator @ 0x1402E6AC4 (MiReplenishSlabAllocator.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x1402194A8 (MiSetPfnIdentity.c)
 *     MiAbortCombineScan @ 0x14021AACC (MiAbortCombineScan.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     RtlInterlockedSetClearRunEx @ 0x14027EF50 (RtlInterlockedSetClearRunEx.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402858B4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     MiAcquireNonPagedResources @ 0x1402E4314 (MiAcquireNonPagedResources.c)
 *     MiPopLargePfnList @ 0x1402E700C (MiPopLargePfnList.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     MiAllocateLargeZeroPages @ 0x1402E77E0 (MiAllocateLargeZeroPages.c)
 *     MiInitializeLargePfnList @ 0x1402E8F98 (MiInitializeLargePfnList.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402E8FBC (MiUpdateSlabPagePlaceholderState.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogSlabEntryAllocateFailure @ 0x14065715C (MiLogSlabEntryAllocateFailure.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateSlabEntry(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // rcx
  char v7; // r12
  BOOL v8; // esi
  unsigned __int64 v9; // r15
  char *Pool; // rax
  char *v11; // rdx
  int v12; // eax
  unsigned int v13; // eax
  int v14; // ecx
  __int64 v15; // r15
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // r14d
  unsigned __int64 v20; // rax
  _QWORD *v21; // r14
  int v22; // r13d
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rsi
  __int64 CurrentIrql; // r9
  _BYTE *v26; // rbx
  char v27; // al
  __int64 v28; // rax
  char v29; // al
  unsigned int v30; // eax
  _DWORD *SchedulerAssist; // r8
  int v33; // r14d
  volatile signed __int32 *v34; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v37; // zf
  signed __int32 v38; // eax
  unsigned __int8 v39; // cl
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r8
  int v42; // eax
  __int64 UnbiasedInterruptTime; // rax
  signed __int32 v44[8]; // [rsp+0h] [rbp-100h] BYREF
  PVOID P; // [rsp+30h] [rbp-D0h]
  int v46; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+40h] [rbp-C0h]
  _QWORD v48[10]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v49[96]; // [rsp+A0h] [rbp-60h] BYREF

  memset(v49, 0, sizeof(v49));
  memset(v48, 0, sizeof(v48));
  v7 = 1;
  if ( *(_QWORD *)(a1 + 208) )
  {
    v33 = 10;
    goto LABEL_34;
  }
  v8 = 1;
  if ( *(_QWORD *)(a2 + 17216) < 0x420uLL )
  {
    v33 = 20;
LABEL_66:
    LOBYTE(v6) = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v6);
    if ( !UnbiasedInterruptTime )
      UnbiasedInterruptTime = 1LL;
    *(_QWORD *)(a1 + 208) = UnbiasedInterruptTime;
LABEL_69:
    if ( !v7 )
    {
      v34 = (volatile signed __int32 *)(a1 + 104);
      goto LABEL_35;
    }
LABEL_34:
    v34 = (volatile signed __int32 *)(a1 + 100);
LABEL_35:
    _InterlockedIncrement(v34);
    MiLogSlabEntryAllocateFailure(a1, v33, a3, HIDWORD(v48[6]), v7);
    return 0LL;
  }
  v9 = 512LL;
  if ( (int)MiAcquireNonPagedResources(a2, 0x200uLL, 0LL, 2u) < 0 )
  {
    v33 = 30;
    goto LABEL_66;
  }
  Pool = (char *)MiAllocatePool(64, 0x90uLL, 0x6553694Du);
  P = Pool;
  v11 = Pool;
  if ( !Pool )
  {
    v33 = 40;
LABEL_41:
    MiReturnCommit(a2, 512LL);
    if ( (_UNKNOWN *)a2 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 512) <= 0x100 )
        {
          while ( 1 )
          {
            v6 = (unsigned int)(CachedResidentAvailable + 512);
            v38 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    v6,
                    CachedResidentAvailable);
            v37 = (_DWORD)CachedResidentAvailable == v38;
            LODWORD(CachedResidentAvailable) = v38;
            if ( v37 )
              break;
            if ( v38 == -1 || (unsigned __int64)(v38 + 512LL) > 0x100 )
              goto LABEL_47;
          }
LABEL_52:
          if ( !v8 )
            goto LABEL_69;
          goto LABEL_66;
        }
LABEL_47:
        v6 = 192LL;
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v6 = (int)CachedResidentAvailable - 192;
          v9 = v6 + 512;
        }
        if ( !v9 )
          goto LABEL_52;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 17280), v9);
    goto LABEL_52;
  }
  *((_QWORD *)Pool + 5) = a1;
  *((_DWORD *)Pool + 12) = 512;
  *((_QWORD *)Pool + 7) = Pool + 64;
  *((_DWORD *)Pool + 33) = 512;
  v12 = *(_DWORD *)(a2 + 16236);
  if ( _bittest(&v12, *(_DWORD *)(a1 + 80)) )
    *((_DWORD *)v11 + 35) |= 2u;
  v13 = *(_DWORD *)(a1 + 84);
  v14 = LODWORD(v48[0]) | 0x30;
  v48[2] = 512LL;
  v48[3] = 512LL;
  LODWORD(v15) = 4;
  v48[4] = v13 | 0x400000000LL;
  v16 = *(_DWORD *)(a1 + 88);
  v48[1] = a2;
  v48[5] = -1LL;
  LODWORD(v48[0]) |= 0x30u;
  HIDWORD(v48[6]) = a3;
  if ( (v16 & 4) == 0 )
    LODWORD(v48[0]) = v14 | 8;
  MiInitializeLargePfnList(v49);
  v48[9] = v49;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
  {
    v17 = a3 | 8;
    HIDWORD(v48[6]) = a3 | 8;
  }
  else
  {
    v17 = HIDWORD(v48[6]);
  }
  v18 = v17 & 0x40;
  if ( (v17 & 0x40) == 0 )
    HIDWORD(v48[6]) = v17 | 0x40;
  v7 = v18 != 0;
  v8 = v18 == 0;
  v19 = v18 != 0;
  while ( 1 )
  {
    MiAllocateLargeZeroPages(v48);
    if ( v48[8] )
      break;
    HIDWORD(v48[6]) &= ~0x40u;
    ++v19;
    LODWORD(v48[0]) &= ~0x10u;
    if ( v19 >= 2 )
    {
      v33 = 50;
      ExFreePoolWithTag(P, 0);
      v9 = 512LL;
      goto LABEL_41;
    }
  }
  v20 = MiPopLargePfnList(v49, 1LL);
  v21 = P;
  *((_QWORD *)P + 3) = v20;
  v21[4] = v20 + 511;
  RtlInterlockedSetClearRunEx((__int64)&unk_140C6F428, v20 >> 9, 1uLL);
  v22 = (LODWORD(v48[0]) >> 3) & 1;
  v23 = 48LL * v21[3] - 0x220000000000LL;
  v24 = 48LL * v21[4] - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v47 = CurrentIrql;
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql != 2 )
      v15 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v15;
  }
  if ( v23 <= v24 )
  {
    v26 = (_BYTE *)(v23 + 34);
    do
    {
      v46 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 - 10), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v46);
        while ( *(__int64 *)(v26 - 10) < 0 );
      }
      *((_WORD *)v26 - 1) = 0;
      _InterlockedOr(v44, 0);
      v27 = v22 | *v26 & 0xF8;
      *(_QWORD *)(v26 - 10) ^= (*(_QWORD *)(v26 - 10) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0x3800000000000000LL;
      *v26 = v27;
      v28 = -1LL;
      if ( *(_DWORD *)(a1 + 80) == 2 )
        v28 = -2LL;
      *(_QWORD *)(v26 - 26) = v28;
      *(_QWORD *)(v26 - 10) &= 0xFFFFFF0000000000uLL;
      *(_QWORD *)(v26 - 18) = ZeroPte;
      v29 = *v26 & 7;
      *(_QWORD *)(v26 - 34) = 0LL;
      if ( v29 == 1 )
        MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v26 - 18));
      *v26 = *v26 & 0xF8 | 5;
      v30 = *(_DWORD *)(a1 + 80);
      if ( v30 <= 3 && v30 != 2 )
      {
        MiSetPfnIdentity((__int64)(v26 - 34), 3);
        MiAbortCombineScan((__int64)(v26 - 34));
      }
      _InterlockedAnd64((volatile signed __int64 *)(v26 - 10), 0x7FFFFFFFFFFFFFFFuLL);
      v26 += 48;
    }
    while ( (unsigned __int64)(v26 - 34) <= v24 );
    v21 = P;
    LOBYTE(CurrentIrql) = v47;
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v39 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v39 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v39 >= 2u )
    {
      v40 = KeGetCurrentPrcb();
      v41 = v40->SchedulerAssist;
      v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v37 = (v42 & v41[5]) == 0;
      v41[5] &= v42;
      if ( v37 )
      {
        KiRemoveSystemWorkPriorityKick(v40);
        LOBYTE(CurrentIrql) = v47;
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  MiUpdateSlabPagePlaceholderState(a1, v21[3], 512LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
  return v21;
}
