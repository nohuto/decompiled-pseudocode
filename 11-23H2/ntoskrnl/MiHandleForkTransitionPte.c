/*
 * XREFs of MiHandleForkTransitionPte @ 0x140664E98
 * Callers:
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiSetPfnPteFrame @ 0x1402E1830 (MiSetPfnPteFrame.c)
 *     MiFinalizePageAttribute @ 0x1402E1874 (MiFinalizePageAttribute.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     MiTransferPageFileOwnership @ 0x1402ED440 (MiTransferPageFileOwnership.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402ED468 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402F4050 (MiReturnCrossPartitionCloneCharges.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140355810 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiWaitForFreePage @ 0x140653F98 (MiWaitForFreePage.c)
 *     MiDuplicateCloneLeaf @ 0x1406645D8 (MiDuplicateCloneLeaf.c)
 *     MiGetCrossPartitionCloneCharges @ 0x140664D5C (MiGetCrossPartitionCloneCharges.c)
 *     MiWriteUselessChildPte @ 0x140665E6C (MiWriteUselessChildPte.c)
 */

__int64 __fastcall MiHandleForkTransitionPte(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6,
        int *a7,
        ULONG_PTR *a8,
        char a9,
        unsigned __int8 a10,
        _QWORD *a11,
        _DWORD *a12)
{
  __int64 v12; // r14
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // r9d
  volatile signed __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 v23; // rbp
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // r12
  signed __int32 v29; // eax
  unsigned int v30; // ebp
  __int64 Page; // rax
  unsigned __int8 v32; // bl
  volatile signed __int64 *v33; // rsi
  __int64 v34; // r8
  __int64 v35; // r9
  volatile LONG *v36; // rdi
  KIRQL v37; // al
  __int64 v38; // rax
  __int64 v39; // rdi
  int v40; // r15d
  BOOL v41; // eax
  __int64 v42; // r8
  int v43; // edx
  bool v44; // zf
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // eax
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdi
  unsigned __int64 v51; // rdi
  __int64 v52; // r8
  int v53; // edx
  int v54; // eax
  unsigned __int64 v55; // rdx
  int v56; // esi
  __int64 v57; // r8
  bool v58; // zf
  __int64 v59; // rbx
  __int64 v60; // r8
  __int64 v61; // r9
  volatile LONG *SharedVm; // rbx
  char v63; // [rsp+30h] [rbp-88h]
  __int64 v64; // [rsp+38h] [rbp-80h]
  unsigned int v65; // [rsp+40h] [rbp-78h]
  __int64 v66; // [rsp+48h] [rbp-70h] BYREF
  volatile signed __int64 *v67; // [rsp+50h] [rbp-68h]
  __int128 v68; // [rsp+58h] [rbp-60h] BYREF
  __int64 v69; // [rsp+68h] [rbp-50h]
  __int64 v70; // [rsp+70h] [rbp-48h]
  int v72; // [rsp+C8h] [rbp+10h]
  __int64 v73; // [rsp+C8h] [rbp+10h]

  v12 = a5;
  v66 = 0LL;
  v68 = 0LL;
  v15 = MiSwizzleInvalidPte((a5 << 16) | 0x400);
  v16 = ZeroPte;
  v69 = v15;
  v18 = *(unsigned __int16 *)(v17 + 1838);
  v70 = ZeroPte;
  v63 = v19;
  v72 = v19;
  v20 = *(volatile signed __int64 **)(qword_140C673C8 + 8 * v18);
  v64 = (__int64)v20;
  v67 = *(volatile signed __int64 **)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(v21 + 1838));
  if ( v67 != v20 )
  {
    v63 = (a9 & 1) + 2;
    if ( (unsigned int)MiGetCrossPartitionCloneCharges(v20, v63) )
    {
      v72 = 1;
      goto LABEL_6;
    }
    MiWriteUselessChildPte(a4);
    *a12 = 1;
    return 1LL;
  }
  while ( 1 )
  {
LABEL_6:
    v23 = MiLockTransitionLeafPageEx((ULONG_PTR)a3, 0LL, 0);
    if ( !v23 )
    {
LABEL_16:
      v39 = v64;
LABEL_17:
      if ( v72 )
        MiReturnCrossPartitionCloneCharges(v39, v63);
      return 0LL;
    }
    v24 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
    LODWORD(v25) = 0;
    v26 = v24;
    v27 = (v24 >> 5) & 0x1F;
    if ( !*(_WORD *)(v23 + 32)
      && ((v24 >> 5) & 0x18) != 0x10
      && !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v23 + 16)) )
    {
      break;
    }
    v28 = a1 + 1664;
    v65 = *(unsigned __int8 *)(v23 + 34) >> 6;
    if ( *a8 != -1LL )
    {
      v39 = v64;
      if ( v72 != (_DWORD)v25 )
      {
        MiReturnCrossPartitionCloneCharges(v64, v63);
        v72 = 0;
      }
      v59 = 48 * *a8 - 0x220000000000LL;
      MiLockNestedPageAtDpcInline(v59);
      MiFinalizePageAttribute(v59, v65, 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v23 + 34) & 0x20) != 0 && (MiFlushTbList(a7), (*(_BYTE *)(v23 + 34) & 8) != 0) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockWorkingSetExclusive(v28, a10, v60, v61);
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        SharedVm = (volatile LONG *)MiGetSharedVm(v28);
        ExAcquireSpinLockExclusive(SharedVm);
        *((_DWORD *)SharedVm + 1) = 0;
      }
      else if ( (unsigned int)MiDuplicateCloneLeaf((unsigned __int64)a3, a4, *a8, a10, 2u) )
      {
        *a8 = -1LL;
        ++*a6;
        return 1LL;
      }
      goto LABEL_17;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiInitializePageColorBase(v28, v25, (__int64)&v68);
    v29 = _InterlockedExchangeAdd((volatile signed __int32 *)v68, 1u);
    v30 = HIDWORD(v68) | v29 & DWORD2(v68);
    Page = MiGetPage((__int64)v67, v30, 0);
    *a8 = Page;
    if ( Page == -1 )
    {
      v32 = a10;
      v33 = v67;
      do
      {
        MiFlushTbList(a7);
        MiUnlockWorkingSetExclusive(v28, v32, v34, v35);
        MiWaitForFreePage(v33);
        v36 = (volatile LONG *)MiGetSharedVm(v28);
        v37 = ExAcquireSpinLockExclusive(v36);
        *((_DWORD *)v36 + 1) = 0;
        v32 = v37;
        MiMakeSystemAddressValid((ULONG_PTR)a3, 0LL, 0, v37, 1);
        v38 = MiGetPage((__int64)v33, v30, 0);
        *a8 = v38;
      }
      while ( v38 == -1 );
      v16 = v70;
      v12 = a5;
      a10 = v32;
      v15 = v69;
    }
    if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)a3) & 0x401) != 0 )
      goto LABEL_16;
  }
  *(_QWORD *)v12 = v25;
  v40 = v25;
  v41 = MiPteInShadowRange(v12);
  v42 = 0x8000000000000000uLL;
  if ( v41 )
  {
    if ( MiPteHasShadow() )
    {
      v40 = v43 + 1;
      if ( HIBYTE(word_140C66CFC) == (_BYTE)v43 )
      {
        v44 = ((unsigned __int8)v26 & (unsigned __int8)v40) == 0;
LABEL_26:
        if ( !v44 )
          v26 |= v42;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v44 = (v26 & 1) == 0;
      goto LABEL_26;
    }
  }
  *(_QWORD *)v12 = v26;
  if ( v40 )
    MiWritePteShadow(v12, v26, v42);
  MI_MAKE_PROTECT_WRITE_COPY((__int64 *)v12);
  v45 = 0LL;
  *(_QWORD *)(v12 + 16) = 0LL;
  if ( v72 )
  {
    v45 = 0x1000000000000000LL;
    v46 = 1LL;
    *(_QWORD *)(v12 + 16) = 0x1000000000000000LL;
  }
  else
  {
    v46 = 0LL;
  }
  *(_QWORD *)(v12 + 8) = v46;
  *(_QWORD *)(v12 + 24) = 2LL;
  if ( (a9 & 1) != 0 )
  {
    *(_QWORD *)(v12 + 16) = v45 & 0xDF80000000000000uLL | 0x2000000000000001LL;
    _InterlockedIncrement64((volatile signed __int64 *)(v64 + 17848));
    if ( (v63 & 1) != 0 )
      ++*a11;
    else
      ++a11[1];
  }
  *(_QWORD *)(v12 + 16) = *(_QWORD *)(v12 + 16) & 0xF07FFFFFFFFFFFFFuLL | ((unsigned __int64)(unsigned int)v27 << 55);
  if ( (*(_QWORD *)(v23 + 16) & 2) != 0 )
  {
    v16 = *(_QWORD *)(v23 + 16);
    if ( (*(_BYTE *)(v23 + 34) & 7) == 3 )
    {
      MiUnlinkPageFromListEx(v23, 0LL);
      v47 = 1;
    }
    else
    {
      v47 = 0;
    }
    *(_QWORD *)(v23 + 16) &= ~2uLL;
    if ( v47 )
      MiInsertPageInList(v23, 8u);
  }
  *(_QWORD *)(v23 + 8) = v12;
  *(_QWORD *)(v23 + 40) |= 0x8000000000000000uLL;
  MI_MAKE_PROTECT_WRITE_COPY((__int64 *)(v23 + 16));
  v73 = *(_QWORD *)(v23 + 40) & 0xFFFFFFFFFFLL;
  v66 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v48 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v66);
  MiSetPfnPteFrame(v23, (v48 >> 12) & 0xFFFFFFFFFFLL);
  MiTransferPageFileOwnership(v49, (__int64)a3);
  v50 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v66) >> 12) & 0xFFFFFFFFFFLL)
      - 0x220000000000LL;
  MiLockNestedPageAtDpcInline(v50);
  *(_QWORD *)(v50 + 24) ^= (*(_QWORD *)(v50 + 24) ^ (*(_QWORD *)(v50 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v51 = v15;
  if ( !MiPteInShadowRange((unsigned __int64)a3) )
  {
LABEL_51:
    v54 = 0;
    goto LABEL_52;
  }
  if ( !MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v15 & 1) != 0 )
      v51 = v15 | 0x8000000000000000uLL;
    goto LABEL_51;
  }
  v54 = v53 + 1;
  if ( HIBYTE(word_140C66CFC) == (_BYTE)v53 && ((unsigned __int8)v15 & (unsigned __int8)v54) != 0 )
    v51 = v15 | 0x8000000000000000uLL;
LABEL_52:
  *a3 = v51;
  if ( v54 )
    MiWritePteShadow((__int64)a3, v51, v52);
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v16 )
  {
    v55 = v16 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v16 & 4) == 0 )
      v55 = v16;
    MiReleasePageFileInfo(v64, v55, 1);
  }
  if ( (a9 & 1) != 0 && (_DWORD)v27 != 24 )
    v15 |= 8uLL;
  v56 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a4) )
  {
    if ( MiPteHasShadow() )
    {
      v56 = 1;
      if ( !HIBYTE(word_140C66CFC) )
      {
        v58 = (v15 & 1) == 0;
LABEL_67:
        if ( !v58 )
          v15 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v58 = (v15 & 1) == 0;
      goto LABEL_67;
    }
  }
  *a4 = v15;
  if ( v56 )
    MiWritePteShadow((__int64)a4, v15, v57);
  MiLockAndDecrementShareCount(48 * v73 - 0x220000000000LL, 0);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
  return 2LL;
}
