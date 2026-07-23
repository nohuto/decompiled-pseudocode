/*
 * XREFs of MiAllocateKernelStackPages @ 0x140273550
 * Callers:
 *     MmCreateKernelStack @ 0x140271930 (MmCreateKernelStack.c)
 *     MmGrowKernelStackEx @ 0x1403614F0 (MmGrowKernelStackEx.c)
 *     MmCreateKernelShadowStack @ 0x14064567C (MmCreateKernelShadowStack.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140219488 (MiSetPfnIdentity.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiGetSlabPage @ 0x14023BE40 (MiGetSlabPage.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     PsGetPagePriorityThread @ 0x1402E17B0 (PsGetPagePriorityThread.c)
 *     MiProtectionToCacheAttribute @ 0x1402E17F0 (MiProtectionToCacheAttribute.c)
 *     MiFinalizePageAttribute @ 0x1402E1874 (MiFinalizePageAttribute.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E18C0 (MiSetPfnTbFlushStamp.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 *     MiInitializeMdlSinglePage @ 0x14046BE6C (MiInitializeMdlSinglePage.c)
 *     MiWaitForFreePage @ 0x140653F98 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  _QWORD *v10; // r15
  unsigned int v11; // r11d
  __int64 v12; // rdx
  int v13; // r12d
  signed __int32 v14; // ecx
  unsigned int v15; // ebx
  __int64 SlabPage; // rax
  __int64 v17; // rsi
  __int64 ValidPte; // rdi
  unsigned __int64 v19; // r13
  __int64 v20; // r9
  _QWORD *v21; // r15
  __int64 v22; // r12
  __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  unsigned int v26; // r12d
  unsigned __int64 v27; // r15
  __int64 v28; // rbx
  unsigned __int64 v29; // r8
  signed __int64 v30; // rax
  signed __int64 v31; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v33; // rbx
  unsigned int Queue; // r15d
  unsigned int v35; // r15d
  char v36; // r15
  __int64 v37; // rax
  signed __int64 v38; // rax
  signed __int64 v39; // rax
  __int64 v40; // rcx
  char v41; // al
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD *v47; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v49; // rax
  struct _LIST_ENTRY *v50; // rax
  __int64 v51; // rax
  signed __int64 v52; // rdx
  signed __int64 v53; // rdx
  __int64 *v54; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v56; // [rsp+48h] [rbp-C0h]
  __int64 v57; // [rsp+50h] [rbp-B8h]
  __int128 v58; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+70h] [rbp-98h]
  _QWORD v61[3]; // [rsp+78h] [rbp-90h]
  __int128 v62; // [rsp+90h] [rbp-78h]
  __int64 v63; // [rsp+A0h] [rbp-68h]
  signed __int64 v64; // [rsp+A8h] [rbp-60h]
  __int128 v65; // [rsp+B0h] [rbp-58h]
  __int128 v66; // [rsp+C0h] [rbp-48h]
  __int64 v67; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v68; // [rsp+D8h] [rbp-30h]
  __int128 v69; // [rsp+E0h] [rbp-28h]
  __int128 v70; // [rsp+F0h] [rbp-18h]
  __int64 v71; // [rsp+100h] [rbp-8h]
  signed __int64 v72; // [rsp+108h] [rbp+0h]
  __int128 v73; // [rsp+110h] [rbp+8h]
  __int128 v74; // [rsp+120h] [rbp+18h]
  __int64 v75; // [rsp+130h] [rbp+28h]
  unsigned __int64 v76; // [rsp+138h] [rbp+30h]
  unsigned __int8 v77; // [rsp+198h] [rbp+90h]

  v7 = a3;
  v8 = a2;
  v58 = 0LL;
  if ( !a3 )
    return 1LL;
  v61[0] = a2 + 8 * a3;
  v10 = 0LL;
  MiInitializePageColorBase(0LL, (unsigned int)(a5 + 1), &v58);
  v12 = v11;
  v54 = (__int64 *)v11;
  v13 = v11;
  if ( a7 != (_QWORD *)v11 && (*(_DWORD *)(a1 + 4) & 8) != 0 )
  {
    v13 = 1;
    v12 = ((a6 & 2) != 0) - 1LL;
    v54 = (__int64 *)v12;
  }
LABEL_3:
  v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v58, 1u);
  v15 = DWORD2(v58) & v14 | HIDWORD(v58);
  while ( 1 )
  {
    if ( v13 && (SlabPage = MiGetSlabPage(a1, 3u, v15, 0LL, (__int64 *)v12), SlabPage != -1)
      || (SlabPage = MiGetPage(a1, v15, 0), SlabPage != -1) )
    {
      v17 = 48 * SlabPage - 0x220000000000LL;
      *(_QWORD *)v17 = v10;
      v10 = (_QWORD *)v17;
      if ( !--v7 )
      {
        if ( a7 )
          ValidPte = MiMakeValidPte(v8, 0LL, 536870913LL) | 0x40;
        else
          ValidPte = MiMakeValidPte(v8, 0LL, 2684354564LL);
        v19 = 0LL;
        v56 = 0LL;
        v77 = MiLockWorkingSetShared(&unk_140C69F00);
        v57 = (__int64)a7;
        v21 = a7;
        while ( 1 )
        {
          v22 = *(_QWORD *)v17;
          v60 = *(_QWORD *)v17;
          ValidPte ^= (ValidPte ^ (0xAAAAAAAAAAAAB000uLL * ((v17 + 0x220000000000LL) >> 4))) & 0xFFFFFFFFFF000LL;
          if ( v19 )
          {
            if ( (v8 & 0xFFF) != 0 )
              goto LABEL_14;
            MiUnlockPageTableInternal(&unk_140C69F00, v19);
          }
          v56 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiLockPageTableInternal((__int64)&unk_140C69F00, v56, 0, v20);
LABEL_14:
          LODWORD(v55) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v55);
            while ( *(__int64 *)(v17 + 24) < 0 );
          }
          if ( a7 )
          {
            MiFinalizePageAttribute(v17, 1LL, 1LL);
            MiInitializeMdlSinglePage(v17, v17, a4, ZeroPte, 0);
            *(_QWORD *)(v17 + 8) = v8;
            MiSetPfnIdentity(v17, 3);
            *v21 = 0xAAAAAAAAAAAAAAABuLL * ((v17 + 0x220000000000LL) >> 4);
          }
          else
          {
            v23 = *(_QWORD *)v8;
            if ( MiPteInShadowRange(v8)
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v23 & 1) != 0
              && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v49 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
                if ( (v49 & 0x20) != 0 )
                  v23 |= 0x20uLL;
                if ( (v49 & 0x42) != 0 )
                  v23 |= 0x42uLL;
              }
            }
            if ( v23 )
              v24 = v23 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
            else
              v24 = MiSwizzleInvalidPte(128LL);
            v25 = v24 & 0xFFFFFFFFFFFFF7FFuLL;
            if ( (v24 & 0x400) == 0 )
              v25 = v24 & 0xFFFFFFFFFFFFFFF7uLL;
            *(_QWORD *)v17 &= 0xFFFFFFFFFFFFC00FuLL;
            *(_QWORD *)(v17 + 16) = v25 & 0xFFFFFFFFFC00FFFFuLL;
            v26 = MiProtectionToCacheAttribute(4LL);
            *(_WORD *)(v17 + 32) = 1;
            v27 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v28 = *(_QWORD *)v27;
            if ( MiPteInShadowRange(v27)
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v28 & 1) != 0
              && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
            {
              v50 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v50 )
              {
                v51 = *((_QWORD *)&v50->Flink + ((v27 >> 3) & 0x1FF));
                if ( (v51 & 0x20) != 0 )
                  v28 |= 0x20uLL;
                if ( (v51 & 0x42) != 0 )
                  v28 |= 0x42uLL;
              }
            }
            v59 = v28;
            v29 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v59) >> 12) & 0xFFFFFFFFFFLL;
            v30 = *(_QWORD *)(v17 + 40);
            v63 = 0LL;
            v64 = v30;
            v67 = 0LL;
            v68 = v29 | v30 & 0xFFFFFF0000000000uLL;
            *(_OWORD *)&v61[1] = 0LL;
            v62 = 0LL;
            v65 = 0LL;
            v66 = 0LL;
            v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v68, v30);
            v68 = v31;
            if ( v64 != v31 )
            {
              do
              {
                v64 = v31;
                v52 = v31;
                v68 = v29 | v31 & 0xFFFFFF0000000000uLL;
                v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v68, v31);
                v68 = v31;
              }
              while ( v52 != v31 );
            }
            CurrentThread = KeGetCurrentThread();
            v33 = 48 * v29 - 0x220000000000LL;
            Queue = (unsigned int)CurrentThread[1].Queue;
            if ( (Queue & 0x100) != 0 )
              v35 = Queue >> 9;
            else
              LOBYTE(v35) = PsGetPagePriorityThread(CurrentThread);
            LODWORD(v54) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v54);
              while ( *(__int64 *)(v33 + 24) < 0 );
            }
            *(_QWORD *)(v33 + 24) ^= ((*(_QWORD *)(v33 + 24) + 1LL) ^ *(_QWORD *)(v33 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( *(unsigned __int8 *)(v17 + 34) >> 6 != v26 )
              MiChangePageAttribute(v17, v26, 1LL);
            MiSetPfnTbFlushStamp(v17, 0LL, 1LL);
            v36 = *(_BYTE *)(v17 + 35) ^ v35;
            v37 = *(_QWORD *)(v17 + 24);
            *(_QWORD *)(v17 + 8) = v8;
            *(_BYTE *)(v17 + 35) ^= v36 & 7;
            *(_QWORD *)(v17 + 24) = v37 & 0xC000000000000000uLL | 1;
            *(_BYTE *)(v17 + 34) = *(_BYTE *)(v17 + 34) & 0xF8 | 6;
            *(_BYTE *)(v17 + 34) |= 0x10u;
            v38 = *(_QWORD *)(v17 + 40);
            v71 = 0LL;
            v72 = v38;
            v75 = 0LL;
            v76 = v38 & 0x8FFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
            v69 = 0LL;
            v70 = 0LL;
            v73 = 0LL;
            v74 = 0LL;
            v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v76, v38);
            v76 = v39;
            if ( v72 != v39 )
            {
              do
              {
                v72 = v39;
                v53 = v39;
                v76 = v39 & 0x8FFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
                v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v76, v39);
                v76 = v39;
              }
              while ( v53 != v39 );
            }
            v40 = *(_QWORD *)v17 ^ (*(_QWORD *)v17 ^ (a4 >> 3)) & 0xFFFFFFFFFFELL;
            *(_QWORD *)v17 = v40;
            if ( a4 && (v40 & 1) == 0 )
              *(_QWORD *)v17 = v40 | 1;
            v41 = *(_BYTE *)(v17 + 35);
            *(_QWORD *)(v17 + 16) |= 0x3E0uLL;
            v21 = (_QWORD *)v57;
            v22 = v60;
            *(_BYTE *)(v17 + 35) = v41 & 0xF8 | 5;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v42 = ValidPte;
          if ( !MiPteInShadowRange(v8) )
            goto LABEL_34;
          if ( !(unsigned int)MiPteHasShadow(v44, v43, v45) )
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ValidPte & 1) != 0 )
            {
              v42 = ValidPte | 0x8000000000000000uLL;
            }
LABEL_34:
            *(_QWORD *)v8 = v42;
            goto LABEL_35;
          }
          if ( !HIBYTE(word_140C66CFC) && (ValidPte & 1) != 0 )
            v42 = ValidPte | 0x8000000000000000uLL;
          *(_QWORD *)v8 = v42;
          MiWritePteShadow(v8, v42);
LABEL_35:
          ++v21;
          v8 += 8LL;
          v17 = v22;
          v57 = (__int64)v21;
          if ( v8 >= v61[0] )
          {
            if ( v56 )
              MiUnlockPageTableInternal(&unk_140C69F00, v56);
            MiUnlockWorkingSetShared((__int64)&unk_140C69F00, v77);
            return 1LL;
          }
          v19 = v56;
        }
      }
      v12 = (__int64)v54;
      goto LABEL_3;
    }
    if ( (a6 & 2) != 0 )
      break;
    MiWaitForFreePage(a1);
    v12 = (__int64)v54;
  }
  if ( v10 )
  {
    do
    {
      v47 = (_QWORD *)*v10;
      MiReleaseFreshPage(v10);
      v10 = v47;
    }
    while ( v47 );
  }
  return 0LL;
}
