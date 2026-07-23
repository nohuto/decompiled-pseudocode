/*
 * XREFs of MiDeleteSystemPagableVm @ 0x1402E96D0
 * Callers:
 *     MmFreePoolMemory @ 0x140212224 (MmFreePoolMemory.c)
 *     MiDeleteBootRange @ 0x1403900D8 (MiDeleteBootRange.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiFreeInitializationCode @ 0x140703D0C (MiFreeInitializationCode.c)
 *     MmReturnChargesToLockPagedPool @ 0x140A30C50 (MmReturnChargesToLockPagedPool.c)
 *     MiUnmapPatchTable @ 0x140A3C460 (MiUnmapPatchTable.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49E14 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020AE38 (MI_PROTO_FORMAT_COMBINED.c)
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     MiInitializeTbFlushStamps @ 0x140212A08 (MiInitializeTbFlushStamps.c)
 *     MiWriteWsle @ 0x140216174 (MiWriteWsle.c)
 *     MiReleasePageFileSpace @ 0x14021941C (MiReleasePageFileSpace.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiAppendWsleCluster @ 0x140273400 (MiAppendWsleCluster.c)
 *     MiTerminateWsleCluster @ 0x140279430 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiDeleteValidSystemPage @ 0x140280AA0 (MiDeleteValidSystemPage.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiDeleteTransitionPte @ 0x1402DD110 (MiDeleteTransitionPte.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402E3C4C (MI_WSLE_LOG_ACCESS.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402E6CC0 (MiPageTableLockIsContended.c)
 *     MiDecrementCombinedPteEx @ 0x1402F3DA8 (MiDecrementCombinedPteEx.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     MiReturnSystemCharges @ 0x140340C88 (MiReturnSystemCharges.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiImageProtoChargedCommit @ 0x14035ED98 (MiImageProtoChargedCommit.c)
 *     MiIsPfnSystemCharged @ 0x1403A654C (MiIsPfnSystemCharged.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiDriverPageIsDangling @ 0x14062CAF8 (MiDriverPageIsDangling.c)
 */

__int64 __fastcall MiDeleteSystemPagableVm(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        struct _KTHREAD *a6)
{
  struct _KTHREAD *v6; // r12
  __int64 v9; // r14
  char v11; // r13
  int v12; // eax
  unsigned __int64 valid; // rdi
  char v14; // r8
  int v15; // r9d
  unsigned __int64 v16; // r15
  __int64 Flink; // rdx
  __int64 v18; // r9
  unsigned __int8 v19; // bl
  __int64 v20; // rbx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r13
  __int64 v23; // rdi
  int v24; // r12d
  unsigned __int64 v25; // r15
  __int64 v26; // rdi
  _KPROCESS *Process; // rcx
  bool v28; // zf
  unsigned __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  ULONG_PTR v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rax
  struct _LIST_ENTRY *v40; // rax
  char v41; // rdx^7
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int8 v49; // [rsp+30h] [rbp-D0h]
  int v51; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v52; // [rsp+48h] [rbp-B8h]
  int v53; // [rsp+58h] [rbp-A8h]
  int v54; // [rsp+5Ch] [rbp-A4h]
  __int64 v55; // [rsp+68h] [rbp-98h] BYREF
  __int64 v56; // [rsp+70h] [rbp-90h]
  int v57; // [rsp+78h] [rbp-88h] BYREF
  int v58; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v59; // [rsp+80h] [rbp-80h]
  __int128 v60; // [rsp+88h] [rbp-78h] BYREF
  __int128 v61; // [rsp+98h] [rbp-68h]
  _QWORD v62[3]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v63; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-38h]
  __int64 v65; // [rsp+D0h] [rbp-30h]
  _QWORD v66[3]; // [rsp+D8h] [rbp-28h] BYREF
  int v67; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v68; // [rsp+F4h] [rbp-Ch]
  __int16 v69; // [rsp+F6h] [rbp-Ah]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  __int64 v71; // [rsp+100h] [rbp+0h]
  __int64 v72; // [rsp+108h] [rbp+8h]
  _BYTE v73[152]; // [rsp+110h] [rbp+10h] BYREF

  v6 = a6;
  v65 = a2;
  v9 = a1;
  v69 = 0;
  v63 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  memset(v73, 0, sizeof(v73));
  v11 = a5;
  v51 = 0;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 56) & 0x800) == 0 )
      goto LABEL_3;
  }
  else if ( (a5 & 0x20) == 0 )
  {
    goto LABEL_3;
  }
  v51 = 1;
LABEL_3:
  v52 = 0LL;
  v53 = 0;
  v12 = 10;
  v58 = a5 & 1;
  valid = 0LL;
  DWORD2(v61) = 10;
  if ( (a5 & 1) == 0 )
  {
    v12 = 14;
    DWORD2(v61) = 14;
  }
  if ( (a5 & 4) != 0 )
    DWORD2(v61) = v12 | 0x10;
  v14 = *(_BYTE *)(v9 + 184) & 7;
  v15 = 0;
  v64 = 0LL;
  v54 = 0;
  if ( (unsigned __int8)(v14 - 3) > 1u )
  {
    if ( (a5 & 2) != 0 && dword_140C67FE8 )
      v53 = 1;
    v15 = 2;
    v54 = 2;
  }
  v56 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(v9 + 174));
  v70 = 20LL;
  v67 = v15;
  v68 = 0;
  v71 = 0LL;
  v72 = 0LL;
  if ( (a5 & 8) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v62[2] = (unsigned int)a4;
    v62[0] = 0LL;
    v62[1] = (__int64)(a3 << 25) >> 16;
    if ( v14 == 4 )
    {
      v62[0] = 6LL;
    }
    else if ( v14 == 3 )
    {
      v62[0] = 4LL;
    }
    else
    {
      v62[0] = v62[0] & 0xFFF0000000000007uLL | (16LL
                                               * *(unsigned int *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25]
                                                                 + 8)) | 7;
    }
    v66[1] = 24LL;
    v66[0] = v62;
    EtwTraceKernelEvent((int)v66, 1, 0x20000001u, 633, 289413892);
  }
  v16 = a3 + 8 * a4;
  v59 = v16;
  v49 = MiLockWorkingSetShared(v9);
  v19 = v49;
  while ( a3 < v16 )
  {
    if ( valid )
    {
      if ( (a3 & 0xFFF) != 0 )
        goto LABEL_13;
      MiFlushTbList(&v67);
      v6->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)v6->Header.WaitListHead.Flink
                                                           + MiTerminateWsleCluster((__int64 *)&v60));
      MiUnlockPageTableInternal(v9, valid);
    }
    valid = MiLockLowestValidPageTable(v9, a3, &v63, v18);
    v52 = valid;
    if ( valid != ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(v9, valid);
      valid = 0LL;
      v52 = 0LL;
      a3 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      continue;
    }
LABEL_13:
    v20 = *(_QWORD *)a3;
    if ( a3 >= 0xFFFFF6FB7DBED000uLL
      && a3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v20 & 1) != 0
      && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v39 = *(_QWORD *)(Flink + 8 * ((a3 >> 3) & 0x1FF));
        Flink = v20 | 0x20;
        if ( (v39 & 0x20) == 0 )
          Flink = *(_QWORD *)a3;
        v20 = Flink;
        if ( (v39 & 0x42) != 0 )
          v20 = Flink | 0x42;
      }
    }
    v55 = v20;
    if ( !v20 )
      goto LABEL_31;
    if ( (v20 & 1) != 0 )
    {
      v21 = (__int64)((a3 << 25) - v64) >> 16;
      v22 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v55) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
      v23 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v22 + 40) >> 43) & 0x3FFLL));
      if ( (a5 & 8) != 0 )
      {
        if ( (unsigned int)MiIsPfnSystemCharged(v22) )
        {
          v57 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v57);
            while ( *(__int64 *)(v22 + 24) < 0 );
          }
          *(_BYTE *)(v22 + 35) &= ~0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v9 = a1;
          if ( v23 == v56 )
            ++v6->Header.WaitListHead.Flink;
        }
        else
        {
          v9 = a1;
        }
        goto LABEL_30;
      }
      v24 = 0;
      v25 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v26 = *(_QWORD *)v25;
      if ( MiPteInShadowRange(v25) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 && (v26 & 1) != 0 && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v40 = Process[1].ProcessListEntry.Flink;
          if ( v40 )
          {
            v41 = HIBYTE(v26);
            v42 = *((_QWORD *)&v40->Flink + ((v25 >> 3) & 0x1FF));
            if ( (v42 & 0x20) == 0 )
              v41 = HIBYTE(v26);
            HIBYTE(v26) = v41;
            if ( (v42 & 0x42) != 0 )
              HIBYTE(v26) = v41;
          }
        }
      }
      if ( (HIBYTE(v26) & 0xF) != 9 )
      {
        v9 = a1;
        if ( v53 )
          MI_WSLE_LOG_ACCESS(a1, a3);
        if ( (HIBYTE(v26) & 0xF) == 8 )
          v24 = 1;
        if ( !(unsigned int)MiAppendWsleCluster((__int64)&v60, a1, a3) )
        {
          a6->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)a6->Header.WaitListHead.Flink
                                                               + MiTerminateWsleCluster((__int64 *)&v60));
          MiAppendWsleCluster((__int64)&v60, a1, a3);
        }
        if ( *(__int64 *)(v22 + 40) < 0 )
        {
          v36 = *(_QWORD *)(v22 + 16);
          if ( (v36 & 0x400) == 0 || (v20 & 0x200) != 0 )
            goto LABEL_68;
          if ( qword_140C65B40 && (v36 & 0x10) == 0 )
            v36 &= ~qword_140C65B40;
          if ( (*(_DWORD *)(*(_QWORD *)(v36 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_68:
            ++a6->QuantumTarget;
        }
        else
        {
          ++a6->QuantumTarget;
        }
        v28 = v24 == 0;
        v6 = a6;
        if ( v28 )
        {
LABEL_29:
          v16 = v59;
LABEL_30:
          v11 = a5;
          goto LABEL_31;
        }
LABEL_60:
        ++*(_QWORD *)&v6->Header.Lock;
        if ( v54 == 2 )
          MiReturnSystemCharges(v56, 1LL, 1LL);
        goto LABEL_29;
      }
      MiWriteWsle((__int64)Process, v21);
      v6 = a6;
      MiDeleteValidSystemPage(a1, a3, a5 & 4 | 0x10, a6);
      if ( v58 )
      {
LABEL_58:
        MiInsertTbFlushEntry((__int64)&v67, v21, 1LL, 0);
        goto LABEL_59;
      }
      v55 = 0LL;
      MiInitializeTbFlushStamps(&v55);
      v43 = v55;
      if ( MiPteInShadowRange(a3) )
      {
        if ( (unsigned int)MiPteHasShadow(v45, v44, v46) )
        {
          if ( !HIBYTE(word_140C66CFC) && (v43 & 1) != 0 )
            v43 |= 0x8000000000000000uLL;
          *(_QWORD *)a3 = v43;
          MiWritePteShadow(a3, v43);
LABEL_137:
          Flink = qword_140C65B40;
          v47 = v55;
          if ( qword_140C65B40 && (v55 & 0x10) == 0 )
            v47 = v55 & ~qword_140C65B40;
          if ( (v47 & 0xFFFFFFFF00000000uLL) == 0 )
            goto LABEL_58;
LABEL_59:
          v9 = a1;
          goto LABEL_60;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v43 & 1) != 0 )
        {
          v43 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a3 = v43;
      goto LABEL_137;
    }
    if ( (v20 & 0x400) != 0 )
    {
      if ( (a5 & 8) != 0 )
        goto LABEL_31;
      if ( (v20 & 2) != 0 )
      {
LABEL_51:
        ++v6->QuantumTarget;
      }
      else if ( MI_PROTO_FORMAT_COMBINED(v20, Flink) )
      {
        ++v6->QuantumTarget;
        if ( qword_140C65B40 && (v20 & 0x10) == 0 )
          v20 &= ~qword_140C65B40;
        v38 = **(_QWORD **)((((v20 >> 16) - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        if ( (unsigned int)MiDecrementCombinedPteEx(v9, v20 >> 16, 0LL) == 3 && v38 == v56 )
          ++v6->Header.WaitListHead.Flink;
      }
      else
      {
        if ( v51 )
          goto LABEL_51;
        if ( qword_140C65B40 && (v20 & 0x10) == 0 )
          v20 &= ~qword_140C65B40;
        if ( (unsigned int)MiImageProtoChargedCommit(v65, v20 >> 16) )
          goto LABEL_51;
      }
      v33 = ZeroPte;
      if ( !MiPteInShadowRange(a3) )
        goto LABEL_53;
      if ( !(unsigned int)MiPteHasShadow(v34, Flink, v35) )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v33 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_53:
        *(_QWORD *)a3 = v33;
        goto LABEL_31;
      }
      if ( !HIBYTE(word_140C66CFC) && (ZeroPte & 1) != 0 )
        v33 = ZeroPte | 0x8000000000000000uLL;
      *(_QWORD *)a3 = v33;
      MiWritePteShadow(a3, v33);
      goto LABEL_31;
    }
    if ( (v20 & 0x800) != 0 )
    {
      v37 = MiLockTransitionLeafPageEx(a3);
      if ( !v37 )
        goto LABEL_34;
      if ( (a5 & 8) != 0 )
      {
        if ( (unsigned int)MiIsPfnSystemCharged(v37) )
        {
          *(_BYTE *)(v48 + 35) &= ~0x20u;
          ++v6->Header.WaitListHead.Flink;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        if ( (a5 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v37) )
        {
          MiDriverPageIsDangling();
          *(_BYTE *)(v37 + 35) &= ~0x20u;
        }
        if ( (unsigned int)MiDeleteTransitionPte(a3, v37, 0x11u, 1) == 3 )
          ++v6->Header.WaitListHead.Flink;
        ++v6->QuantumTarget;
      }
    }
    else if ( (v20 & 0x3E0) != 0 && (v11 & 8) == 0 )
    {
      MiReleasePageFileSpace(v56, v20, 1);
      v30 = ZeroPte;
      if ( !MiPteInShadowRange(a3) )
        goto LABEL_43;
      if ( (unsigned int)MiPteHasShadow(v31, Flink, v32) )
      {
        if ( !HIBYTE(word_140C66CFC) && (ZeroPte & 1) != 0 )
          v30 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)a3 = v30;
        MiWritePteShadow(a3, v30);
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v30 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_43:
        *(_QWORD *)a3 = v30;
      }
      ++v6->QuantumTarget;
    }
LABEL_31:
    a3 += 8LL;
    if ( a3 == v16 || (a3 & 0x78) != 0 )
    {
      valid = v52;
    }
    else
    {
      valid = v52;
      if ( MiWorkingSetIsContended(v9) || (unsigned int)MiPageTableLockIsContended(v9, v52) || KeShouldYieldProcessor() )
      {
        MiFlushTbList(&v67);
        v6->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)v6->Header.WaitListHead.Flink
                                                             + MiTerminateWsleCluster((__int64 *)&v60));
        MiUnlockPageTableInternal(v9, v52);
        v19 = v49;
        MiUnlockWorkingSetShared(v9, v49);
        valid = 0LL;
        v52 = 0LL;
        MiLockWorkingSetShared(v9);
        continue;
      }
    }
LABEL_34:
    v19 = v49;
  }
  MiFlushTbList(&v67);
  if ( valid )
  {
    v6->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)v6->Header.WaitListHead.Flink
                                                         + MiTerminateWsleCluster((__int64 *)&v60));
    MiUnlockPageTableInternal(v9, valid);
  }
  return MiUnlockWorkingSetShared(v9, v19);
}
