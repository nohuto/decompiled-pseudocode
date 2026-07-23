/*
 * XREFs of MmPurgeSection @ 0x1402DC8D0
 * Callers:
 *     CcPurgeCacheSection @ 0x1402F07D0 (CcPurgeCacheSection.c)
 * Callees:
 *     MiRemoveUnusedSubsection @ 0x14021B994 (MiRemoveUnusedSubsection.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiComputeDataFlushRange @ 0x140288D60 (MiComputeDataFlushRange.c)
 *     MiIncrementSubsectionViewCount @ 0x1402890D0 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCanFileBeTruncatedInternal @ 0x14028B880 (MiCanFileBeTruncatedInternal.c)
 *     MiInsertUnusedSubsection @ 0x14028BBE0 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsections @ 0x14029F910 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x14029F9B0 (MiDecrementSubsectionViewCount.c)
 *     MiCheckControlArea @ 0x14029FAA0 (MiCheckControlArea.c)
 *     MiUnlockProtoPoolPage @ 0x1402DAEF0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402DBE30 (MiCheckProtoPtePageState.c)
 *     MiInvalidPteConforms @ 0x1402DC440 (MiInvalidPteConforms.c)
 *     MiDeleteTransitionPte @ 0x1402DCE80 (MiDeleteTransitionPte.c)
 *     KeShouldYieldProcessor @ 0x140333AD0 (KeShouldYieldProcessor.c)
 *     MiWaitForPageWriteCompletion @ 0x14034A6C4 (MiWaitForPageWriteCompletion.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChangingSubsectionProtos @ 0x14063BE64 (MiChangingSubsectionProtos.c)
 *     MiSubsectionProtosCreated @ 0x14063F78C (MiSubsectionProtosCreated.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1406608C8 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B424 (MiReturnCrossPartitionSectionCharges.c)
 */

char __fastcall MmPurgeSection(
        SECTION_OBJECT_POINTERS *a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned int a4,
        _BYTE *a5)
{
  int v5; // r13d
  char v6; // r15
  unsigned __int64 *v8; // rbx
  char *v9; // rax
  unsigned __int8 v10; // di
  __int64 v11; // r14
  ULONG_PTR v13; // r8
  volatile LONG *v14; // rcx
  ULONG_PTR v15; // r12
  unsigned __int8 v16; // di
  ULONG_PTR v17; // rsi
  char v18; // bl
  KIRQL v19; // al
  unsigned __int64 v20; // r12
  ULONG_PTR v21; // rcx
  __int64 v22; // r8
  _DWORD *v23; // r9
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  ULONG_PTR v29; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int8 v31; // dl
  ULONG_PTR v32; // r8
  volatile LONG *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 inserted; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v42; // eax
  bool v43; // zf
  unsigned __int8 v44; // cl
  struct _KPRCB *v45; // r10
  int v46; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v48; // rax
  _BYTE *v49; // rcx
  __int64 v50; // rbx
  int v51; // [rsp+30h] [rbp-91h]
  __int64 v52; // [rsp+38h] [rbp-89h]
  ULONG_PTR v53; // [rsp+40h] [rbp-81h]
  volatile LONG *SpinLock; // [rsp+48h] [rbp-79h]
  int v55; // [rsp+50h] [rbp-71h] BYREF
  ULONG_PTR v56; // [rsp+58h] [rbp-69h]
  __int64 v57; // [rsp+60h] [rbp-61h]
  unsigned __int64 v58; // [rsp+68h] [rbp-59h] BYREF
  volatile LONG *v59; // [rsp+70h] [rbp-51h]
  ULONG_PTR v60; // [rsp+78h] [rbp-49h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+80h] [rbp-41h] BYREF
  ULONG_PTR v62[2]; // [rsp+90h] [rbp-31h]
  __int128 v63; // [rsp+A0h] [rbp-21h]
  _OWORD v64[2]; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v65; // [rsp+D0h] [rbp+Fh]
  __int64 v66; // [rsp+120h] [rbp+5Fh] BYREF
  char v67; // [rsp+128h] [rbp+67h]
  unsigned __int8 v68; // [rsp+138h] [rbp+77h] BYREF

  LOBYTE(v66) = 0;
  v5 = 0;
  v65 = 0LL;
  v68 = 0;
  v58 = 0LL;
  v6 = a4;
  v8 = a2;
  *a5 = 0;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  *(_OWORD *)v62 = 0LL;
  v63 = 0LL;
  memset(v64, 0, sizeof(v64));
  if ( a2 )
  {
    v8 = &v58;
    v58 = *a2;
  }
  v57 = 0LL;
  v9 = MiCanFileBeTruncatedInternal(a1, v8, 1, (a4 >> 1) & 1, &v66);
  v10 = v66;
  v11 = (__int64)v9;
  if ( (_BYTE)v66 == 17 )
    return 0;
  if ( !v9 )
    return 1;
  if ( (v6 & 1) == 0 && *((_DWORD *)v9 + 22) || !*((_QWORD *)v9 + 8) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v9 + 18);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = v66;
        v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v66 + 1));
        v43 = (v42 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v42;
        if ( v43 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v10);
    return 0;
  }
  *((_DWORD *)v9 + 14) |= 0x8000u;
  if ( !(unsigned int)MiComputeDataFlushRange((__int64)v9, v10, v8, a3, 1, (__int64)BugCheckParameter2) )
    return 1;
  v13 = v62[1];
  v14 = (volatile LONG *)(v11 + 72);
  v15 = v63;
  v16 = 17;
  v17 = BugCheckParameter2[1];
  v18 = 1;
  LOBYTE(v66) = 17;
  v60 = v62[1];
  v56 = v63;
  v67 = 1;
  SpinLock = (volatile LONG *)(v11 + 72);
  while ( 1 )
  {
LABEL_11:
    v53 = v13;
    if ( v16 == 17 )
    {
      v19 = ExAcquireSpinLockExclusive(v14);
      v13 = v53;
      v16 = v19;
      LOBYTE(v66) = v19;
    }
    if ( v15 == v13 )
      v20 = v62[0] + 8;
    else
      v20 = *(_QWORD *)(v13 + 8) + 8LL * (*(_DWORD *)(v13 + 44) - (*(_DWORD *)(v13 + 52) & 0x3FFFFFFFu));
    if ( (*(_BYTE *)(v11 + 62) & 0xC) != 0 )
      v5 = 1;
    if ( *(_QWORD *)(v13 + 8) )
      break;
    v15 = v56;
    if ( v13 == v56 )
      goto LABEL_52;
    v13 = *(_QWORD *)(v13 + 16);
    v14 = (volatile LONG *)(v11 + 72);
    SpinLock = (volatile LONG *)(v11 + 72);
    v5 = 0;
    v17 = *(_QWORD *)(v13 + 8);
  }
  if ( !*(_DWORD *)(v13 + 108) )
  {
    MiIncrementSubsectionViewCount((__int64 *)v13, 0);
    v21 = v53;
    if ( (*(_BYTE *)(v53 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v53);
      v21 = v53;
    }
    *(_WORD *)(v21 + 32) |= 1u;
    v59 = SpinLock;
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      v44 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v44 <= 0xFu && v16 <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v23 = v45->SchedulerAssist;
        v16 = v66;
        v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v66 + 1));
        v43 = (v46 & v23[5]) == 0;
        v22 = (unsigned int)v46 & v23[5];
        v23[5] = v22;
        if ( v43 )
          KiRemoveSystemWorkPriorityKick(v45);
      }
    }
    __writecr8(v16);
    v24 = 0LL;
    v68 = 17;
    v52 = 0LL;
    if ( v5 )
    {
      MiChangingSubsectionProtos(v53);
      v24 = 0LL;
    }
    v25 = 0;
    v51 = 0;
    if ( v17 >= v20 )
      goto LABEL_48;
LABEL_25:
    if ( (v17 & 0xFFF) != 0 )
    {
      if ( v68 != 17 )
        goto LABEL_27;
    }
    else if ( v68 != 17 )
    {
      MiUnlockProtoPoolPage(v24, v68);
    }
    v52 = MiCheckProtoPtePageState(v17, (__int64)&v68);
    v24 = v52;
    if ( !v52 )
    {
      v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      goto LABEL_61;
    }
    while ( 1 )
    {
LABEL_27:
      while ( 1 )
      {
        v26 = *(_QWORD *)v17;
        v27 = *(_QWORD *)v17;
        if ( (*(_QWORD *)v17 & 1) == 0 )
          break;
LABEL_33:
        v28 = (v27 >> 12) & 0xFFFFFFFFFFLL;
        if ( v28 <= qword_140C65CA0 && _bittest64((const signed __int64 *)(48 * v28 - 0x21FFFFFFFFD8LL), 0x36u) )
        {
          v29 = 48 * v28 - 0x220000000000LL;
          v55 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v55);
            while ( *(__int64 *)(v29 + 24) < 0 );
          }
          if ( *(_QWORD *)v17 == v26 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v29 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
              v29 = MiLockSpecialPurposeMemoryCachedPage(v29, 0LL, v22, v23);
            if ( !v29 )
            {
LABEL_55:
              v17 += 8LL;
              goto LABEL_60;
            }
            BugCheckParameter4 = *(_QWORD *)v17;
            if ( !MiPteInShadowRange(v17)
              || (MiFlags & 0x600000) == 0
              || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
            {
              goto LABEL_41;
            }
            if ( (BugCheckParameter4 & 1) != 0 )
            {
              if ( (BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0 )
              {
                Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( Flink )
                {
                  v48 = *((_QWORD *)&Flink->Flink + ((v17 >> 3) & 0x1FF));
                  if ( (v48 & 0x20) != 0 )
                    BugCheckParameter4 |= 0x20uLL;
                  if ( (v48 & 0x42) != 0 )
                    BugCheckParameter4 |= 0x42uLL;
                }
              }
LABEL_41:
              if ( (BugCheckParameter4 & 1) != 0 )
                goto LABEL_45;
            }
            if ( (*(_DWORD *)(v29 + 16) & 0x401) != 0x400LL || (*(_QWORD *)(v29 + 8) | 0x8000000000000000uLL) != v17 )
              KeBugCheckEx(0xDEu, 2uLL, v17, *(_QWORD *)(v29 + 8), BugCheckParameter4);
            v31 = *(_BYTE *)(v29 + 34);
            if ( (((v6 & 2) != 0) & (v31 >> 4)) != 0 )
            {
LABEL_45:
              _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v25 = v51;
              v18 = 0;
              v67 = 0;
              goto LABEL_46;
            }
            if ( (v31 & 8) != 0 )
            {
              MiWaitForPageWriteCompletion(v29, v11, v52, v68);
              v68 = 17;
              goto LABEL_60;
            }
            if ( v5 )
            {
              v49 = a5;
              if ( *(_WORD *)(v29 + 32) )
                *a5 = 1;
              if ( (*(_BYTE *)(v11 + 62) & 0xC) == 8 )
                *v49 = 1;
            }
            MiDeleteTransitionPte(v17, v29);
            v25 = 1;
            v51 = 1;
            if ( *(_QWORD *)(v11 + 32) )
            {
              v17 += 8LL;
              if ( (v17 & 0x78) == 0 && KeShouldYieldProcessor() )
              {
                MiUnlockProtoPoolPage(v52, v68);
                v68 = 17;
              }
LABEL_60:
              v24 = v52;
LABEL_61:
              if ( v17 >= v20 )
              {
                v25 = v51;
                goto LABEL_63;
              }
              goto LABEL_25;
            }
LABEL_63:
            v18 = v67;
LABEL_46:
            if ( v68 != 17 )
            {
              MiUnlockProtoPoolPage(v52, v68);
              v25 = v51;
            }
LABEL_48:
            if ( v5 )
              MiSubsectionProtosCreated(v53, v64, 0LL, v25);
            v16 = ExAcquireSpinLockExclusive(SpinLock);
            LOBYTE(v66) = v16;
            MiDecrementSubsectionViewCount((__int64 *)v53, 0);
            v32 = v53;
            v33 = v59;
            v14 = v59;
            SpinLock = v59;
            if ( !*(_QWORD *)(v53 + 96) )
            {
              SpinLock = v59;
              if ( (*(_BYTE *)(v53 + 34) & 1) == 0 )
              {
                inserted = MiInsertUnusedSubsection(v53);
                v57 += inserted;
                v14 = v33;
                v32 = v53;
                SpinLock = v33;
              }
            }
            v15 = v56;
            if ( v32 == v56 || !v18 )
              goto LABEL_52;
            v13 = *(_QWORD *)(v32 + 16);
            v5 = 0;
            v17 = *(_QWORD *)(v13 + 8);
            goto LABEL_11;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (*(_QWORD *)v17 & 0xC00LL) != 0x800 )
        goto LABEL_55;
      if ( MiInvalidPteConforms(*(_QWORD *)v17) )
      {
        v27 = v26;
        if ( qword_140C65C40 && (v26 & 0x10) == 0 )
          v27 = v26 & ~qword_140C65C40;
        goto LABEL_33;
      }
    }
  }
  v15 = v56;
  v18 = 0;
  v67 = 0;
LABEL_52:
  v34 = MiDecrementSubsections(v60, v60, 0);
  v35 = v34 + v57;
  v36 = MiDecrementSubsections(v15, v15, 0);
  --*(_QWORD *)(v11 + 40);
  *(_DWORD *)(v11 + 56) &= ~4u;
  v37 = v36 + v35;
  if ( v37 )
  {
    v50 = *(_QWORD *)(qword_140C674C8 + 8LL * (*(_WORD *)(v11 + 60) & 0x3FF));
    MiCheckControlArea(v11, v16);
    MiReturnCrossPartitionSectionCharges(v50, 1LL, v37);
    return v67;
  }
  else
  {
    MiCheckControlArea(v11, v16);
  }
  return v18;
}
