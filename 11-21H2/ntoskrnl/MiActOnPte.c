/*
 * XREFs of MiActOnPte @ 0x14033E970
 * Callers:
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
 *     MiLocateCloneAddress @ 0x140234F14 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x1402433D0 (MiRotatedToFrameBuffer.c)
 *     MiUpdateWsleAge @ 0x14024501C (MiUpdateWsleAge.c)
 *     MiUpdatePageTableUseCount @ 0x140257F64 (MiUpdatePageTableUseCount.c)
 *     MiLockLeafPage @ 0x1402738F0 (MiLockLeafPage.c)
 *     MiUpdatePfnPriority @ 0x14027428C (MiUpdatePfnPriority.c)
 *     MiGetVaAge @ 0x140274D80 (MiGetVaAge.c)
 *     MiReleasePageFileSpace @ 0x140274E48 (MiReleasePageFileSpace.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MiSetVaAgeList @ 0x1403171A0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiDemoteCombinedPte @ 0x1403336E0 (MiDemoteCombinedPte.c)
 *     MI_IS_RESET_PTE @ 0x14033B640 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     MiSharedVaToPartition @ 0x14033D80C (MiSharedVaToPartition.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033FD38 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiCheckUserVirtualAddress @ 0x140353858 (MiCheckUserVirtualAddress.c)
 *     MiDiscardTransitionPteEx @ 0x1403941B0 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 *v8; // r15
  unsigned int v9; // edi
  ULONG_PTR **v10; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rbp
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rbx
  int v20; // edi
  ULONG_PTR *v21; // r13
  __int64 v22; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  ULONG_PTR v28; // rbx
  int v29; // ebp
  __int64 v30; // rax
  char v31; // cl
  char v32; // dl
  __int64 v33; // rax
  unsigned __int64 v34; // r14
  __int64 v35; // rcx
  char updated; // al
  __int64 v37; // r8
  __int64 v38; // rax
  char v39; // dl
  __int64 v40; // rax
  __int64 v41; // rax
  char v42; // al
  char v43; // dl
  __int64 v44; // rax
  unsigned int v45; // edx
  ULONG_PTR v46; // rcx
  char v47; // al
  __int64 v48; // rax
  __int64 v49; // rax
  char v50; // di
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // [rsp+20h] [rbp-48h]
  int v56; // [rsp+88h] [rbp+20h] BYREF

  v8 = a8;
  v9 = 0;
  v10 = (ULONG_PTR **)a7;
  v56 = 0;
  CurrentThread = KeGetCurrentThread();
  *a8 = 0LL;
  *v10 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v53 = Process + 1664;
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = a3;
      if ( a4 )
        v16 = (unsigned __int64)a4;
      v17 = MI_READ_PTE_LOCK_FREE(v16);
      a7 = v17;
      v19 = v17;
      if ( (v17 & 1) == 0 )
        break;
      if ( !a4 )
      {
        v24 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&a7) >> 12) & 0xFFFFFFFFFFLL;
        if ( v24 > qword_140C50840 || (*(_QWORD *)(48 * v24 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
          return 3221226548LL;
        v27 = *(_QWORD *)(48 * v24 - 0x220000000000LL + 8);
        v28 = 48 * v24 - 0x220000000000LL;
        if ( (*(_QWORD *)(v28 + 40) & 0x10000000000LL) == 0 && v27 >= 0 && v27 )
        {
          v29 = a5;
          if ( a5 == 1 )
            return 3221226548LL;
          if ( !a5 )
            return 274LL;
        }
        else
        {
          if ( MiLocateCloneAddress(Process, v27 | 0x8000000000000000uLL) )
            return 3221226548LL;
          v29 = a5;
        }
        LODWORD(a8) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&a8, v27, v25, v26);
          while ( *(__int64 *)(v28 + 24) < 0 );
        }
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(a3) )
          goto LABEL_98;
        LOBYTE(v30) = a7;
LABEL_28:
        if ( v29 == 2 )
        {
          if ( !a4 )
            v9 = 1;
          updated = MiUpdatePfnPriority(v28, a6, v9);
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( updated != -1 && !a4 )
            MiUpdateWsleAge(v53, (_QWORD *)a3, updated);
          if ( !_bittest64((const signed __int64 *)(v28 + 40), 0x28u) )
          {
            v37 = *(_QWORD *)(v28 + 8);
            if ( v37 > 0 && !a4 )
              MiDemoteCombinedPte(v53, a3, v37 | 0x8000000000000000uLL);
          }
          return 0LL;
        }
        v31 = *(_BYTE *)(v28 + 34);
        if ( (v31 & 8) == 0 )
        {
          v32 = v31 & 0x10;
          if ( v29 != 1 )
          {
            if ( v32 )
              *(_BYTE *)(v28 + 34) = v31 & 0xEF;
            v33 = MiCapturePageFileInfoInline((unsigned __int64 *)(v28 + 16), 1, 1);
            *v8 = v33;
            if ( v33 )
              *v10 = *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FFLL));
            *(_QWORD *)(v28 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v28 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( a4 || (a7 & 0x42) == 0 )
              return 0LL;
            MiWriteValidPteNewProtection(a3, a7 & 0xFFFFFFFFFFFFFF9DuLL);
            v34 = (__int64)(a3 << 25) >> 16;
            if ( (unsigned __int8)MiGetVaAge(v35, v34) < 7u )
              MiSetVaAgeList(v53, v34, 1u, 1u);
            return 3221225505LL;
          }
          if ( !v32 && (a4 || (v30 & 0x42) == 0) || (v9 = -1073740748, !v32) )
          {
            if ( (*(_DWORD *)(v28 + 16) & 4) == 0 )
              *(_BYTE *)(v28 + 34) = v31 | 0x10;
          }
          if ( MI_IS_RESET_PTE(*(_QWORD *)(v28 + 16)) )
          {
            v49 = MI_READ_PTE_LOCK_FREE(v28 + 16);
            *(_QWORD *)(v28 + 16) = MiUpdatePageFileHighInPte(v49, 0LL);
            goto LABEL_59;
          }
          goto LABEL_112;
        }
LABEL_98:
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return 3221226548LL;
      }
      v28 = MiLockLeafPage(a4, 0LL);
      if ( v28 )
      {
        v30 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a4);
        a7 = v30;
        if ( (v30 & 1) == 0 )
          goto LABEL_87;
        v29 = a5;
        goto LABEL_28;
      }
    }
    if ( (v17 & 0x400) != 0 )
      return 0LL;
    if ( (v17 & 0x800) == 0 )
      break;
    if ( a4 )
      v38 = MiLockLeafPage(a4, 0LL);
    else
      v38 = MiLockTransitionLeafPageEx(a3, 0LL, 0);
    v28 = v38;
    if ( v38 )
    {
      if ( !a4 || (a7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a4), (a7 & 1) == 0) )
      {
        if ( a5 == 2 )
        {
          MiUpdatePfnPriority(v28, a6, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 0LL;
        }
        v39 = *(_BYTE *)(v28 + 34);
        if ( (v39 & 7) == 2 )
        {
          if ( a5 != 1 )
          {
            if ( (v39 & 0x28) == 0 )
            {
              v40 = MiCapturePageFileInfoInline((unsigned __int64 *)(v28 + 16), 1, 1);
              *v8 = v40;
              if ( v40 )
                *v10 = *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FFLL));
              a7 = MiUpdatePageFileHighInPte(*(_QWORD *)(v28 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
              *(_QWORD *)(v28 + 16) = a7;
            }
            goto LABEL_59;
          }
          if ( MI_IS_RESET_PTE(*(_QWORD *)(v28 + 16)) )
          {
            v41 = MI_READ_PTE_LOCK_FREE(v28 + 16);
            *(_QWORD *)(v28 + 16) = MiUpdatePageFileHighInPte(v41, 0LL);
          }
          else
          {
            v9 = -1073740748;
          }
          if ( (*(_DWORD *)(v28 + 16) & 4) != 0 )
          {
LABEL_59:
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return v9;
          }
          v42 = *(_BYTE *)(v28 + 34) | 0x10;
          *(_BYTE *)(v28 + 34) = v42;
          if ( *(_WORD *)(v28 + 32) )
          {
            *(_BYTE *)(v28 + 34) = v42 & 0xF8 | 3;
            goto LABEL_59;
          }
          v47 = MiUnlinkPageFromListEx(v28, 0);
          v46 = v28;
          if ( (v47 & 3) == 0 )
          {
            v45 = 8;
LABEL_81:
            MiInsertPageInList(v46, v45);
            goto LABEL_59;
          }
          MiDiscardTransitionPteEx(v28, 0LL);
        }
        else
        {
          if ( (v39 & 7) != 3 )
            goto LABEL_59;
          if ( a5 != 1 )
          {
            if ( (v39 & 8) != 0 || a5 || (v39 & 0x20) != 0 )
              goto LABEL_59;
            v43 = v39 & 0xEF;
            *(_BYTE *)(v28 + 34) = v43;
            if ( *(_WORD *)(v28 + 32) )
              *(_BYTE *)(v28 + 34) = v43 & 0xF8 | 2;
            else
              MiUnlinkPageFromListEx(v28, 0);
            v44 = MiCapturePageFileInfoInline((unsigned __int64 *)(v28 + 16), 1, 1);
            *v8 = v44;
            if ( v44 )
              *v10 = *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FFLL));
            a7 = MiUpdatePageFileHighInPte(*(_QWORD *)(v28 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
            *(_QWORD *)(v28 + 16) = a7;
            if ( *(_WORD *)(v28 + 32) )
              goto LABEL_59;
            v45 = 4;
            v46 = v28;
            goto LABEL_81;
          }
        }
LABEL_112:
        v9 = -1073740748;
        goto LABEL_59;
      }
LABEL_87:
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  v20 = a5;
  if ( a5 == 2 )
    return 0LL;
  if ( v17 )
  {
    v21 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(Process + 1838));
    if ( a4 )
    {
      if ( a2 )
      {
        v21 = MiSharedVaToPartition(Process + 1664, (__int64)(a3 << 25) >> 16, (unsigned __int64)a4);
      }
      else if ( (*(_DWORD *)(a1 + 48) & 0x200000) != 0 || (v51 = *(_QWORD *)(a1 + 72)) == 0 )
      {
        v21 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(Process + 1838));
      }
      else
      {
        v21 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(*(_QWORD *)v51 + 60LL) & 0x3FF));
      }
    }
    if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v19) )
    {
      if ( v20 != 1 )
      {
        v52 = MiCapturePageFileInfoInline((unsigned __int64 *)&a7, 1, 0);
        *v8 = v52;
        if ( v52 )
        {
          *v10 = v21;
          if ( !a4 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(Process + 1272), 0xFFFFFFFFFFFFFFFFuLL);
            a4 = (unsigned __int64 *)a3;
          }
          v22 = a7;
          goto LABEL_17;
        }
        return 0LL;
      }
    }
    else
    {
      if ( v20 != 1 )
      {
        if ( (v19 & 2) != 0 )
        {
          MiReleasePageFileSpace((__int64)v21, v19, 1);
          v19 &= ~2uLL;
        }
        v22 = MiUpdatePageFileHighInPte(v19, 1LL);
        a7 = v22;
LABEL_15:
        if ( !a4 )
          a4 = (unsigned __int64 *)a3;
LABEL_17:
        *a4 = v22;
        return 0LL;
      }
      if ( MI_IS_RESET_PTE(v19) )
      {
        v48 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&a7);
        v22 = MiUpdatePageFileHighInPte(v48, 0LL);
        a7 = v22;
        goto LABEL_15;
      }
    }
  }
  else if ( !a4 && !a5 && !MiCheckUserVirtualAddress((__int64)(a3 << 25) >> 16, a1, v18, &v56) )
  {
    v50 = v56;
    if ( v56 != 24 )
    {
      MiUpdatePageTableUseCount((__int64)(a3 << 25) >> 16, 1u);
      a7 = (32LL * (v50 & 0x1F)) | MiSwizzleInvalidPte(0x100000000LL) & 0xFFFFFFFFFFFFFC1FuLL;
      *(_QWORD *)a3 = a7;
      return 0LL;
    }
  }
  return 3221226548LL;
}
