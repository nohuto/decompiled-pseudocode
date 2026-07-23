/*
 * XREFs of MmCreateKernelStack @ 0x140271930
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140271620 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KiAllocateProcessorStacks @ 0x140377160 (KiAllocateProcessorStacks.c)
 *     KiEnableOptionalXStateFeatures @ 0x140572E5C (KiEnableOptionalXStateFeatures.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x14073F948 (PspRecheckThreadOptionalXStateFeatures.c)
 *     KeUserModeCallback @ 0x14076EA70 (KeUserModeCallback.c)
 *     KeAllocateCalloutStackEx @ 0x1408717E0 (KeAllocateCalloutStackEx.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AEB08 (PspEnableProcessOptionalXStateFeatures.c)
 *     KeInitThread @ 0x140A875D0 (KeInitThread.c)
 * Callees:
 *     MiSetPfnKernelStack @ 0x14021B4D8 (MiSetPfnKernelStack.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateKernelStackPages @ 0x140273550 (MiAllocateKernelStackPages.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1402E4638 (MiChargeResident.c)
 *     KasanTrackAddress @ 0x140356690 (KasanTrackAddress.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     FirstEntrySList @ 0x140429230 (FirstEntrySList.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 *     MiLogKernelStackEvent @ 0x140645454 (MiLogKernelStackEvent.c)
 */

__int64 __fastcall MmCreateKernelStack(unsigned int a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // edi
  void *v5; // rsi
  unsigned __int64 v6; // r12
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  unsigned __int64 v9; // r13
  struct _KPRCB *v10; // rdx
  __int64 v11; // rbx
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // rbx
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  ULONG_PTR Next; // r9
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rbp
  __int64 v25; // rax
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r8
  __int64 v28; // r9
  unsigned __int8 v29; // cl
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  bool v33; // zf
  unsigned __int8 v34; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v36; // r8
  int v37; // eax
  struct _KPRCB *v38; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v40; // eax
  unsigned __int8 v41; // [rsp+40h] [rbp-68h]
  __int64 v42; // [rsp+48h] [rbp-60h]
  int v43; // [rsp+48h] [rbp-60h]
  __int64 v44; // [rsp+50h] [rbp-58h] BYREF
  __int64 v45; // [rsp+58h] [rbp-50h]
  PSLIST_ENTRY v46; // [rsp+60h] [rbp-48h]
  __int64 v47; // [rsp+68h] [rbp-40h]
  char v48; // [rsp+B0h] [rbp+8h]
  int v49; // [rsp+C8h] [rbp+20h] BYREF

  v48 = a1;
  v3 = a2;
  v44 = 0LL;
  v4 = a1;
  v5 = &MiSystemPartition;
  if ( (a1 & 0x10) != 0 )
  {
    v6 = -32LL;
    if ( a3 )
      v5 = *(void **)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1838LL));
  }
  else if ( a3 )
  {
    v6 = a3;
    v5 = *(void **)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1838LL));
  }
  else
  {
    v6 = -16LL;
  }
  if ( (a1 & 1) == 0 )
  {
    if ( (a1 & 0x20) != 0 )
    {
      v8 = 2;
      v7 = 3;
    }
    else
    {
      v7 = (unsigned __int8)byte_140C684BC;
      v8 = 0;
    }
    v9 = v7;
    v47 = v7;
    if ( (a1 & 0x10) == 0
      || (v10 = KeGetCurrentPrcb(), v8 = 1, v10->SchedulerSubNode->Affinity.Reserved[0] != (_DWORD)v3)
      || !v10->CachedStack
      || v5 != &MiSystemPartition
      || (v11 = _InterlockedExchange64((volatile __int64 *)&v10->CachedStack, 0LL)) == 0 )
    {
      v16 = 794 * v3;
      v17 = v8;
      v45 = 794 * v3;
      while ( 1 )
      {
        v42 = v17;
        v18 = *((_QWORD *)v5 + 2) + 32 * (v16 + v17 + 725);
        if ( FirstEntrySList((PSLIST_HEADER)v18) )
        {
          if ( v42 == 1 )
          {
            v41 = 17;
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            v41 = CurrentIrql;
            __writecr8(2uLL);
            if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              if ( CurrentIrql == 2 )
                LODWORD(v28) = 4;
              else
                v28 = (-1LL << (CurrentIrql + 1)) & 4;
              SchedulerAssist[5] |= v28;
            }
          }
          v46 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v18);
          if ( v46 )
          {
            if ( !FirstEntrySList((PSLIST_HEADER)v18) && !*(_BYTE *)(v18 + 28) )
              *(_BYTE *)(v18 + 28) = 1;
            Next = (ULONG_PTR)v46[-1].Next;
            if ( Next != (qword_140C698D0 ^ (unsigned __int64)&v46[-255]) )
              KeBugCheckEx(
                0x1Au,
                0x3470uLL,
                (ULONG_PTR)&v46[-255],
                Next,
                qword_140C698D0 ^ (unsigned __int64)&v46[-255]);
            v22 = (((unsigned __int64)&v46[-255] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v14 = (__int64)((v22 << 25) + 0x10000000) >> 16;
            v46 = (PSLIST_ENTRY)v14;
            if ( v8 != 1 )
            {
              v23 = v22 - 8LL * v7 + 8;
              do
              {
                v44 = MI_READ_PTE_LOCK_FREE(v22);
                v24 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v44) >> 12) & 0xFFFFFFFFFFLL)
                    - 0x220000000000LL;
                v49 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v49);
                  while ( *(__int64 *)(v24 + 24) < 0 );
                }
                v25 = MI_READ_PTE_LOCK_FREE(v22);
                if ( v44 == v25 )
                {
                  MiSetPfnKernelStack((__int64 *)v24, v6);
                  v22 -= 8LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              while ( v22 >= v23 );
              v14 = (__int64)v46;
              LOBYTE(v4) = v48;
              LODWORD(v9) = v47;
              if ( (_DWORD)KiIrqlFlags )
              {
                v34 = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v34 <= 0xFu && v41 <= 0xFu && v34 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v36 = CurrentPrcb->SchedulerAssist;
                  v37 = ~(unsigned __int16)(-1LL << (v41 + 1));
                  v33 = (v37 & v36[5]) == 0;
                  v36[5] &= v37;
                  if ( v33 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              __writecr8(v41);
            }
            goto LABEL_14;
          }
          v19 = v42;
          if ( v42 != 1 )
          {
            if ( (_DWORD)KiIrqlFlags )
            {
              v29 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v29 <= 0xFu && v41 <= 0xFu && v29 >= 2u )
              {
                v30 = KeGetCurrentPrcb();
                v31 = v30->SchedulerAssist;
                v32 = ~(unsigned __int16)(-1LL << (v41 + 1));
                v33 = (v32 & v31[5]) == 0;
                v31[5] &= v32;
                if ( v33 )
                  KiRemoveSystemWorkPriorityKick(v30);
              }
            }
            __writecr8(v41);
            ++*(_DWORD *)(v18 + 20);
            goto LABEL_20;
          }
        }
        else
        {
          v19 = v42;
        }
        ++*(_DWORD *)(v18 + 20);
        if ( v19 != 1 )
          goto LABEL_20;
        v16 = v45;
        v8 = 0;
        v17 = 0LL;
      }
    }
    v12 = *(_QWORD *)(v11 - 16);
    v13 = v11 - 4080;
    if ( v12 != (qword_140C698D0 ^ v13) )
      KeBugCheckEx(0x1Au, 0x3470uLL, v13, v12, qword_140C698D0 ^ v13);
    v14 = (__int64)(((v13 & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
    goto LABEL_14;
  }
  v7 = 18;
  v9 = 18LL;
  if ( (a1 & 4) == 0 )
    v9 = 6LL;
LABEL_20:
  if ( !(unsigned int)MiChargeCommit(v5, v7, (v4 >> 1) & 1) )
    return 0LL;
  v20 = MiReservePtes(&unk_140C68408, v7 + 1);
  v45 = v20;
  if ( !v20 )
  {
LABEL_91:
    MiReturnCommit(v5, v7);
    return 0LL;
  }
  v43 = v20;
  v14 = ((v20 << 25) + ((v7 + 1LL) << 28)) >> 16;
  if ( (int)KasanTrackAddress(v14 - (v7 << 12), v7 << 12, (unsigned int)v3) < 0 )
    goto LABEL_90;
  if ( (v4 & 5) == 1 )
    v43 = v45 + 96;
  if ( !(unsigned int)MiChargeResident(v5, v9, 0LL) )
    goto LABEL_90;
  if ( !(unsigned int)MiAllocateKernelStackPages((_DWORD)v5, v43 + 8, v9, v6, v3, v4, 0LL) )
  {
    if ( v5 == &MiSystemPartition )
    {
      v38 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v38->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( CachedResidentAvailable + v9 <= 0x100 )
        {
          do
          {
            v40 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v38->CachedResidentAvailable,
                    CachedResidentAvailable + v9,
                    CachedResidentAvailable);
            v33 = (_DWORD)CachedResidentAvailable == v40;
            LODWORD(CachedResidentAvailable) = v40;
            if ( v33 )
              goto LABEL_90;
          }
          while ( v40 != -1 && v40 + v9 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v38->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v9 += (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( v9 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 2160, v9);
LABEL_90:
    MiReleasePtes(&unk_140C68408, v45, v7 + 1);
    goto LABEL_91;
  }
  if ( v5 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C699C8, v7);
LABEL_14:
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v4 & 8) != 0 )
    MiLogKernelStackEvent(v14 - (v7 << 12), (unsigned int)v9, 1LL);
  return v14;
}
