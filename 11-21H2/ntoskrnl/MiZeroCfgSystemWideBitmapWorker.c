/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x1402710C4
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x140248574 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiDetermineModifiedPageListHead @ 0x14024E640 (MiDetermineModifiedPageListHead.c)
 *     MiLocatePagefileSubsection @ 0x14026F0F0 (MiLocatePagefileSubsection.c)
 *     MiLockLeafPage @ 0x1402738F0 (MiLockLeafPage.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiReleasePageFileSpace @ 0x140274E48 (MiReleasePageFileSpace.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 *     MiSetNonResidentPteHeat @ 0x14033C3A0 (MiSetNonResidentPteHeat.c)
 *     MiTransferSoftwarePte @ 0x140340078 (MiTransferSoftwarePte.c)
 *     MiDiscardTransitionPteEx @ 0x1403941B0 (MiDiscardTransitionPteEx.c)
 *     KeZeroSinglePage @ 0x140424F10 (KeZeroSinglePage.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall MiZeroCfgSystemWideBitmapWorker(unsigned int *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  __int64 v6; // r12
  __int64 v7; // r9
  unsigned int *v8; // r13
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 CurrentThread; // rax
  __int64 v12; // r10
  __int64 v13; // r15
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // r12
  __int64 v23; // r13
  unsigned __int64 v24; // rsi
  ULONG_PTR v25; // rsi
  __int64 v26; // rdi
  unsigned __int64 *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r10
  unsigned __int64 v30; // rbx
  __int16 v31; // r10
  __int64 v32; // r12
  int v33; // eax
  int v34; // edx
  int v35; // eax
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rbx
  int v40; // edi
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  void *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // rbx
  size_t v49; // r8
  void *v50; // rcx
  __int64 v51; // rdx
  size_t v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  ULONG_PTR v57; // r10
  unsigned __int64 v58; // r9
  volatile signed __int32 *v59; // r8
  int v60; // esi
  unsigned __int64 v61; // rdx
  bool v62; // zf
  unsigned __int64 v64; // [rsp+20h] [rbp-49h]
  unsigned __int64 v65; // [rsp+28h] [rbp-41h]
  __int64 v66; // [rsp+30h] [rbp-39h]
  __int64 v67; // [rsp+38h] [rbp-31h]
  unsigned __int64 v68; // [rsp+40h] [rbp-29h] BYREF
  __int64 v69; // [rsp+48h] [rbp-21h]
  __int64 v70; // [rsp+50h] [rbp-19h]
  unsigned __int64 v71; // [rsp+58h] [rbp-11h] BYREF
  unsigned int *v72; // [rsp+60h] [rbp-9h]
  unsigned __int64 v73; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v74; // [rsp+70h] [rbp+7h]
  __int64 v75[9]; // [rsp+78h] [rbp+Fh] BYREF
  char v76; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v77; // [rsp+D8h] [rbp+6Fh]
  int v78; // [rsp+E0h] [rbp+77h]
  unsigned int v79; // [rsp+E8h] [rbp+7Fh]

  v3 = a2 >> 3;
  v4 = a3 >> 3;
  v6 = (a2 >> 3) & 0xFFF;
  v7 = *(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF;
  v79 = (a2 >> 3) & 0xFFF;
  v66 = *(_QWORD *)(qword_140C51F48 + 8 * v7);
  v77 = ((a2 >> 3) + v4) & 0xFFF;
  v73 = ((a2 >> 3) + v4 - 1) >> 12;
  v8 = MiLocatePagefileSubsection(a1, &v73);
  v72 = v8;
  v74 = v73;
  v9 = *((_QWORD *)v8 + 1);
  v71 = v3 >> 12;
  v10 = v9 + 8 * v73;
  CurrentThread = (__int64)MiLocatePagefileSubsection(a1, &v71);
  v12 = 0LL;
  v13 = CurrentThread;
  if ( *(_QWORD *)(CurrentThread + 8) )
  {
    v14 = v71;
  }
  else
  {
    do
    {
      if ( (unsigned int *)v13 == v8 )
        return CurrentThread;
      v13 = *(_QWORD *)(v13 + 16);
      v14 = 0LL;
      v71 = 0LL;
    }
    while ( !*(_QWORD *)(v13 + 8) );
  }
  v15 = *(_QWORD *)(v13 + 8);
  v16 = v15 + 8 * v14;
  if ( (unsigned int *)v13 == v8 )
    v17 = v10;
  else
    v17 = v15 + 8LL * *(unsigned int *)(v13 + 44);
  v18 = v77;
  v64 = v17;
  v76 = 17;
  v65 = 0LL;
  v19 = v16 & -(__int64)((_DWORD)v6 != 0);
  v20 = 0LL;
  LODWORD(CurrentThread) = -v77;
  v70 = 0LL;
  v21 = 0LL;
  v67 = v19;
  v22 = v10 & -(__int64)(v77 != 0);
  v69 = v22;
  while ( v16 < v17 )
  {
LABEL_7:
    if ( (v21 & 0xFFFFFFFFFFFFF000uLL) == (v16 & 0xFFFFFFFFFFFFF000uLL) || !v21 )
    {
      if ( v20 )
        goto LABEL_9;
    }
    else
    {
      LOBYTE(v17) = v76;
      MiUnlockProtoPoolPage(v20, v17);
      v65 = 0LL;
    }
    CurrentThread = MiLockProtoPoolPage(v16, &v76);
    v12 = 0LL;
    v70 = CurrentThread;
    v20 = CurrentThread;
    if ( CurrentThread )
    {
      v65 = v16;
LABEL_9:
      v23 = MiLockLeafPage(v16, 0LL);
      CurrentThread = MI_READ_PTE_LOCK_FREE(v16);
      v75[0] = CurrentThread;
      v24 = CurrentThread;
      if ( (CurrentThread & 1) != 0 )
      {
        v41 = MI_READ_PTE_LOCK_FREE(v75);
        v42 = MiMapPageInHyperSpaceWorker((v41 >> 12) & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL);
        v43 = v42;
        if ( v16 == v19 )
        {
          v52 = 4096 - v79;
          v44 = (void *)(v42 + v79);
        }
        else
        {
          v44 = (void *)v42;
          if ( v16 != v22 )
          {
            KeZeroSinglePage(v42);
LABEL_51:
            LOBYTE(v45) = 17;
            MiUnmapPageInHyperSpaceWorker(v43, v45, 0x80000000LL);
            CurrentThread = MiCaptureDirtyBitToPfn(v23);
            _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !CurrentThread )
              goto LABEL_29;
            v54 = CurrentThread;
            v55 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v23 + 40) >> 43) & 0x3FFLL));
            goto LABEL_79;
          }
          v52 = v77;
        }
        memset(v44, 0, v52);
        goto LABEL_51;
      }
      if ( (CurrentThread & 0x400) != 0 )
        goto LABEL_29;
      if ( (CurrentThread & 0x800) == 0 )
      {
        v12 = 0LL;
        if ( CurrentThread && v16 != v19 && v16 != v22 )
        {
          if ( (CurrentThread & 2) != 0 )
          {
            v38 = *(_QWORD *)(v66 + 8LL * ((unsigned __int16)CurrentThread >> 12) + 16736);
            if ( qword_140C50780 && (CurrentThread & 0x10) == 0 )
              CurrentThread &= ~qword_140C50780;
            v36 = 2LL;
            v37 = HIDWORD(CurrentThread);
          }
          else
          {
            v36 = 0LL;
            v37 = 0LL;
            v38 = 0LL;
          }
          v39 = MiTransferSoftwarePte(v24, v38, v37, v36);
          MiReleasePageFileSpace(v66, v24, 0LL);
          v40 = 0;
          LODWORD(CurrentThread) = MiPteInShadowRange(v16);
          v12 = 0LL;
          if ( (_DWORD)CurrentThread )
          {
            LODWORD(CurrentThread) = MiPteHasShadow();
            if ( (_DWORD)CurrentThread )
            {
              v40 = 1;
              if ( HIBYTE(word_140C51864) != (_BYTE)v12 )
                goto LABEL_42;
              v62 = (v39 & 1) == 0;
            }
            else
            {
              CurrentThread = (__int64)KeGetCurrentThread();
              if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 2172LL) & 0x1000) == 0 )
                goto LABEL_42;
              v62 = (v39 & 1) == 0;
            }
            if ( !v62 )
            {
              LOBYTE(CurrentThread) = 0;
              v39 |= 0x8000000000000000uLL;
            }
          }
LABEL_42:
          *(_QWORD *)v16 = v39;
          if ( v40 )
          {
            LOBYTE(CurrentThread) = MiWritePteShadow(v16, v39);
            goto LABEL_29;
          }
        }
LABEL_30:
        v20 = v70;
        v16 += 8LL;
        v8 = v72;
        v19 = v67;
        goto LABEL_31;
      }
      if ( qword_140C50780 )
      {
        if ( (CurrentThread & 0x10) != 0 )
          v24 = CurrentThread & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v24 = ~qword_140C50780 & CurrentThread;
      }
      v25 = (v24 >> 12) & 0xFFFFFFFFFFLL;
      v26 = 0LL;
      if ( *(_WORD *)(v23 + 32) )
        goto LABEL_28;
      if ( v16 == v67 || v16 == v22 )
      {
        v62 = (*(_BYTE *)(v23 + 34) & 0x10) == 0;
        v78 = 0;
        if ( !v62 )
        {
          v46 = MiDetermineModifiedPageListHead(v23, v66);
          ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v46 + 32));
          goto LABEL_55;
        }
        v78 = 1;
        if ( (MiUnlinkPageFromListEx(v23) & 3) == 0 )
        {
          v26 = MiCaptureDirtyBitToPfn(v23);
          v46 = 0LL;
LABEL_55:
          v47 = MiMapPageInHyperSpaceWorker(v25, 0LL, 0x80000000LL);
          v48 = v47;
          if ( v16 == v67 )
          {
            v49 = 4096 - v79;
            v50 = (void *)(v47 + v79);
          }
          else
          {
            v49 = v77;
            v50 = (void *)v47;
          }
          memset(v50, 0, v49);
          LOBYTE(v51) = 17;
          MiUnmapPageInHyperSpaceWorker(v48, v51, 0x80000000LL);
          if ( dword_140C529CC == 1 )
          {
            v57 = v25 & 0x1F;
            LOBYTE(v58) = 1;
            v59 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (v25 >> 5));
            if ( v57 + 1 > 0x20 )
            {
              if ( (v25 & 0x1F) == 0 )
                goto LABEL_102;
              v60 = v25 & 0x1F;
              _InterlockedOr(v59++, ((1 << (32 - v60)) - 1) << v57);
              v58 = 1LL - (unsigned int)(32 - v60);
              if ( v58 >= 0x20 )
              {
                v61 = v58 >> 5;
                v58 += -32LL * (v58 >> 5);
                do
                {
                  *v59++ = -1;
                  --v61;
                }
                while ( v61 );
              }
              if ( v58 )
LABEL_102:
                _InterlockedOr(v59, (1 << v58) - 1);
            }
            else
            {
              _InterlockedOr(v59, 1 << v57);
            }
          }
          if ( v46 )
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v46 + 32));
          if ( v78 )
            MiInsertPageInList(v23);
LABEL_27:
          v22 = v69;
LABEL_28:
          LOBYTE(CurrentThread) = -1;
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v26 )
          {
LABEL_29:
            v12 = 0LL;
            goto LABEL_30;
          }
          v55 = v66;
          v54 = v26;
LABEL_79:
          LOBYTE(CurrentThread) = MiReleasePageFileInfo(v55, v54, 1LL);
          goto LABEL_29;
        }
      }
      else if ( (MiUnlinkPageFromListEx(v23) & 3) == 0 )
      {
        v27 = (unsigned __int64 *)(v23 + 16);
        v28 = MiCapturePageFileInfoInline((unsigned __int64 *)(v23 + 16), 0, 0);
        v29 = *(_QWORD *)(v23 + 16);
        v26 = v28;
        if ( (v29 & 2) != 0 )
        {
          v56 = *(_QWORD *)(v66 + 8LL * ((unsigned __int16)v29 >> 12) + 16736);
          if ( qword_140C50780 && (v29 & 0x10) == 0 )
            v29 &= ~qword_140C50780;
          v30 = MiTransferSoftwarePte(*v27, v56, HIDWORD(v29), 2LL);
        }
        else
        {
          v68 = *v27;
          MiSetNonResidentPteHeat(&v68, 0LL);
          v30 = v68;
          if ( (v31 & 0x400) == 0 )
          {
            v30 = v68 & 0xFFFFFFFFFFFFFFF9uLL;
            v68 &= 0xFFFFFFFFFFFFFFF9uLL;
          }
        }
        v32 = 48 * (*(_QWORD *)(v23 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v78 = 0;
        v33 = MiPteInShadowRange(v16);
        v34 = 0;
        if ( v33 )
        {
          if ( !(unsigned int)MiPteHasShadow() )
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v30 & 1) != 0 )
            {
              v30 |= 0x8000000000000000uLL;
            }
            goto LABEL_23;
          }
          v35 = 1;
          if ( HIBYTE(word_140C51864) == (_BYTE)v34 && (v30 & 1) != 0 )
            v30 |= 0x8000000000000000uLL;
        }
        else
        {
LABEL_23:
          v35 = v34;
        }
        *(_QWORD *)v16 = v30;
        if ( v35 )
          MiWritePteShadow(v16, v30);
        MiLockNestedPageAtDpcInline(v32);
        MiDecrementShareCount(v32);
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertPageInFreeOrZeroedList(v25);
        goto LABEL_27;
      }
      MiDiscardTransitionPteEx(v23, 0LL);
      LOBYTE(CurrentThread) = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v20 = v70;
      v16 += 8LL;
      v8 = v72;
      v12 = 0LL;
      v17 = v64;
      v19 = v67;
      v18 = v77;
      v21 = v65;
    }
    else
    {
      v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_31:
      v17 = v64;
      v18 = v77;
      v21 = v65;
    }
  }
  while ( (unsigned int *)v13 != v8 )
  {
    v13 = *(_QWORD *)(v13 + 16);
    if ( *(_QWORD *)(v13 + 8) != v12 )
    {
      v16 = *(_QWORD *)(v13 + 8);
      if ( (unsigned int *)v13 == v8 )
      {
        v17 = *((_QWORD *)v8 + 1) + 8 * v74;
        v53 = v17;
        if ( !v18 )
          v53 = v22;
        v22 = v53;
        v69 = v53;
      }
      else
      {
        v17 = v16 + 8LL * *(unsigned int *)(v13 + 44);
      }
      v64 = v17;
      goto LABEL_7;
    }
  }
  if ( v20 )
  {
    LOBYTE(v17) = v76;
    LOBYTE(CurrentThread) = MiUnlockProtoPoolPage(v20, v17);
  }
  return CurrentThread;
}
