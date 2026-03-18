/*
 * XREFs of MmStealTopLevelPage @ 0x14036CD34
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x1402F25C0 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14036C428 (KeMakeKernelDirectoryTableBase.c)
 *     KeMakeUserDirectoryTableBase @ 0x14036C7EC (KeMakeUserDirectoryTableBase.c)
 *     MiReplacePageTablePage @ 0x14036CF60 (MiReplacePageTablePage.c)
 */

__int64 __fastcall MmStealTopLevelPage(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r13
  volatile LONG *SharedVm; // rbx
  unsigned int v6; // esi
  __int64 v7; // r15
  _QWORD *v8; // r14
  int v9; // r12d
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  BOOL v12; // r11d
  int v13; // edx
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // ebp
  BOOL v18; // r12d
  int v19; // edx
  unsigned __int64 v20; // rbx
  __int64 v21; // r8
  bool v22; // zf
  __int64 v23; // r8
  bool v24; // zf
  bool v25; // zf
  bool v26; // zf
  KIRQL v27; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 40) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v6 = 0;
  v27 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  MiReplacePageTablePage(a1);
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    ++dword_140C29CE8;
    v8 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * ((((*(_DWORD *)(a1 + 8) >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
    v9 = 0;
    v10 = ((v7 & 0xFFFFFFFFFFLL) << 12) | MI_READ_PTE_LOCK_FREE((unsigned __int64)v8) & 0xFFF0000000000FFFuLL;
    v11 = ZeroPte;
    v12 = MiPteInShadowRange((unsigned __int64)v8);
    if ( !v12 )
      goto LABEL_5;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_5;
      v22 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v22 = (ZeroPte & 1) == 0;
    }
    if ( !v22 )
      v11 = v21 | ZeroPte;
LABEL_5:
    *v8 = v11;
    if ( v9 )
      MiWritePteShadow((__int64)v8, v11);
    v13 = 0;
    if ( v12 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v13 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_8;
        v24 = (v10 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_8;
        v24 = (v10 & 1) == 0;
      }
      if ( !v24 )
        v10 |= v23;
    }
LABEL_8:
    *v8 = v10;
    if ( v13 )
      MiWritePteShadow((__int64)v8, v10);
    if ( !*(_DWORD *)(a1 + 60) )
    {
      Process->DirectoryTableBase = KeMakeKernelDirectoryTableBase(v7 << 12);
LABEL_12:
      v6 = 1;
      goto LABEL_13;
    }
    v14 = (((unsigned __int64)Process[1].ProcessListEntry.Flink >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = ZeroPte;
    v16 = MI_READ_PTE_LOCK_FREE(v14);
    v17 = 0;
    v18 = MiPteInShadowRange(v14);
    if ( v18 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v17 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_15;
        v25 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_15;
        v25 = (ZeroPte & 1) == 0;
      }
      if ( !v25 )
        v15 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_15:
    *(_QWORD *)v14 = v15;
    if ( v17 )
      MiWritePteShadow(v14, v15);
    KeFlushSingleTb(v14 << 25 >> 16, 0, 2u);
    v19 = 0;
    v20 = ((v7 & 0xFFFFFFFFFFLL) << 12) | v16 & 0xFFF0000000000FFFuLL;
    if ( !v18 )
      goto LABEL_18;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v19 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v26 = (v20 & 1) == 0;
        goto LABEL_47;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v26 = (v20 & 1) == 0;
LABEL_47:
      if ( !v26 )
        v20 |= 0x8000000000000000uLL;
    }
LABEL_18:
    *(_QWORD *)v14 = v20;
    if ( v19 )
      MiWritePteShadow(v14, v20);
    Process->UserDirectoryTableBase = KeMakeUserDirectoryTableBase(v7 << 12);
    goto LABEL_12;
  }
LABEL_13:
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v27);
  return v6;
}
