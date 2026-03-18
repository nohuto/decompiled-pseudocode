/*
 * XREFs of MiDeletePteRun @ 0x1402C8FD0
 * Callers:
 *     MiDeleteEmptyPageTableTail @ 0x140233B60 (MiDeleteEmptyPageTableTail.c)
 *     MiDeleteVaTail @ 0x14032F0E0 (MiDeleteVaTail.c)
 * Callees:
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
 *     MiLocateCloneAddress @ 0x140234F14 (MiLocateCloneAddress.c)
 *     MiDecrementCombinedPte @ 0x1402399A8 (MiDecrementCombinedPte.c)
 *     MiTryDeleteTransitionPte @ 0x140239CA8 (MiTryDeleteTransitionPte.c)
 *     MiDoubleUnlockMdlPage @ 0x14025C03C (MiDoubleUnlockMdlPage.c)
 *     MiIsPfnLocked @ 0x14025C930 (MiIsPfnLocked.c)
 *     MiGetPfnPriority @ 0x140273234 (MiGetPfnPriority.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiReleasePageFileSpace @ 0x140274E48 (MiReleasePageFileSpace.c)
 *     MiInsertProtectedStandbyPage @ 0x140276D2C (MiInsertProtectedStandbyPage.c)
 *     MiIdentifyPfn @ 0x1402B1E40 (MiIdentifyPfn.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteBatch @ 0x1402C9E70 (MiDeleteBatch.c)
 *     MiMakeProtoTransition @ 0x1402CBAF0 (MiMakeProtoTransition.c)
 *     MiDeleteClusterPage @ 0x1402CC0F0 (MiDeleteClusterPage.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x1402E76C0 (MiGetPagingFileOffset.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033FD38 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiShowBadMapper @ 0x140593B18 (MiShowBadMapper.c)
 *     MiBadShareCount @ 0x1405AD6C8 (MiBadShareCount.c)
 *     MiWriteTopLevelPxe @ 0x1405AE8FC (MiWriteTopLevelPxe.c)
 *     MiDecrementCloneBlockReference @ 0x1405BA498 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeletePteRun(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r12
  __int64 v4; // rdx
  ULONG_PTR v5; // rsi
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r9
  unsigned int v9; // r14d
  __int64 v10; // rcx
  ULONG_PTR v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rbx
  int v14; // r15d
  unsigned __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  ULONG_PTR v25; // r15
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  ULONG_PTR v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v33; // rdx
  char v34; // cl
  __int64 v35; // r15
  __int64 v36; // r8
  _BOOL8 v37; // rdx
  int v38; // r15d
  BOOL v39; // r12d
  __int64 v40; // r8
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  char v43; // al
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // r8
  _QWORD *v47; // rcx
  __int64 v48; // rbx
  BOOL v49; // eax
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rbx
  __int64 v53; // rax
  unsigned __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // r9
  __int64 result; // rax
  ULONG_PTR v58; // r9
  unsigned __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  char v63; // al
  unsigned __int64 v64; // r8
  int v65; // eax
  unsigned int v66; // edx
  __int64 v67; // r8
  int v68; // eax
  char v69; // al
  char v70; // al
  int PagingFileOffset; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v73; // rax
  struct _LIST_ENTRY *v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  struct _LIST_ENTRY *v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  ULONG_PTR v83; // rbx
  unsigned __int64 v84; // rbx
  unsigned int v85; // [rsp+30h] [rbp-D0h]
  BOOL v86; // [rsp+34h] [rbp-CCh] BYREF
  int v87; // [rsp+38h] [rbp-C8h]
  __int64 v88; // [rsp+40h] [rbp-C0h]
  _QWORD *v89; // [rsp+48h] [rbp-B8h]
  char v90; // [rsp+50h] [rbp-B0h]
  int v91; // [rsp+54h] [rbp-ACh]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  int v94; // [rsp+68h] [rbp-98h]
  __int64 v95; // [rsp+70h] [rbp-90h]
  __int64 v96; // [rsp+78h] [rbp-88h] BYREF
  __int64 v97; // [rsp+80h] [rbp-80h]
  int v98; // [rsp+88h] [rbp-78h] BYREF
  int v99; // [rsp+8Ch] [rbp-74h] BYREF
  int v100; // [rsp+90h] [rbp-70h] BYREF
  __int64 v101; // [rsp+98h] [rbp-68h]
  ULONG_PTR v102; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v103; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v104; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v105; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v106; // [rsp+C0h] [rbp-40h]
  __int64 v107; // [rsp+C8h] [rbp-38h]
  __int64 v108; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v109; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v110; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v111; // [rsp+F0h] [rbp-10h]
  _QWORD v112[18]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v113[2]; // [rsp+190h] [rbp+90h] BYREF

  v88 = a1;
  v111 = 0LL;
  v110 = 0LL;
  memset(v112, 0, sizeof(v112));
  v3 = *(_QWORD **)(a2 + 16);
  v4 = *(unsigned int *)(a2 + 104);
  v5 = *(_QWORD *)a2;
  v90 = *(_BYTE *)(a2 + 108);
  v102 = *(_QWORD *)(a2 + 8);
  v104 = *(_QWORD *)(a2 + 88);
  v89 = v3;
  v85 = v4;
  v6 = 0LL;
  v107 = 0LL;
  v7 = (__int64)(v5 << 25) >> 16;
  v8 = 1LL;
  v86 = v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL;
  if ( (*(_BYTE *)(v88 + 184) & 7) != 0 )
  {
    v97 = 0LL;
  }
  else
  {
    v97 = v88 - 1664;
    v6 = v107;
  }
  v9 = 0;
  v10 = *(unsigned __int16 *)(v88 + 174);
  v11 = 0LL;
  v91 = 0;
  v101 = *(_QWORD *)(qword_140C51F48 + 8 * v10);
  v87 = 0;
  v95 = 0LL;
  v103 = 0LL;
  if ( v5 <= v102 )
  {
    v12 = v88;
    v8 = 0xFFFFF6FB7DBED000uLL;
    while ( 1 )
    {
      v13 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL
        && v5 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v73 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
          if ( (v73 & 0x20) != 0 )
            v13 |= 0x20uLL;
          if ( (v73 & 0x42) != 0 )
            v13 |= 0x42uLL;
        }
        v4 = v85;
      }
      if ( v13 )
      {
        v14 = v4 & 0x80;
        v94 = v14;
        if ( (v4 & 0x80) != 0 && (v5 < 0xFFFFF6FB7DBED000uLL || v5 > 0xFFFFF6FB7DBEDFFFuLL) )
        {
          v87 = ++v9;
          if ( !v11 )
          {
            v59 = ((((__int64)((v5 << 25) - v6) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
            v60 = *(_QWORD *)v59;
            if ( v59 >= 0xFFFFF6FB7DBED000uLL
              && v59 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v60 & 1) != 0
              && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
            {
              v74 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v74 )
              {
                v75 = *((_QWORD *)&v74->Flink + ((v59 >> 3) & 0x1FF));
                if ( (v75 & 0x20) != 0 )
                  v60 |= 0x20uLL;
                if ( (v75 & 0x42) != 0 )
                  v60 |= 0x42uLL;
              }
            }
            v108 = v60;
            v103 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v108) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          }
        }
        if ( (v13 & 0x400) != 0 )
        {
          v105 = 0LL;
          BugCheckParameter2 = 0LL;
          BugCheckParameter3 = v13 & 0xFFFFFFFFFFFFFBFEuLL | 1;
          v15 = 0LL;
          v106 = 0LL;
          v16 = 0LL;
          v18 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&BugCheckParameter3) >> 12) & 0xFFFFFFFFFFLL;
          if ( v18 > qword_140C50840 )
            goto LABEL_194;
          v20 = 48 * v18;
          if ( !_bittest64((const signed __int64 *)(48 * v18 - 0x21FFFFFFFFD8LL), 0x36u) )
            goto LABEL_194;
          v21 = v20 - 0x220000000000LL;
          if ( (v85 & 0x60) != 0 && !v86 )
          {
            MiDeleteBatch(v112, v17, v6, v19);
            if ( !(unsigned int)MiIsPfnLocked(v20 - 0x220000000000LL) )
              MiShowBadMapper(v18, 0LL);
            if ( (v85 & 0x40) != 0 )
              MiDoubleUnlockMdlPage(v20 - 0x220000000000LL);
LABEL_193:
            v29 = 48 * MiGetContainingPageTable(v5) - 0x220000000000LL;
            v39 = 0;
            v38 = 4;
LABEL_70:
            if ( v29 )
            {
              v100 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v100);
                while ( *(__int64 *)(v29 + 24) < 0 );
              }
              if ( (*(_BYTE *)(v29 + 34) & 7) != 6 )
                MiBadShareCount(v29, v37, v40, v32);
              v51 = (*(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
              *(_QWORD *)(v29 + 24) ^= (*(_QWORD *)(v29 + 24) ^ v51) & 0x3FFFFFFFFFFFFFFFLL;
              if ( !v51 )
                MiPfnShareCountIsZero(v29, 0LL);
              _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            if ( v16 )
              MiReleasePageFileInfo(v95, v16, 1LL);
            if ( v105 )
            {
              v68 = MiDecrementCombinedPte(v97 + 1664, v105);
            }
            else
            {
              if ( !BugCheckParameter2 )
                goto LABEL_80;
              v68 = MiDecrementCloneBlockReference(BugCheckParameter2, v106);
            }
            v38 = v68;
LABEL_80:
            if ( !v39 )
            {
              if ( v38 == 3 )
              {
                if ( (*(_BYTE *)(v88 + 184) & 7) == 0 || v95 == v101 )
                  ++v89[1];
              }
              else if ( v38 == 5 )
              {
                ++v89[3];
              }
            }
            if ( (*(_BYTE *)(v88 + 184) & 7) != 0 )
              ++*v89;
            if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBEDFFFuLL && (*(_BYTE *)(v88 + 184) & 7) != 0 )
            {
              MiWriteTopLevelPxe(v5, ZeroPte);
              goto LABEL_89;
            }
            v52 = ZeroPte;
            if ( !(unsigned int)MiPteInShadowRange(v5) )
            {
LABEL_88:
              *(_QWORD *)v5 = v52;
              goto LABEL_89;
            }
            if ( !(unsigned int)MiPteHasShadow() )
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v52 = ZeroPte | 0x8000000000000000uLL;
              }
              goto LABEL_88;
            }
            if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
              v52 = ZeroPte | 0x8000000000000000uLL;
LABEL_177:
            *(_QWORD *)v5 = v52;
            MiWritePteShadow(v5, v52);
            goto LABEL_89;
          }
          if ( v20 == 0x220000000000LL )
          {
LABEL_194:
            MiDeleteBatch(v112, v17, v6, v19);
            MiDereferenceIoPages(1, v18, 1uLL);
            goto LABEL_193;
          }
          if ( (*(_BYTE *)(v88 + 184) & 7) == 0
            && !v86
            && (v18 & 0xF) == 0
            && ((__int64)(v102 - v5) >> 3) + 1 >= 16
            && (unsigned int)MiDeleteClusterPage(v5) )
          {
            v9 = v87;
            if ( v14 )
            {
              v9 = v87 + 15;
              v87 += 15;
            }
            v5 += 120LL;
            goto LABEL_90;
          }
          v22 = *(_QWORD *)(v21 + 8);
          v23 = *(_QWORD *)(v21 + 40);
          v24 = v22 | 0x8000000000000000uLL;
          if ( v23 >= 0 )
          {
            if ( v21 == qword_140C53270 )
            {
              v52 = ZeroPte;
              if ( (unsigned int)MiPteInShadowRange(v5) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
                    v52 = ZeroPte | 0x8000000000000000uLL;
                  goto LABEL_177;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (ZeroPte & 1) != 0 )
                {
                  v52 = ZeroPte | 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)v5 = v52;
LABEL_89:
              v9 = v87;
LABEL_90:
              v3 = v89;
              goto LABEL_91;
            }
            v45 = MiDeleteBatch(v112, v22, v6, v19);
            v47 = v89;
            v89[1] += v45;
            if ( v24 != v5 )
              KeBugCheckEx(0x1Au, 0x403uLL, v5, BugCheckParameter3, *(_QWORD *)(v21 + 8));
            v33 = 0xFFFFFFFFFFLL;
            v48 = 48 * (*(_QWORD *)(v21 + 40) & 0xFFFFFFFFFFLL);
            ++v47[4];
            v32 = 0LL;
            v29 = v48 - 0x220000000000LL;
            v98 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v98);
                while ( *(__int64 *)(v21 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
              v32 = 0LL;
            }
            v49 = v86;
            v35 = v88;
            if ( v86 )
            {
              if ( (*(_BYTE *)(v88 + 184) & 7) == 1
                && v5 >= 0xFFFFF6FB7DBED000uLL
                && v5 <= 0xFFFFF6FB7DBEDFFFuLL
                && (*(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 2 )
              {
                MiDecrementShareCount(v20 - 0x220000000000LL, v33, v46, 0LL);
                v32 = 0LL;
                v29 = 0LL;
              }
              v49 = v86;
            }
            *(_QWORD *)(v21 + 24) |= 0x4000000000000000uLL;
            if ( v90 && v49 )
            {
              v110 = 0LL;
              v111 = 0LL;
              MiIdentifyPfn((__m128i *)(v20 - 0x220000000000LL), &v110);
              v32 = 0LL;
              v91 = 1;
            }
            if ( (*(_BYTE *)(v35 + 184) & 7) != 0 && ((*(_QWORD *)(v21 + 40) >> 60) & 7) == 2 )
            {
              MiSetPfnIdentity(v20 - 0x220000000000LL, 0LL);
              v32 = 0LL;
            }
          }
          else
          {
            if ( v22 >= 0 && (v23 & 0x10000000000LL) == 0 && v22 )
            {
              v105 = *(_QWORD *)(v21 + 8) | 0x8000000000000000uLL;
              v15 = v22 | 0x8000000000000000uLL;
              v89[1] += MiDeleteBatch(v112, v22, v6, v19);
              goto LABEL_29;
            }
            if ( v5 <= 0xFFFFF6BFFFFFFF78uLL && v5 >= 0xFFFFF68000000000uLL && *(_QWORD *)(v97 + 1264) )
            {
              v106 = *(_QWORD *)(v21 + 8) | 0x8000000000000000uLL;
              BugCheckParameter2 = (ULONG_PTR)MiLocateCloneAddress(v97, v106);
              v25 = BugCheckParameter2;
              if ( BugCheckParameter2 )
                v89[1] += MiDeleteBatch(v112, v76, v77, v78);
            }
            else
            {
LABEL_29:
              v25 = 0LL;
            }
            v26 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v27 = *(_QWORD *)v26;
            if ( v26 >= 0xFFFFF6FB7DBED000uLL
              && v26 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v27 & 1) != 0
              && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
            {
              v79 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v79 )
              {
                v80 = *((_QWORD *)&v79->Flink + ((v26 >> 3) & 0x1FF));
                if ( (v80 & 0x20) != 0 )
                  v27 |= 0x20uLL;
                if ( (v80 & 0x42) != 0 )
                  v27 |= 0x42uLL;
              }
            }
            v109 = v27;
            v29 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v109) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            if ( !LOBYTE(v112[0]) )
              goto LABEL_32;
            if ( v29 != v112[1]
              || *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL)) != v101
              || _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
            {
              v89[1] += MiDeleteBatch(v112, v28, v30, v31);
            }
            v33 = LOBYTE(v112[0]);
            if ( LOBYTE(v112[0]) )
            {
              v32 = 0LL;
            }
            else
            {
LABEL_32:
              v32 = 0LL;
              v112[1] = v29;
              v99 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v99);
                  while ( *(__int64 *)(v21 + 24) < 0 );
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
                v33 = LOBYTE(v112[0]);
                v32 = 0LL;
              }
              else
              {
                v33 = LOBYTE(v112[0]);
              }
            }
            if ( (*(_BYTE *)(v88 + 184) & 7) == 0 )
            {
              v34 = *(_BYTE *)(v21 + 34);
              if ( (v34 & 7) == 6
                && (*(_DWORD *)(v21 + 16) & 0x400LL) == 0
                && ((BugCheckParameter3 & 0x42) != 0 || (v34 & 0x10) != 0)
                && !v15
                && !v25 )
              {
                v112[(unsigned __int8)v33 + 2] = BugCheckParameter3;
                if ( !LOBYTE(v112[0]) )
                  v95 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL));
                v54 = ZeroPte;
                if ( (unsigned int)MiPteInShadowRange(v5) )
                {
                  if ( !(unsigned int)MiPteHasShadow() )
                  {
                    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                      && (ZeroPte & 1) != 0 )
                    {
                      v54 = ZeroPte | 0x8000000000000000uLL;
                    }
                    goto LABEL_108;
                  }
                  if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
                    v54 = ZeroPte | 0x8000000000000000uLL;
                  *(_QWORD *)v5 = v54;
                  MiWritePteShadow(v5, v54);
                }
                else
                {
LABEL_108:
                  *(_QWORD *)v5 = v54;
                }
                if ( ++LOBYTE(v112[0]) != 16 )
                  goto LABEL_89;
                v3 = v89;
                v9 = v87;
                v89[1] += MiDeleteBatch(v112, v55, v6, v56);
LABEL_91:
                v12 = v88;
                goto LABEL_92;
              }
            }
            if ( (_BYTE)v33 )
            {
              BYTE1(v112[0]) = 1;
              v81 = MiDeleteBatch(v112, v33, v30, 0LL);
              BYTE1(v112[0]) = 0;
              v89[1] += v81;
              v32 = 0LL;
            }
            v35 = v88;
          }
          v36 = *(unsigned __int8 *)(v21 + 34);
          if ( (v36 & 7) != 6 )
            MiBadShareCount(v20 - 0x220000000000LL, v33, v36, 0LL);
          v95 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL));
          if ( (BugCheckParameter3 & 0x42) != 0 )
          {
            v16 = 0LL;
            if ( (v36 & 0x10) == 0 )
            {
              if ( (!_bittest64((const signed __int64 *)(v21 + 16), 0xAu) & (unsigned __int8)~((unsigned __int8)v36 >> 3)) != 0 )
              {
                v53 = MiCapturePageFileInfoInline((unsigned __int64 *)(v21 + 16), 1, 0);
                LOBYTE(v36) = *(_BYTE *)(v21 + 34);
                v16 = v53;
                v32 = 0LL;
              }
              *(_BYTE *)(v21 + 34) = v36 | 0x10;
            }
          }
          if ( (*(_BYTE *)(v35 + 184) & 7) != 0 && *(__int64 *)(v21 + 40) < 0 )
          {
            v82 = *(_QWORD *)(v21 + 16);
            if ( (v82 & 0x400) == 0 || (BugCheckParameter3 & 0x200) != 0 )
              goto LABEL_265;
            if ( qword_140C50780 && (v82 & 0x10) == 0 )
              v82 &= ~qword_140C50780;
            if ( (*(_DWORD *)(*(_QWORD *)(v82 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_265:
              ++v89[4];
          }
          v37 = v86;
          v38 = 4;
          v39 = 0;
          if ( v86 && v94 )
            v39 = (*(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000;
          v40 = 0x3FFFFFFFFFFFFFFFLL;
          v41 = *(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v21 + 24) = v41;
          if ( (v41 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
          {
            if ( v37 )
            {
              v38 = 2;
              if ( (v85 & 0x100) == 0 )
                *(_QWORD *)v21 &= ~1uLL;
            }
          }
          else
          {
            if ( *(__int64 *)(v21 + 40) < 0 )
            {
              MiMakeProtoTransition(v20 - 0x220000000000LL, 1LL);
              v41 = *(_QWORD *)(v21 + 24);
              v32 = 0LL;
              v37 = v86;
            }
            --*(_WORD *)(v21 + 32);
            v42 = (v41 >> 62) & 1;
            if ( *(_WORD *)(v21 + 32) )
            {
              v69 = *(_BYTE *)(v21 + 34);
              if ( (_DWORD)v42 )
              {
                v70 = v69 | 7;
              }
              else if ( (v69 & 0x10) != 0 )
              {
                v70 = v69 & 0xF8 | 3;
              }
              else
              {
                v70 = v69 & 0xF8 | 2;
              }
              *(_BYTE *)(v21 + 34) = v70;
              if ( (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 )
              {
                PagingFileOffset = MiGetPagingFileOffset(v21 + 16);
                v37 = v86;
                if ( PagingFileOffset )
                  *(_BYTE *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL)) + 699LL) = 1;
              }
              v38 = 3;
              if ( v37 && v94 )
                v39 = 1;
              if ( *(__int64 *)(v21 + 40) < 0 )
                v38 = 4;
            }
            else if ( (_DWORD)v42 )
            {
              v43 = *(_BYTE *)(v21 + 35);
              if ( (v43 & 0x10) != 0 )
                *(_BYTE *)(v21 + 35) = v43 & 0xEF;
              v44 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL));
              v96 = *(_QWORD *)(v21 + 16);
              if ( (v96 & 0x400) == 0 )
              {
                if ( (v96 & 4) != 0 || (v96 & 2) != 0 )
                {
                  v50 = MI_READ_PTE_LOCK_FREE(&v96);
                  v96 = v50;
                  if ( v50 )
                    MiReleasePageFileInfo(v44, v50, 0LL);
                }
                else
                {
                  v96 = 0LL;
                }
              }
              MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * (v20 >> 4), 2);
              v38 = 4;
            }
            else
            {
              v61 = *(_QWORD *)(v21 + 16);
              v62 = -9LL;
              if ( (v61 & 0x400) != 0 )
                v62 = -2049LL;
              *(_QWORD *)(v21 + 16) = v61 & v62;
              v63 = *(_BYTE *)(v21 + 34);
              if ( (v63 & 0x10) != 0 )
              {
                v66 = 8;
                if ( v104 == 1 )
                  v66 = 136;
                MiInsertPageInList(v20 - 0x220000000000LL, v66);
              }
              else
              {
                v64 = v104;
                *(_BYTE *)(v21 + 34) = v63 & 0xF8 | 2;
                if ( v64 <= 1 || (unsigned int)MiGetPfnPriority(v20 - 0x220000000000LL) >= 5 )
                  MiInsertPageInList(v20 - 0x220000000000LL, 4u);
                else
                  MiInsertProtectedStandbyPage(v67, v20 - 0x220000000000LL);
              }
            }
          }
          if ( v39 )
            MiChargeCommit(v95, 1LL, 4LL);
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v91 )
          {
            v113[1] = 24LL;
            v113[0] = &v110;
            EtwTraceKernelEvent((unsigned int)v113, 1, 536870913, 631, 289413892);
            v91 = 0;
          }
          goto LABEL_70;
        }
        v3[1] += MiDeleteBatch(v112, v4, v6, v8);
        v65 = MiTryDeleteTransitionPte(v5);
        if ( v65 == 1 )
        {
          BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v5);
          v83 = BugCheckParameter3;
          MiReleasePageFileSpace(v101, BugCheckParameter3, 1);
          if ( (*(_BYTE *)(v12 + 184) & 7) != 0 )
          {
            ++v3[4];
            ++*v3;
          }
          else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v83) )
          {
            ++v3[4];
          }
          v84 = ZeroPte;
          if ( (unsigned int)MiPteInShadowRange(v5) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
                v84 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)v5 = v84;
              MiWritePteShadow(v5, v84);
              goto LABEL_92;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v84 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v5 = v84;
LABEL_92:
          v4 = v85;
          v8 = 0xFFFFF6FB7DBED000uLL;
          goto LABEL_9;
        }
        ++v3[4];
        if ( (*(_BYTE *)(v12 + 184) & 7) != 0 )
          ++*v3;
        v4 = v85;
        v8 = 0xFFFFF6FB7DBED000uLL;
        if ( v65 == 3 )
          ++v3[1];
      }
LABEL_9:
      v11 = v103;
      v5 += 8LL;
      if ( v5 > v102 )
        break;
      v6 = v107;
    }
  }
  result = MiDeleteBatch(v112, v4, v6, v8);
  if ( v9 )
  {
    v58 = HIWORD(*(_DWORD *)(v11 + 16)) & 0x3FF;
    result = v9;
    if ( v58 < v9 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v11, v58, v9);
    v86 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
      {
        KeYieldProcessorEx(&v86);
        result = *(_QWORD *)(v11 + 24);
      }
      while ( result < 0 );
    }
    *(_QWORD *)(v11 + 16) ^= ((unsigned int)*(_QWORD *)(v11 + 16) ^ (((unsigned int)(*(_QWORD *)(v11 + 16) >> 16) - v9) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
