/*
 * XREFs of MiDeletePteList @ 0x1402D26E0
 * Callers:
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiDeletePteWsleCluster @ 0x140280940 (MiDeletePteWsleCluster.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     MiPfnShareCountIsZero @ 0x140281B50 (MiPfnShareCountIsZero.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiTransferSoftwarePte @ 0x140285A60 (MiTransferSoftwarePte.c)
 *     MiLocateCloneAddress @ 0x140294828 (MiLocateCloneAddress.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiMakeProtoTransition @ 0x1402D9020 (MiMakeProtoTransition.c)
 *     MiSetNonResidentPteHeat @ 0x1402D9340 (MiSetNonResidentPteHeat.c)
 *     MiGetContainingPageTable @ 0x1402E1500 (MiGetContainingPageTable.c)
 *     MiGetUsedPtesHandle @ 0x1402E5D00 (MiGetUsedPtesHandle.c)
 *     MiGetPagingFileOffset @ 0x1402F2AF4 (MiGetPagingFileOffset.c)
 *     MiDecrementCombinedPteEx @ 0x1402F3DA8 (MiDecrementCombinedPteEx.c)
 *     MiReducePteUseCount @ 0x14033B2D0 (MiReducePteUseCount.c)
 *     MiDecreaseUsedPtesCount @ 0x14033B320 (MiDecreaseUsedPtesCount.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14034F6B4 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiReduceShareCount @ 0x1403680B4 (MiReduceShareCount.c)
 *     MiBadShareCount @ 0x14064DBDC (MiBadShareCount.c)
 *     MiDecrementCloneBlockReference @ 0x14066429C (MiDecrementCloneBlockReference.c)
 */

__int64 MiDeletePteList(int *a1, __int64 a2, __int64 a3, ...)
{
  int v3; // edx
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  signed __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r13
  ULONG_PTR v17; // rbp
  __int64 v18; // r15
  __int64 ContainingPageTable; // r13
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // r15
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // r8
  bool v34; // zf
  ULONG_PTR v35; // rbx
  __int64 v36; // rdx
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v39; // rbx
  __int64 v40; // r10
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // r14
  bool v44; // r15
  unsigned __int64 v45; // rbx
  int v46; // eax
  __int64 v47; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v49; // rcx
  char v50; // al
  char v51; // al
  char v52; // cl
  unsigned int v53; // edx
  _QWORD *CloneAddress; // rax
  ULONG_PTR v55; // rdx
  unsigned __int64 v56; // rdx
  unsigned int v57; // [rsp+20h] [rbp-98h]
  ULONG_PTR BugCheckParameter4; // [rsp+24h] [rbp-94h]
  unsigned __int64 v59; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v60; // [rsp+38h] [rbp-80h]
  unsigned __int64 v61; // [rsp+40h] [rbp-78h] BYREF
  int v62; // [rsp+48h] [rbp-70h] BYREF
  int v63; // [rsp+4Ch] [rbp-6Ch] BYREF
  int v64; // [rsp+50h] [rbp-68h] BYREF
  __int64 v65; // [rsp+58h] [rbp-60h]
  __int64 v66; // [rsp+60h] [rbp-58h]
  __int64 v67; // [rsp+68h] [rbp-50h]
  unsigned __int64 v68; // [rsp+70h] [rbp-48h]
  __int64 v69; // [rsp+78h] [rbp-40h]
  int *v70; // [rsp+C0h] [rbp+8h]
  __int64 v72; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  __int64 v74; // [rsp+E0h] [rbp+28h]
  va_list va1; // [rsp+E8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v72 = va_arg(va1, _QWORD);
  v74 = va_arg(va1, _QWORD);
  v70 = a1;
  v3 = a1[3];
  v4 = 0;
  v65 = 0LL;
  v5 = v72;
  BugCheckParameter4 = 0LL;
  v57 = 0;
  v67 = -1LL;
  v60 = v3;
  if ( (_DWORD)v74 )
  {
    MiFlushTbList(a1);
    a1 = v70;
    v3 = v60;
  }
  if ( *(_QWORD *)(v5 + 40) || *(_QWORD *)(v5 + 48) )
    return 0LL;
  v7 = 0LL;
  v8 = 0LL;
  LODWORD(v74) = 0;
  if ( !v3 )
    return v4;
  while ( 2 )
  {
    v9 = *(_QWORD *)&a1[2 * v8 + 6];
    v10 = (v9 & 0x3FF) + 1;
    v11 = v9 & 0xFFFFFFFFFFFFF000uLL;
    v69 = v10;
    v68 = v11;
    do
    {
      v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v13 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v49 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
          if ( (v49 & 0x20) != 0 )
            v13 |= 0x20uLL;
          if ( (v49 & 0x42) != 0 )
            v13 |= 0x42uLL;
        }
      }
      v59 = v13 & 0xFFFFFFFFFFFFFBFEuLL | 1;
      v14 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v59) >> 12) & 0xFFFFFFFFFFLL);
      v16 = *(_QWORD *)(v14 - 0x220000000000LL + 40);
      v17 = v14 - 0x220000000000LL;
      v18 = *(_QWORD *)(qword_140C673C8 + 8 * (((unsigned __int64)v16 >> 43) & 0x3FF));
      v66 = v18;
      if ( v16 < 0 )
      {
        v42 = *(_QWORD *)(v17 + 8);
        v43 = v42 | 0x8000000000000000uLL;
        v44 = (v16 & 0x10000000000LL) == 0 && v42 >= 0 && v42;
        v45 = 0LL;
        ContainingPageTable = MiGetContainingPageTable(v12);
        v63 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v63);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        if ( (v59 & 0x42) != 0 )
          v45 = MiCaptureDirtyBitToPfn(v17);
        MiDecrementShareCount(v17);
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v45 )
          MiReleasePageFileInfo(v66, v45, 1);
        if ( v44 )
        {
          v46 = MiDecrementCombinedPteEx(a2 + 1664, v43, 0LL);
        }
        else
        {
          CloneAddress = MiLocateCloneAddress(a2, v43);
          v46 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v55);
        }
        if ( v46 == 3 )
        {
          ++*(_QWORD *)(v72 + 8);
        }
        else if ( v46 == 5 )
        {
          ++*(_QWORD *)(v72 + 24);
        }
        v59 = a3;
        v28 = a3;
      }
      else
      {
        v62 = 0;
        ContainingPageTable = v16 & 0xFFFFFFFFFFLL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v62);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        v20 = *(_QWORD *)(v17 + 16);
        v21 = *(_QWORD *)(v17 + 24) | 0x4000000000000000LL;
        *(_QWORD *)(v17 + 24) = v21;
        if ( (v20 & 2) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v18, v17 + 16) && *(_WORD *)(v17 + 32) == 1 && a3 )
        {
          v7 = v40;
          *(_QWORD *)(v17 + 16) = v40 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        if ( (*(_BYTE *)(v17 + 34) & 7) != 6 )
          MiBadShareCount(v17);
        v22 = 0x3FFFFFFFFFFFFFFFLL;
        v23 = (v21 & 0x3FFFFFFFFFFFFFFFLL) - 1;
        *(_QWORD *)(v17 + 24) = v21 ^ (v23 ^ v21) & 0x3FFFFFFFFFFFFFFFLL;
        if ( (v21 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        {
          if ( *(_QWORD *)(v17 + 40) < v23 )
            MiMakeProtoTransition(v17, 1LL);
          v24 = *(_QWORD *)(v17 + 24);
          --*(_WORD *)(v17 + 32);
          v25 = (v24 >> 62) & 1;
          if ( *(_WORD *)(v17 + 32) )
          {
            v50 = *(_BYTE *)(v17 + 34);
            if ( (_DWORD)v25 )
            {
              v51 = v50 | 7;
            }
            else if ( (v50 & 0x10) != 0 )
            {
              v51 = v50 & 0xF8 | 3;
            }
            else if ( (v50 & 8) != 0 )
            {
              v51 = v50 & 0xF8 | 3;
            }
            else
            {
              v51 = v50 & 0xF8 | 2;
            }
            *(_BYTE *)(v17 + 34) = v51;
            if ( (*(_DWORD *)(v17 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v17 + 16, v22, v15, v21) )
              *(_BYTE *)(*(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL)) + 715LL) = 1;
            ++*(_QWORD *)(v72 + 8);
          }
          else if ( (_DWORD)v25 )
          {
            v26 = *(_BYTE *)(v17 + 35);
            if ( (v26 & 0x10) != 0 )
              *(_BYTE *)(v17 + 35) = v26 & 0xEF;
            v27 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL));
            v61 = *(_QWORD *)(v17 + 16);
            if ( (v61 & 0x400) == 0 )
            {
              if ( (v61 & 4) != 0 || (v61 & 2) != 0 )
              {
                v41 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v61);
                v61 = v41;
                if ( v41 )
                  MiReleasePageFileInfo(v27, v41, 0);
              }
              else
              {
                v61 = 0LL;
              }
            }
            MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * (v14 >> 4));
            v18 = v66;
          }
          else
          {
            MiSetNonResidentPteHeat(v17 + 16, 0LL);
            v52 = *(_BYTE *)(v17 + 34);
            if ( (v52 & 0x10) != 0 )
            {
              v53 = 8;
            }
            else
            {
              v53 = 4;
              *(_BYTE *)(v17 + 34) = v52 & 0xF8 | 2;
            }
            MiInsertPageInList(v17, v53);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v59 = a3;
        v28 = a3;
        if ( v7 )
        {
          v47 = *(_QWORD *)(v18 + 8LL * ((unsigned __int16)v7 >> 12) + 17056);
          if ( qword_140C65B40 && (v7 & 0x10) == 0 )
            v7 &= ~qword_140C65B40;
          v28 = MiTransferSoftwarePte(a3, v47, HIDWORD(v7), 2);
          v59 = v28;
          v7 = 0LL;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      }
      v29 = v28;
      if ( !MiPteInShadowRange(v12) )
        goto LABEL_27;
      if ( !(unsigned int)MiPteHasShadow(v31, v30, v32) )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v28 & 1) != 0 )
        {
          v29 = v28 | 0x8000000000000000uLL;
        }
LABEL_27:
        *(_QWORD *)v12 = v29;
        goto LABEL_28;
      }
      v56 = v28;
      if ( !HIBYTE(word_140C66CFC) && (v28 & 1) != 0 )
        v56 = v28 | 0x8000000000000000uLL;
      *(_QWORD *)v12 = v56;
      MiWritePteShadow(v12, v56);
LABEL_28:
      if ( !v59 )
        LODWORD(BugCheckParameter4) = BugCheckParameter4 + 1;
      if ( ContainingPageTable != v67 )
      {
        v39 = v65;
        if ( v65 )
        {
          v64 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v65 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v64);
              while ( *(__int64 *)(v39 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) );
          }
          MiReduceShareCount(v39, v57);
          _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v57 = 0;
          if ( (_DWORD)BugCheckParameter4 )
          {
            HIDWORD(BugCheckParameter4) = MiReducePteUseCount(v12, (unsigned int)BugCheckParameter4);
            LODWORD(BugCheckParameter4) = 0;
          }
        }
        v67 = ContainingPageTable;
        v65 = 48 * ContainingPageTable - 0x220000000000LL;
      }
      v33 = v57 + 1;
      v11 = v68 + 4096;
      ++v57;
      v34 = v69-- == 1;
      v68 += 4096LL;
    }
    while ( !v34 );
    v8 = (unsigned int)(v74 + 1);
    LODWORD(v74) = v8;
    if ( (unsigned int)v8 < v60 )
    {
      a1 = v70;
      continue;
    }
    break;
  }
  if ( !(_DWORD)v33 )
    return HIDWORD(BugCheckParameter4);
  v35 = v65;
  LODWORD(v72) = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v65 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx((__int64 *)va);
      while ( *(__int64 *)(v35 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) );
    v33 = v57;
  }
  if ( (*(_BYTE *)(v35 + 34) & 7) != 6 )
    MiBadShareCount(v35);
  v36 = (*(_QWORD *)(v35 + 24) & 0x3FFFFFFFFFFFFFFFLL) - (unsigned int)v33;
  *(_QWORD *)(v35 + 24) ^= (*(_QWORD *)(v35 + 24) ^ v36) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v36 )
    MiPfnShareCountIsZero(v35, 0LL, (_QWORD *)v33, 0x3FFFFFFFFFFFFFFFLL);
  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)BugCheckParameter4 )
  {
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v12 << 25) >> 16);
    return (unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, (unsigned int)BugCheckParameter4) == 0;
  }
  else
  {
    return HIDWORD(BugCheckParameter4);
  }
}
