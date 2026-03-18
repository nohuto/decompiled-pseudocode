/*
 * XREFs of MiRestoreTransitionPte @ 0x14033FAA4
 * Callers:
 *     MiHandleInPageError @ 0x140231B9C (MiHandleInPageError.c)
 *     MiRelinkStandbyPage @ 0x1402323E8 (MiRelinkStandbyPage.c)
 *     MiWriteCompletePfn @ 0x14028C82C (MiWriteCompletePfn.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiUnlinkStandbyPage @ 0x14038EB20 (MiUnlinkStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x1403941B0 (MiDiscardTransitionPteEx.c)
 *     MiRepointPteAtExtendedStandby @ 0x1405B3EB4 (MiRepointPteAtExtendedStandby.c)
 *     MiReuseStandbyPage @ 0x1405B3FA4 (MiReuseStandbyPage.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x1402206C0 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiClearPfnImageVerified @ 0x14023CC50 (MiClearPfnImageVerified.c)
 *     MiGetTopLevelPfn @ 0x14026B1C0 (MiGetTopLevelPfn.c)
 *     MiGetPfnPriority @ 0x140273234 (MiGetPfnPriority.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPagingFileOffset @ 0x1402E76C0 (MiGetPagingFileOffset.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MI_IS_RESET_PTE @ 0x14033B640 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     MiSetNonResidentPteHeat @ 0x14033C3A0 (MiSetNonResidentPteHeat.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

void __fastcall MiRestoreTransitionPte(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v2; // r12
  _QWORD *v5; // r14
  int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 *v9; // r15
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  unsigned __int8 *v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rsi
  __int64 v15; // rbx
  int v16; // ebp
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  unsigned __int64 *v23; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 TopLevelPfn; // rax
  unsigned __int64 v28; // rdx
  bool v29; // zf
  unsigned __int64 v30; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter2 + 40) >> 53;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  v6 = v2 & 1;
  MiClearPfnImageVerified(BugCheckParameter2, 12);
  v7 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( v7 >= 0 )
  {
    v23 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
    {
      if ( MI_IS_RESET_PTE(*v23) )
      {
        v26 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2 + 16);
        *v23 = MiUpdatePageFileHighInPte(v26, 0LL);
      }
      TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
      v28 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      if ( TopLevelPfn != BugCheckParameter2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v28 + 1851) & 0x60) == 0x40 )
        _InterlockedIncrement64((volatile signed __int64 *)(v28 + 1872));
    }
    v10 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (v10 & 0xFFFFFFFFFFLL) == 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) )
      v5 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  else if ( (v7 & 0x10000000000LL) != 0 || (v8 = *(_QWORD *)(BugCheckParameter2 + 8), v8 <= 0) )
  {
    v9 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    v10 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && !(unsigned int)MiGetPagingFileOffset(BugCheckParameter2 + 16)
      && MI_IS_RESET_PTE(*v9) )
    {
      v25 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2 + 16);
      *v9 = MiUpdatePageFileHighInPte(v25, 0LL);
      v10 = *(_QWORD *)(BugCheckParameter2 + 40);
    }
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 40);
    *(_QWORD *)(BugCheckParameter2 + 8) = v8 | 0x8000000000000000uLL;
  }
  v11 = *(_QWORD *)(qword_140C51F48 + 8 * ((v10 >> 43) & 0x3FF));
  v32 = *(_QWORD *)(BugCheckParameter2 + 16);
  MiSetNonResidentPteHeat((unsigned __int64 *)&v32, 0);
  if ( v5 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = v13 + 48 * (v10 & 0xFFFFFFFFFFLL);
    v5 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v10 & 0xFFFFFFFFFFLL, v12, 0x80000000)
                  + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v15 = v32;
  v16 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v5) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_8;
      v29 = (v15 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_8;
      v29 = (v15 & 1) == 0;
    }
    if ( !v29 )
      v15 |= 0x8000000000000000uLL;
  }
LABEL_8:
  *v5 = v15;
  if ( v16 )
    MiWritePteShadow((__int64)v5, v15);
  if ( v14 )
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v5, 0x11u);
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
  {
    v18 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v18 & 0x400) != 0 )
    {
      if ( qword_140C50780 && (v18 & 0x10) == 0 )
        v18 &= ~qword_140C50780;
      MiDereferenceControlAreaPfnList(*(_QWORD *)(v18 >> 16), v18 >> 16, v17, 3);
    }
  }
  if ( v14 )
  {
    MiLockNestedPageAtDpcInline(v14);
    MiDecrementShareCount(v14, v19, v20, v21);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( !v6 )
  {
    MiSetPfnIdentity(BugCheckParameter2, 0);
    if ( (a2 & 1) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11
                                                      + 4LL * (unsigned int)MiGetPfnPriority(BugCheckParameter2)
                                                      + 6696));
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
      if ( ListEntry )
      {
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = &qword_140C52B80;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_140C52B80);
        v22 = (unsigned __int64)ListEntry;
        if ( !ListEntry )
          goto LABEL_57;
        v30 = (__int64)ListEntry[2].Next & 0xFFF;
        if ( v30 )
        {
          ListEntry[2].Next->Next = (_SLIST_ENTRY *)(0xAAAAAAAAAAAAAAABuLL
                                                   * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
          *(_QWORD *)(v22 + 32) += 8LL;
          v30 = *(_QWORD *)(v22 + 32) & 0xFFFLL;
        }
        if ( v30 < 0xC00 )
        {
          if ( v30 )
            v22 = 0LL;
          else
            *(_QWORD *)(v22 + 24) = MEMORY[0xFFFFF78000000320];
        }
        else
        {
LABEL_57:
          v22 = (unsigned int)dword_140C52B68;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      else
      {
        v22 = (unsigned int)dword_140C52B68;
      }
      if ( v22 )
        KeInsertQueueDpc(&stru_140C52E20, 0LL, 0LL);
    }
  }
}
