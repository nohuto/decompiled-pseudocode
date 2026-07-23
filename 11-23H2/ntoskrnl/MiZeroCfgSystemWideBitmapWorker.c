/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x1403483F8
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x1403483A0 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MiLockLeafPage @ 0x140218410 (MiLockLeafPage.c)
 *     MiReleasePageFileSpace @ 0x14021941C (MiReleasePageFileSpace.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiLocatePagefileSubsection @ 0x140273AD0 (MiLocatePagefileSubsection.c)
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiTransferSoftwarePte @ 0x140285A60 (MiTransferSoftwarePte.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetNonResidentPteHeat @ 0x1402D9340 (MiSetNonResidentPteHeat.c)
 *     MiDetermineModifiedPageListHead @ 0x1402D9480 (MiDetermineModifiedPageListHead.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiCapturePageFileInfoInline @ 0x140348F44 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KeZeroSinglePage @ 0x140424990 (KeZeroSinglePage.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiDiscardTransitionPteEx @ 0x140650B74 (MiDiscardTransitionPteEx.c)
 */

void __fastcall MiZeroCfgSystemWideBitmapWorker(unsigned int *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  __int64 v6; // r12
  __int64 v7; // r9
  unsigned int *v8; // r13
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned int *v11; // rax
  __int64 v12; // r10
  unsigned int *v13; // r15
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rdx
  unsigned int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r10
  unsigned __int64 v31; // rbx
  __int16 v32; // r10
  __int64 v33; // r12
  BOOL v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rax
  char v41; // r9
  unsigned int v42; // r8d
  __int64 v43; // rdx
  unsigned __int64 v44; // rbx
  int v45; // edi
  BOOL v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rbx
  size_t v53; // r8
  void *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r12
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rbx
  size_t v59; // r8
  void *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  unsigned __int64 v66; // r10
  unsigned __int64 v67; // r9
  volatile signed __int32 *v68; // r8
  int v69; // esi
  unsigned __int64 v70; // rdx
  bool v71; // zf
  __int64 v72; // [rsp+20h] [rbp-49h]
  unsigned __int64 v73; // [rsp+28h] [rbp-41h]
  __int64 v74; // [rsp+30h] [rbp-39h]
  __int64 v75; // [rsp+38h] [rbp-31h]
  __int64 v76; // [rsp+40h] [rbp-29h] BYREF
  __int64 v77; // [rsp+48h] [rbp-21h]
  __int64 v78; // [rsp+50h] [rbp-19h]
  unsigned __int64 v79; // [rsp+58h] [rbp-11h] BYREF
  unsigned int *v80; // [rsp+60h] [rbp-9h]
  unsigned __int64 v81; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v82; // [rsp+70h] [rbp+7h]
  __int64 v83[9]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int8 v84; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v85; // [rsp+D8h] [rbp+6Fh]
  int v86; // [rsp+E0h] [rbp+77h]
  unsigned int v87; // [rsp+E8h] [rbp+7Fh]

  v3 = a2 >> 3;
  v4 = a3 >> 3;
  v6 = (a2 >> 3) & 0xFFF;
  v7 = *(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF;
  v87 = (a2 >> 3) & 0xFFF;
  v74 = *(_QWORD *)(qword_140C673C8 + 8 * v7);
  v85 = ((a2 >> 3) + v4) & 0xFFF;
  v81 = ((a2 >> 3) + v4 - 1) >> 12;
  v8 = MiLocatePagefileSubsection(a1, &v81);
  v80 = v8;
  v82 = v81;
  v9 = *((_QWORD *)v8 + 1);
  v79 = v3 >> 12;
  v10 = v9 + 8 * v81;
  v11 = MiLocatePagefileSubsection(a1, &v79);
  v12 = 0LL;
  v13 = v11;
  if ( *((_QWORD *)v11 + 1) )
  {
    v14 = v79;
  }
  else
  {
    do
    {
      if ( v13 == v8 )
        return;
      v13 = (unsigned int *)*((_QWORD *)v13 + 2);
      v14 = 0LL;
      v79 = 0LL;
    }
    while ( !*((_QWORD *)v13 + 1) );
  }
  v15 = *((_QWORD *)v13 + 1);
  v16 = v15 + 8 * v14;
  if ( v13 == v8 )
    v17 = v10;
  else
    v17 = v15 + 8LL * v13[11];
  v18 = v85;
  v72 = v17;
  v84 = 17;
  v73 = 0LL;
  v19 = v16 & -(__int64)((_DWORD)v6 != 0);
  v20 = 0LL;
  v78 = 0LL;
  v21 = 0LL;
  v75 = v19;
  v22 = v10 & -(__int64)(v85 != 0);
  v77 = v22;
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
      MiUnlockProtoPoolPage(v20, v84);
      v73 = 0LL;
    }
    v40 = MiLockProtoPoolPage(v16, &v84);
    v12 = 0LL;
    v78 = v40;
    v20 = v40;
    if ( v40 )
    {
      v73 = v16;
LABEL_9:
      v23 = MiLockLeafPage((unsigned __int64 *)v16, 0LL);
      v24 = MI_READ_PTE_LOCK_FREE(v16);
      v83[0] = v24;
      v25 = v24;
      if ( (v24 & 1) != 0 )
      {
        v50 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v83);
        v51 = MiMapPageInHyperSpaceWorker((v50 >> 12) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
        v52 = v51;
        if ( v16 == v19 )
        {
          v53 = 4096 - v87;
          v54 = (void *)(v51 + v87);
          goto LABEL_50;
        }
        v54 = (void *)v51;
        if ( v16 == v22 )
        {
          v53 = v85;
LABEL_50:
          memset(v54, 0, v53);
        }
        else
        {
          KeZeroSinglePage(v51);
        }
        MiUnmapPageInHyperSpaceWorker(v52, 0x11u);
        v55 = MiCaptureDirtyBitToPfn(v23);
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !v55 )
          goto LABEL_29;
        v63 = v55;
        v64 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v23 + 40) >> 43) & 0x3FFLL));
        goto LABEL_79;
      }
      if ( (v24 & 0x400) != 0 )
        goto LABEL_29;
      if ( (v24 & 0x800) == 0 )
      {
        v12 = 0LL;
        if ( v24 && v16 != v19 && v16 != v22 )
        {
          if ( (v24 & 2) != 0 )
          {
            v43 = *(_QWORD *)(v74 + 8LL * ((unsigned __int16)v24 >> 12) + 17056);
            if ( qword_140C65B40 && (v24 & 0x10) == 0 )
              v24 &= ~qword_140C65B40;
            v41 = 2;
            v42 = HIDWORD(v24);
          }
          else
          {
            v41 = 0;
            v42 = 0;
            v43 = 0LL;
          }
          v44 = MiTransferSoftwarePte(v25, v43, v42, v41);
          MiReleasePageFileSpace(v74, v25, 0);
          v45 = 0;
          v46 = MiPteInShadowRange(v16);
          v12 = 0LL;
          if ( v46 )
          {
            if ( (unsigned int)MiPteHasShadow(v48, v47, v49) )
            {
              v45 = 1;
              if ( HIBYTE(word_140C66CFC) != (_BYTE)v12 )
                goto LABEL_46;
              v71 = (v44 & 1) == 0;
            }
            else
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                goto LABEL_46;
              v71 = (v44 & 1) == 0;
            }
            if ( !v71 )
              v44 |= 0x8000000000000000uLL;
          }
LABEL_46:
          *(_QWORD *)v16 = v44;
          if ( v45 )
          {
            MiWritePteShadow(v16, v44);
            goto LABEL_29;
          }
        }
LABEL_30:
        v20 = v78;
        v16 += 8LL;
        v8 = v80;
        v19 = v75;
        goto LABEL_31;
      }
      if ( qword_140C65B40 )
      {
        if ( (v24 & 0x10) != 0 )
          v25 = v24 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v25 = ~qword_140C65B40 & v24;
      }
      v26 = (v25 >> 12) & 0xFFFFFFFFFFLL;
      v27 = 0LL;
      if ( *(_WORD *)(v23 + 32) )
        goto LABEL_28;
      if ( v16 == v75 || v16 == v22 )
      {
        v71 = (*(_BYTE *)(v23 + 34) & 0x10) == 0;
        v86 = 0;
        if ( !v71 )
        {
          v56 = MiDetermineModifiedPageListHead(v23, v74, 0);
          ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v56 + 32));
          goto LABEL_55;
        }
        v86 = 1;
        if ( (MiUnlinkPageFromListEx(v23, 0LL) & 3) == 0 )
        {
          v27 = MiCaptureDirtyBitToPfn(v23);
          v56 = 0LL;
LABEL_55:
          v57 = MiMapPageInHyperSpaceWorker(v26, 0LL, 0x80000000);
          v58 = v57;
          if ( v16 == v75 )
          {
            v59 = 4096 - v87;
            v60 = (void *)(v57 + v87);
          }
          else
          {
            v59 = v85;
            v60 = (void *)v57;
          }
          memset(v60, 0, v59);
          MiUnmapPageInHyperSpaceWorker(v58, 0x11u);
          if ( dword_140C67E4C == 1 )
          {
            v66 = v26 & 0x1F;
            LOBYTE(v67) = 1;
            v68 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67EA0 + 1) + 4 * (v26 >> 5));
            if ( v66 + 1 > 0x20 )
            {
              if ( (v26 & 0x1F) == 0 )
                goto LABEL_102;
              v69 = v26 & 0x1F;
              _InterlockedOr(v68++, ((1 << (32 - v69)) - 1) << v66);
              v67 = 1LL - (unsigned int)(32 - v69);
              if ( v67 >= 0x20 )
              {
                v70 = v67 >> 5;
                v67 += -32LL * (v67 >> 5);
                do
                {
                  *v68++ = -1;
                  --v70;
                }
                while ( v70 );
              }
              if ( v67 )
LABEL_102:
                _InterlockedOr(v68, (1 << v67) - 1);
            }
            else
            {
              _InterlockedOr(v68, 1 << v66);
            }
          }
          if ( v56 )
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v56 + 32));
          if ( v86 )
            MiInsertPageInList(v23, 8u);
LABEL_27:
          v22 = v77;
LABEL_28:
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v27 )
          {
LABEL_29:
            v12 = 0LL;
            goto LABEL_30;
          }
          v64 = v74;
          v63 = v27;
LABEL_79:
          MiReleasePageFileInfo(v64, v63, 1);
          goto LABEL_29;
        }
      }
      else if ( (MiUnlinkPageFromListEx(v23, 0LL) & 3) == 0 )
      {
        v28 = (__int64 *)(v23 + 16);
        v29 = MiCapturePageFileInfoInline(v23 + 16, 0LL, 0LL);
        v30 = *(_QWORD *)(v23 + 16);
        v27 = v29;
        if ( (v30 & 2) != 0 )
        {
          v65 = *(_QWORD *)(v74 + 8LL * ((unsigned __int16)v30 >> 12) + 17056);
          if ( qword_140C65B40 && (v30 & 0x10) == 0 )
            v30 &= ~qword_140C65B40;
          v31 = MiTransferSoftwarePte(*v28, v65, HIDWORD(v30), 2);
        }
        else
        {
          v76 = *v28;
          MiSetNonResidentPteHeat((unsigned __int64 *)&v76, 0);
          v31 = v76;
          if ( (v32 & 0x400) == 0 )
          {
            v31 = v76 & 0xFFFFFFFFFFFFFFF9uLL;
            v76 &= 0xFFFFFFFFFFFFFFF9uLL;
          }
        }
        v33 = 48 * (*(_QWORD *)(v23 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v86 = 0;
        v34 = MiPteInShadowRange(v16);
        v38 = 0LL;
        if ( v34 )
        {
          if ( !(unsigned int)MiPteHasShadow(v35, 0LL, v36) )
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v31 & 1) != 0 )
            {
              v31 |= 0x8000000000000000uLL;
            }
            goto LABEL_23;
          }
          v39 = 1;
          if ( HIBYTE(word_140C66CFC) == (_BYTE)v38 && (v31 & 1) != 0 )
            v31 |= 0x8000000000000000uLL;
        }
        else
        {
LABEL_23:
          v39 = v38;
        }
        *(_QWORD *)v16 = v31;
        if ( v39 )
          MiWritePteShadow(v16, v31);
        MiLockNestedPageAtDpcInline(v33, v38, v36, v37);
        MiDecrementShareCount(v33);
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertPageInFreeOrZeroedList(v26, 2);
        goto LABEL_27;
      }
      MiDiscardTransitionPteEx(v23, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v20 = v78;
      v16 += 8LL;
      v8 = v80;
      v12 = 0LL;
      v17 = v72;
      v19 = v75;
      v21 = v73;
      v18 = v85;
    }
    else
    {
      v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_31:
      v17 = v72;
      v21 = v73;
      v18 = v85;
    }
  }
  while ( v13 != v8 )
  {
    v13 = (unsigned int *)*((_QWORD *)v13 + 2);
    if ( *((_QWORD *)v13 + 1) != v12 )
    {
      v16 = *((_QWORD *)v13 + 1);
      if ( v13 == v8 )
      {
        v61 = *((_QWORD *)v8 + 1) + 8 * v82;
        v62 = v61;
        if ( !v18 )
          v62 = v22;
        v22 = v62;
        v77 = v62;
      }
      else
      {
        v61 = v16 + 8LL * v13[11];
      }
      v72 = v61;
      goto LABEL_7;
    }
  }
  if ( v20 )
    MiUnlockProtoPoolPage(v20, v84);
}
