/*
 * XREFs of MiActOnPte @ 0x140294364
 * Callers:
 *     MiWalkVaRange @ 0x140293FE4 (MiWalkVaRange.c)
 * Callees:
 *     MiLockLeafPage @ 0x140218410 (MiLockLeafPage.c)
 *     MiReleasePageFileSpace @ 0x14021941C (MiReleasePageFileSpace.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiCheckUserVirtualAddress @ 0x14025B040 (MiCheckUserVirtualAddress.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x140270C70 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     MI_IS_RESET_PTE @ 0x1402855C0 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x1402858CC (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiLocateCloneAddress @ 0x140294828 (MiLocateCloneAddress.c)
 *     MiUpdateWsleAge @ 0x140294844 (MiUpdateWsleAge.c)
 *     MiUpdatePfnPriority @ 0x1402E2640 (MiUpdatePfnPriority.c)
 *     MiSharedVaToPartition @ 0x1402E2A18 (MiSharedVaToPartition.c)
 *     MiGetVaAge @ 0x1402E3CC0 (MiGetVaAge.c)
 *     MiUpdatePageTableUseCount @ 0x1402F2C90 (MiUpdatePageTableUseCount.c)
 *     MiDemoteCombinedPte @ 0x1402F3A44 (MiDemoteCombinedPte.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033ED54 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 *     MiCapturePageFileInfoInline @ 0x140348F44 (MiCapturePageFileInfoInline.c)
 *     MiRotatedToFrameBuffer @ 0x1406333A4 (MiRotatedToFrameBuffer.c)
 *     MiDiscardTransitionPteEx @ 0x140650B74 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        int a5,
        unsigned int a6,
        __int64 *a7,
        __int64 *a8)
{
  int v8; // r14d
  unsigned __int64 v9; // r15
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // rdi
  _KPROCESS *Process; // r13
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  int v17; // r14d
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  ULONG_PTR v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rax
  char v23; // cl
  char v24; // dl
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r9
  char updated; // al
  __int64 v31; // r8
  __int64 v32; // r14
  __int64 v33; // r8
  __int64 v34; // rax
  char v35; // al
  __int64 *v36; // rdi
  __int64 v37; // rax
  unsigned int v38; // edi
  int v39; // r15d
  __int64 v40; // r14
  unsigned __int64 v41; // rax
  __int64 *v42; // rdi
  __int64 v43; // rax
  unsigned int v44; // edx
  ULONG_PTR v45; // rcx
  __int64 v46; // rax
  __int64 *v47; // rsi
  __int64 v48; // rax
  char v49; // al
  char v50; // al
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v56; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int64 *v57; // [rsp+30h] [rbp-10h]
  int v59; // [rsp+98h] [rbp+58h] BYREF

  v8 = 0;
  v59 = 0;
  v9 = (unsigned __int64)a4;
  v10 = a4;
  v11 = a3;
  *a8 = 0LL;
  if ( !a4 )
    v9 = a3;
  *a7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v57 = &Process[1].ActiveProcessors.StaticBitmap[26];
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = MI_READ_PTE_LOCK_FREE(v9);
      v56 = v14;
      v16 = v14;
      if ( (v14 & 1) == 0 )
        break;
      v17 = a5;
      if ( !v10 )
      {
        v18 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v56) >> 12) & 0xFFFFFFFFFFLL;
        if ( v18 > qword_140C65BA0 || ((*(_QWORD *)(48 * v18 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
          return 3221226548LL;
        v20 = 48 * v18 - 0x220000000000LL;
        v21 = *(_QWORD *)(v20 + 8);
        if ( (*(_QWORD *)(v20 + 40) & 0x10000000000LL) == 0 && v21 >= 0 && v21 )
        {
          if ( v17 == 1 )
            return 3221226548LL;
          if ( !v17 )
            return 274LL;
        }
        else if ( MiLocateCloneAddress(Process, v21 | 0x8000000000000000uLL, v19) )
        {
          return 3221226548LL;
        }
        v55 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v55);
          while ( *(__int64 *)(v20 + 24) < 0 );
        }
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(v11) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 3221226548LL;
        }
        LOBYTE(v22) = v56;
LABEL_14:
        if ( v17 == 2 )
        {
          updated = MiUpdatePfnPriority(v20, a6, v10 == 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v32 = (__int64)v57;
          if ( updated != -1 && !v10 )
          {
            LOBYTE(v31) = updated;
            MiUpdateWsleAge(v57, v11, v31);
          }
          if ( !_bittest64((const signed __int64 *)(v20 + 40), 0x28u) )
          {
            v33 = *(_QWORD *)(v20 + 8);
            if ( v33 > 0 && !v10 )
              MiDemoteCombinedPte(v32, v11, v33 | 0x8000000000000000uLL);
          }
          return 0LL;
        }
        v23 = *(_BYTE *)(v20 + 34);
        if ( (v23 & 8) != 0 )
        {
          v38 = -1073740748;
          goto LABEL_46;
        }
        v24 = v23 & 0x10;
        if ( v17 != 1 )
        {
          if ( v24 )
            *(_BYTE *)(v20 + 34) = v23 & 0xEF;
          v25 = MiCapturePageFileInfoInline(v20 + 16, 1LL, 1LL);
          *a8 = v25;
          if ( v25 )
            *a7 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL));
          *(_QWORD *)(v20 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v20 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v10 || (v56 & 0x42) == 0 )
            return 0LL;
          MiWriteValidPteNewProtection(v11, v56 & 0xFFFFFFFFFFFFFF9DuLL);
          v26 = (__int64)(v11 << 25) >> 16;
          if ( (unsigned __int8)MiGetVaAge(v27, v26) < 7u )
          {
            LOBYTE(v28) = 1;
            MiSetVaAgeList((__int64)v57, v26, 1u, v28);
          }
          return 3221225505LL;
        }
        v8 = 0;
        if ( !v24 && (v10 || (v22 & 0x42) == 0) || (v8 = -1073740748, !v24) )
        {
          if ( (*(_DWORD *)(v20 + 16) & 4) == 0 )
            *(_BYTE *)(v20 + 34) = v23 | 0x10;
        }
        if ( MI_IS_RESET_PTE(*(_QWORD *)(v20 + 16)) )
        {
          v46 = MI_READ_PTE_LOCK_FREE(v20 + 16);
          *(_QWORD *)(v20 + 16) = MiUpdatePageFileHighInPte(v46, 0LL);
          goto LABEL_45;
        }
LABEL_106:
        v8 = -1073740748;
        goto LABEL_45;
      }
      v20 = MiLockLeafPage(v10, 0LL);
      if ( v20 )
      {
        v22 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v10);
        v56 = v22;
        if ( (v22 & 1) != 0 )
          goto LABEL_14;
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v8 = 0;
    }
    if ( (v14 & 0x400) != 0 )
      return 0LL;
    if ( (v14 & 0x800) == 0 )
      break;
    if ( v10 )
      v34 = MiLockLeafPage(v10, 0LL);
    else
      v34 = MiLockTransitionLeafPageEx(v11);
    v20 = v34;
    if ( v34 )
    {
      if ( !v10 || (v56 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v10), (v56 & 1) == 0) )
      {
        if ( a5 == 2 )
        {
          MiUpdatePfnPriority(v20, a6, 1LL);
          goto LABEL_45;
        }
        v35 = *(_BYTE *)(v20 + 34);
        if ( (v35 & 7) == 2 )
        {
          if ( a5 != 1 )
          {
            if ( (v35 & 0x28) == 0 )
            {
              v36 = (__int64 *)(v20 + 16);
              v37 = MiCapturePageFileInfoInline(v20 + 16, 1LL, 1LL);
              *a8 = v37;
              if ( v37 )
                *a7 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL));
              v56 = MiUpdatePageFileHighInPte(*v36, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
              *v36 = v56;
            }
            goto LABEL_45;
          }
          v47 = (__int64 *)(v20 + 16);
          if ( MI_IS_RESET_PTE(*(_QWORD *)(v20 + 16)) )
          {
            v48 = MI_READ_PTE_LOCK_FREE(v20 + 16);
            *v47 = MiUpdatePageFileHighInPte(v48, 0LL);
          }
          else
          {
            v8 = -1073740748;
          }
          if ( (*(_DWORD *)v47 & 4) == 0 )
          {
            v49 = *(_BYTE *)(v20 + 34) | 0x10;
            *(_BYTE *)(v20 + 34) = v49;
            if ( *(_WORD *)(v20 + 32) )
            {
              *(_BYTE *)(v20 + 34) = v49 & 0xF8 | 3;
              goto LABEL_45;
            }
            v50 = MiUnlinkPageFromListEx(v20, 0LL);
            v45 = v20;
            if ( (v50 & 3) != 0 )
            {
              MiDiscardTransitionPteEx(v20, 0LL);
              goto LABEL_106;
            }
            v44 = 8;
LABEL_69:
            MiInsertPageInList(v45, v44);
          }
        }
        else if ( (v35 & 7) == 3 )
        {
          if ( a5 == 1 )
          {
            v8 = -1073740748;
            goto LABEL_45;
          }
          if ( (v35 & 8) != 0 || a5 || (v35 & 0x20) != 0 )
            goto LABEL_45;
          if ( *(_WORD *)(v20 + 32) )
            *(_BYTE *)(v20 + 34) = v35 & 0xF8 | 2;
          else
            MiUnlinkPageFromListEx(v20, 0LL);
          v42 = (__int64 *)(v20 + 16);
          *(_BYTE *)(v20 + 34) &= ~0x10u;
          v43 = MiCapturePageFileInfoInline(v20 + 16, 1LL, 1LL);
          *a8 = v43;
          if ( v43 )
            *a7 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL));
          v56 = MiUpdatePageFileHighInPte(*v42, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
          *v42 = v56;
          if ( *(_WORD *)(v20 + 32) )
            goto LABEL_45;
          v44 = 4;
          v45 = v20;
          goto LABEL_69;
        }
LABEL_45:
        v38 = v8;
LABEL_46:
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return v38;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  v39 = a5;
  if ( a5 == 2 )
    return 0LL;
  if ( v14 )
  {
    v40 = *(_QWORD *)(qword_140C673C8 + 8LL * Process[1].IdealProcessor[25]);
    if ( v10 )
    {
      if ( a2 )
      {
        v40 = MiSharedVaToPartition(&Process[1].ActiveProcessors.StaticBitmap[26], (__int64)(v11 << 25) >> 16, v10);
      }
      else if ( (*(_DWORD *)(a1 + 48) & 0x200000) != 0 || (v52 = *(_QWORD *)(a1 + 72)) == 0 )
      {
        v40 = *(_QWORD *)(qword_140C673C8 + 8LL * Process[1].IdealProcessor[25]);
      }
      else
      {
        v40 = *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(*(_QWORD *)v52 + 60LL) & 0x3FF));
      }
    }
    if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v16) )
    {
      if ( v39 != 1 )
      {
        v54 = MiCapturePageFileInfoInline(&v56, 1LL, 0LL);
        *a8 = v54;
        if ( v54 )
        {
          *a7 = v40;
          if ( !v10 )
          {
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[13],
              0xFFFFFFFFFFFFFFFFuLL);
            v10 = (unsigned __int64 *)v11;
          }
          *v10 = v56;
        }
        return 0LL;
      }
    }
    else
    {
      if ( v39 != 1 )
      {
        if ( (v16 & 2) != 0 )
        {
          MiReleasePageFileSpace(v40, v16, 1);
          v16 &= ~2uLL;
        }
        v41 = MiUpdatePageFileHighInPte(v16, 1LL);
        v56 = v41;
LABEL_55:
        if ( v10 )
          v11 = (unsigned __int64)v10;
LABEL_57:
        *(_QWORD *)v11 = v41;
        return 0LL;
      }
      if ( MI_IS_RESET_PTE(v16) )
      {
        v53 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v56);
        v41 = MiUpdatePageFileHighInPte(v53, 0LL);
        v56 = v41;
        goto LABEL_55;
      }
    }
  }
  else if ( !v10 && !a5 && !MiCheckUserVirtualAddress((__int64)(v11 << 25) >> 16, a1, v15, &v59) && v59 != 24 )
  {
    MiUpdatePageTableUseCount((__int64)(v11 << 25) >> 16, 1LL);
    v51 = MiSwizzleInvalidPte(0x100000000LL);
    v41 = (32LL * (v59 & 0x1F)) | v51 & 0xFFFFFFFFFFFFFC1FuLL;
    v56 = v41;
    goto LABEL_57;
  }
  return 3221226548LL;
}
