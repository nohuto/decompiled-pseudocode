/*
 * XREFs of MiMapPageFileHash @ 0x14066683C
 * Callers:
 *     MiGatherPagefilePages @ 0x14063A694 (MiGatherPagefilePages.c)
 *     MiStoreUpdatePagefileHash @ 0x14065D038 (MiStoreUpdatePagefileHash.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiUpdatePageFileHighInPte @ 0x1402858CC (MiUpdatePageFileHighInPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x1402CB990 (MmUnmapLockedPages.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E18C0 (MiSetPfnTbFlushStamp.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E41F0 (MiInitializePfnForOtherProcess.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiWritePageFileHash @ 0x14046FA06 (MiWritePageFileHash.c)
 *     MiFreePageFileHashPfn @ 0x140666418 (MiFreePageFileHashPfn.c)
 *     MiGetFileHashPage @ 0x14066645C (MiGetFileHashPage.c)
 */

void __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  int v5; // r14d
  __int64 v8; // r12
  char *AnyMultiplexedVm; // rax
  volatile LONG *v10; // rbx
  KIRQL v11; // al
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int16 v14; // dx
  unsigned int v15; // r13d
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r14
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  char v20; // di
  int v21; // r15d
  __int64 v22; // rbx
  __int64 v23; // r8
  bool v24; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  unsigned __int8 v29; // cl
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  signed __int32 v33; // ecx
  __int64 FileHashPage; // rax
  ULONG_PTR v35; // r13
  __int64 v36; // r15
  unsigned __int8 v37; // bl
  unsigned __int64 v38; // rsi
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  __int64 v47; // rbx
  unsigned __int64 v48; // r8
  struct _KPRCB *v49; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v51; // eax
  unsigned int v52; // eax
  __int64 v53; // rax
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // rdi
  __int64 v56; // rdx
  char v57; // di
  int v58; // r15d
  __int64 v59; // rbx
  __int64 v60; // r8
  bool v61; // zf
  unsigned __int8 v62; // cl
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  int v66; // r14d
  __int64 v67; // rax
  char v68; // si
  __int64 v69; // rbx
  __int64 v70; // r8
  int v71; // eax
  char v72; // di
  int v73; // esi
  __int64 v74; // rbx
  __int64 v75; // r8
  bool v76; // zf
  unsigned int v77; // eax
  unsigned __int8 v78; // al
  unsigned __int8 v79; // bl
  struct _KPRCB *v80; // r10
  _DWORD *v81; // r9
  int v82; // eax
  signed __int32 v83[8]; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int8 v84; // [rsp+30h] [rbp-30h]
  int v85; // [rsp+34h] [rbp-2Ch]
  unsigned int v86; // [rsp+38h] [rbp-28h]
  unsigned __int64 updated; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v88; // [rsp+48h] [rbp-18h]
  __int128 v89; // [rsp+50h] [rbp-10h] BYREF
  int v92; // [rsp+B8h] [rbp+58h]

  v92 = a4;
  v24 = *(_QWORD *)(a1 + 216) == 0LL;
  v89 = 0LL;
  v5 = a4;
  v8 = a1;
  if ( !v24 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
    MiInitializePageColorBase((__int64)AnyMultiplexedVm, 0, (__int64)&v89);
    if ( (*(_BYTE *)(a2 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000010);
    v88 = (_QWORD *)(a2 + 8 * (a3 + 6));
    v10 = (volatile LONG *)(v8 + 232);
    while ( 1 )
    {
      v11 = ExAcquireSpinLockExclusive(v10);
      v12 = *(_QWORD *)(v8 + 216);
      v13 = v11;
      v14 = v12 + dword_140C6964C * v5;
      v15 = a5;
      v16 = (((v12 + (unsigned __int64)(unsigned int)(dword_140C6964C * v5)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (4096 - (v14 & 0xFFFu)) / dword_140C6964C <= a5 )
        v15 = (4096 - (v14 & 0xFFFu)) / dword_140C6964C;
      v86 = v15;
      updated = MI_READ_PTE_LOCK_FREE(v16);
      if ( (updated & 1) != 0 )
      {
        v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&updated) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        v18 = *(_QWORD *)(v17 + 16);
        v19 = v18;
        if ( qword_140C65B40 && (v18 & 0x10) == 0 )
          v19 = v18 & ~qword_140C65B40;
        updated = MiUpdatePageFileHighInPte(v18, v15 + HIDWORD(v19));
        v20 = updated;
        v21 = 0;
        v22 = updated;
        if ( MiPteInShadowRange(v17 + 16) )
        {
          if ( MiPteHasShadow() )
          {
            v21 = 1;
            if ( !HIBYTE(word_140C66CFC) )
            {
              v24 = (v20 & 1) == 0;
LABEL_17:
              if ( !v24 )
                v22 |= 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v24 = (v20 & 1) == 0;
            goto LABEL_17;
          }
        }
        *(_QWORD *)(v17 + 16) = v22;
        if ( v21 )
          MiWritePteShadow(v17 + 16, v22, v23);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v13 <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v24 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v13);
        goto LABEL_129;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      if ( (_DWORD)KiIrqlFlags )
      {
        v29 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v29 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v24 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick((__int64)v30);
        }
      }
      __writecr8(v13);
      v33 = _InterlockedExchangeAdd((volatile signed __int32 *)v89, 1u);
      FileHashPage = MiGetFileHashPage(v8, DWORD2(v89) & (unsigned int)v33 | HIDWORD(v89));
      v35 = FileHashPage;
      if ( FileHashPage == -1 )
      {
        v36 = 0LL;
        v37 = 17;
      }
      else
      {
        v36 = 48 * FileHashPage - 0x220000000000LL;
        _InterlockedOr(v83, 0);
        MiSetPfnTbFlushStamp(v36, KiTbFlushTimeStamp, 0);
        updated = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        MiInitializePfnForOtherProcess(v35, v16, (updated >> 12) & 0xFFFFFFFFFFLL, 2560);
        v37 = MiLockPageInline(v36);
      }
      v84 = v37;
      v38 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 232));
      if ( v12 == *(_QWORD *)(v8 + 216) )
      {
        v53 = MI_READ_PTE_LOCK_FREE(v16);
        v54 = v53;
        if ( qword_140C65B40 )
        {
          if ( (v53 & 0x10) != 0 )
            v54 = v53 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v54 = v53 & ~qword_140C65B40;
        }
        v55 = HIDWORD(v54);
        v56 = (unsigned int)v55 + v86;
        if ( v35 == -1LL )
        {
          updated = MiUpdatePageFileHighInPte(v53, v56);
          v57 = updated;
          v58 = 0;
          v59 = updated;
          if ( MiPteInShadowRange(v16) )
          {
            if ( MiPteHasShadow() )
            {
              v58 = 1;
              if ( !HIBYTE(word_140C66CFC) )
              {
                v61 = (v57 & 1) == 0;
LABEL_83:
                if ( !v61 )
                  v59 |= 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v61 = (v57 & 1) == 0;
              goto LABEL_83;
            }
          }
          *(_QWORD *)v16 = v59;
          if ( v58 )
            MiWritePteShadow(v16, v59, v60);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
          if ( (_DWORD)KiIrqlFlags )
          {
            v62 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v62 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v62 >= 2u )
            {
              v63 = KeGetCurrentPrcb();
              v64 = v63->SchedulerAssist;
              v65 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
              v24 = (v65 & v64[5]) == 0;
              v64[5] &= v65;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick((__int64)v63);
            }
          }
          __writecr8(v38);
          v15 = v86;
          v66 = v92;
LABEL_130:
          v5 = v15 + v66;
          v92 = v5;
          v52 = a5 - v15;
          v88 += v15;
          a5 -= v15;
          goto LABEL_68;
        }
        updated = *(_QWORD *)(v36 + 16);
        v67 = MiUpdatePageFileHighInPte(updated, v56);
        v85 = 0;
        v68 = v67;
        v69 = v67;
        if ( MiPteInShadowRange(v36 + 16) )
        {
          if ( MiPteHasShadow() )
          {
            v71 = 1;
            if ( !HIBYTE(word_140C66CFC) && (v68 & 1) != 0 )
              v69 |= 0x8000000000000000uLL;
LABEL_104:
            *(_QWORD *)(v36 + 16) = v69;
            if ( v71 )
              MiWritePteShadow(v36 + 16, v69, v70);
            if ( (_DWORD)v55 )
              *(_BYTE *)(v36 + 34) &= ~0x10u;
            updated = MiMakeValidPte(v16, v35, 2684354564LL);
            v72 = updated;
            v73 = 0;
            v74 = updated;
            if ( MiPteInShadowRange(v16) )
            {
              if ( MiPteHasShadow() )
              {
                v73 = 1;
                if ( !HIBYTE(word_140C66CFC) )
                {
                  v76 = (v72 & 1) == 0;
LABEL_114:
                  if ( !v76 )
                    v74 |= 0x8000000000000000uLL;
                }
              }
              else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v76 = (v72 & 1) == 0;
                goto LABEL_114;
              }
            }
            *(_QWORD *)v16 = v74;
            if ( v73 )
              MiWritePteShadow(v16, v74, v75);
            v8 = a1;
            v77 = ++*(_DWORD *)(a1 + 208);
            if ( v77 > *(_DWORD *)(a1 + 212) )
              *(_DWORD *)(a1 + 212) = v77;
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
            _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (_DWORD)KiIrqlFlags
              && (v78 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
              && v78 <= 0xFu )
            {
              v79 = v84;
              if ( v84 <= 0xFu && v78 >= 2u )
              {
                v80 = KeGetCurrentPrcb();
                v81 = v80->SchedulerAssist;
                v82 = ~(unsigned __int16)(-1LL << (v84 + 1));
                v24 = (v82 & v81[5]) == 0;
                v81[5] &= v82;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick((__int64)v80);
              }
            }
            else
            {
              v79 = v84;
            }
            __writecr8(v79);
            v15 = v86;
LABEL_129:
            v66 = v92;
            MiWritePageFileHash(v8, v88, v92, v15);
            goto LABEL_130;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v68 & 1) != 0 )
          {
            v69 |= 0x8000000000000000uLL;
          }
        }
        v71 = v85;
        goto LABEL_104;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
      if ( (_DWORD)KiIrqlFlags )
      {
        v39 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v39 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
          v24 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick((__int64)v40);
        }
      }
      __writecr8(v38);
      if ( v35 != -1LL )
        break;
LABEL_67:
      v52 = a5;
      v5 = v92;
LABEL_68:
      v10 = (volatile LONG *)(v8 + 232);
      if ( !v52 )
      {
        if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
          MmUnmapLockedPages(*(PVOID *)(a2 + 24), (PMDL)a2);
        return;
      }
    }
    MiFreePageFileHashPfn(v35);
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      v43 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v43 <= 0xFu && v37 <= 0xFu && v43 >= 2u )
      {
        v44 = KeGetCurrentPrcb();
        v45 = v44->SchedulerAssist;
        v46 = ~(unsigned __int16)(-1LL << (v37 + 1));
        v24 = (v46 & v45[5]) == 0;
        v45[5] &= v46;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick((__int64)v44);
      }
    }
    __writecr8(v37);
    v47 = *(_QWORD *)(v8 + 248);
    MiReturnCommit(v47, 1LL);
    v48 = 1LL;
    if ( (unsigned __int16 *)v47 != MiSystemPartition )
      goto LABEL_65;
    v49 = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)v49->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_65;
    if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
    {
      do
      {
        v51 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&v49->CachedResidentAvailable,
                CachedResidentAvailable + 1,
                CachedResidentAvailable);
        v24 = (_DWORD)CachedResidentAvailable == v51;
        LODWORD(CachedResidentAvailable) = v51;
        if ( v24 )
          goto LABEL_66;
      }
      while ( v51 != -1 && (unsigned __int64)(v51 + 1LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v49->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v48 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    if ( v48 )
LABEL_65:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 17280), v48);
LABEL_66:
    _InterlockedDecrement64(&qword_140C6A228);
    goto LABEL_67;
  }
}
