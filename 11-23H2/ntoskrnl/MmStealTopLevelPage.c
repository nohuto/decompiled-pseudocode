/*
 * XREFs of MmStealTopLevelPage @ 0x1403D75EC
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x1403D74B0 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140291CB0 (KeMakeKernelDirectoryTableBase.c)
 *     KeMakeUserDirectoryTableBase @ 0x140291CC8 (KeMakeUserDirectoryTableBase.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiReplacePageTablePage @ 0x14039502C (MiReplacePageTablePage.c)
 */

__int64 __fastcall MmStealTopLevelPage(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r13
  volatile LONG *SharedVm; // rbx
  unsigned int v6; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  _QWORD *v10; // r14
  int v11; // r12d
  unsigned __int64 v12; // rbx
  __int64 v13; // rdi
  BOOL v14; // r11d
  __int64 v15; // r8
  int v16; // edx
  bool v17; // zf
  bool v18; // zf
  __int64 v19; // r14
  unsigned __int64 v20; // rdi
  __int64 v21; // rbx
  int v22; // ebp
  __int64 v23; // r8
  BOOL v24; // r12d
  bool v25; // zf
  __int64 v26; // r8
  int v27; // edx
  unsigned __int64 v28; // rbx
  bool v29; // zf
  KIRQL v30; // [rsp+70h] [rbp+8h]
  unsigned __int64 v31; // [rsp+78h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 40) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v6 = 0;
  v30 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  MiReplacePageTablePage(a1);
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    ++dword_140C13648;
    v31 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 32), 0LL, 0x80000000);
    v10 = (_QWORD *)(v31 + 8LL * ((((*(_DWORD *)(a1 + 8) >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
    v11 = 0;
    v12 = ((v9 & 0xFFFFFFFFFFLL) << 12) | MI_READ_PTE_LOCK_FREE((unsigned __int64)v10) & 0xFFF0000000000FFFuLL;
    v13 = ZeroPte;
    v14 = MiPteInShadowRange((unsigned __int64)v10);
    v15 = 0x8000000000000000uLL;
    if ( !v14 )
      goto LABEL_5;
    if ( MiPteHasShadow() )
    {
      v11 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_5;
      v17 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v17 = (ZeroPte & 1) == 0;
    }
    if ( !v17 )
      v13 = v15 | ZeroPte;
LABEL_5:
    *v10 = v13;
    if ( v11 )
    {
      MiWritePteShadow((__int64)v10, v13, v15);
      v15 = 0x8000000000000000uLL;
    }
    v16 = 0;
    if ( v14 )
    {
      if ( MiPteHasShadow() )
      {
        v16 = 1;
        if ( HIBYTE(word_140C66CFC) )
          goto LABEL_8;
        v18 = (v12 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_8;
        v18 = (v12 & 1) == 0;
      }
      if ( !v18 )
        v12 |= v15;
    }
LABEL_8:
    *v10 = v12;
    if ( v16 )
      MiWritePteShadow((__int64)v10, v12, v15);
    MiUnmapPageInHyperSpaceWorker(v31, 0x11u);
    if ( !*(_DWORD *)(a1 + 60) )
    {
      Process->DirectoryTableBase = KeMakeKernelDirectoryTableBase(v9 << 12);
LABEL_12:
      v6 = 1;
      goto LABEL_13;
    }
    v19 = (((unsigned __int64)Process[1].ProcessListEntry.Flink >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v20 = ZeroPte;
    v21 = MI_READ_PTE_LOCK_FREE(v19);
    v22 = 0;
    v24 = MiPteInShadowRange(v19);
    if ( v24 )
    {
      if ( MiPteHasShadow() )
      {
        v22 = 1;
        if ( HIBYTE(word_140C66CFC) )
          goto LABEL_36;
        v25 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_36;
        v25 = (ZeroPte & 1) == 0;
      }
      if ( !v25 )
        v20 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_36:
    *(_QWORD *)v19 = v20;
    if ( v22 )
      MiWritePteShadow(v19, v20, v23);
    KeFlushSingleTb(v19 << 25 >> 16, 0, 2u);
    v27 = 0;
    v28 = ((v9 & 0xFFFFFFFFFFLL) << 12) | v21 & 0xFFF0000000000FFFuLL;
    if ( !v24 )
      goto LABEL_46;
    if ( MiPteHasShadow() )
    {
      v27 = 1;
      if ( !HIBYTE(word_140C66CFC) )
      {
        v29 = (v28 & 1) == 0;
        goto LABEL_44;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v29 = (v28 & 1) == 0;
LABEL_44:
      if ( !v29 )
        v28 |= 0x8000000000000000uLL;
    }
LABEL_46:
    *(_QWORD *)v19 = v28;
    if ( v27 )
      MiWritePteShadow(v19, v28, v26);
    Process->UserDirectoryTableBase = KeMakeUserDirectoryTableBase(v9 << 12);
    goto LABEL_12;
  }
LABEL_13:
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v30, v7, v8);
  return v6;
}
