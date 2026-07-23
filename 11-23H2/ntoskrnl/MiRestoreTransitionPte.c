/*
 * XREFs of MiRestoreTransitionPte @ 0x14033544C
 * Callers:
 *     MiRelinkStandbyPage @ 0x14025A9F0 (MiRelinkStandbyPage.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MiWriteCompletePfn @ 0x1402F49E0 (MiWriteCompletePfn.c)
 *     MiHandleInPageError @ 0x14033540C (MiHandleInPageError.c)
 *     MiUnlinkStandbyPage @ 0x14046D7FA (MiUnlinkStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x140650B74 (MiDiscardTransitionPteEx.c)
 *     MiRepointPteAtExtendedStandby @ 0x14065211C (MiRepointPteAtExtendedStandby.c)
 *     MiReuseStandbyPage @ 0x14065220C (MiReuseStandbyPage.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x140215FA0 (MiGetTopLevelPfn.c)
 *     MiSetPfnIdentity @ 0x140219488 (MiSetPfnIdentity.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     MI_IS_RESET_PTE @ 0x1402855C0 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x1402858CC (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x140285A60 (MiTransferSoftwarePte.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CE60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 *     MiGetPagingFileOffset @ 0x1402F2AF4 (MiGetPagingFileOffset.c)
 *     MiClearPfnImageVerified @ 0x140335648 (MiClearPfnImageVerified.c)
 *     MiDereferenceControlAreaPfnList @ 0x140339E00 (MiDereferenceControlAreaPfnList.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

__int64 __fastcall MiRestoreTransitionPte(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v2; // r13
  _QWORD *v4; // r15
  int v5; // r13d
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // r12
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  int v13; // r14d
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 TopLevelPfn; // rax
  unsigned __int64 v23; // rdx
  bool v24; // zf
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter2 + 40) >> 53;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  v5 = v2 & 1;
  MiClearPfnImageVerified(BugCheckParameter2);
  v6 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( v6 >= 0 )
  {
    v8 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
    {
      if ( MI_IS_RESET_PTE(*v8) )
      {
        v21 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2 + 16);
        *v8 = MiUpdatePageFileHighInPte(v21, 0LL);
      }
      TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
      v23 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      if ( TopLevelPfn != BugCheckParameter2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v23 + 1851) & 0x60) == 0x40 )
        _InterlockedIncrement64((volatile signed __int64 *)(v23 + 1872));
    }
    v9 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (v9 & 0xFFFFFFFFFFLL) == 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) )
      v4 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  else if ( (v6 & 0x10000000000LL) != 0 || (v7 = *(_QWORD *)(BugCheckParameter2 + 8), v7 <= 0) )
  {
    v8 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    v9 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && !(unsigned int)MiGetPagingFileOffset(BugCheckParameter2 + 16)
      && MI_IS_RESET_PTE(*v8) )
    {
      v20 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2 + 16);
      *v8 = MiUpdatePageFileHighInPte(v20, 0LL);
      v9 = *(_QWORD *)(BugCheckParameter2 + 40);
    }
  }
  else
  {
    v8 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    *(_QWORD *)(BugCheckParameter2 + 8) = v7 | 0x8000000000000000uLL;
    v9 = v6;
  }
  v10 = *(_QWORD *)(qword_140C673C8 + 8 * ((v9 >> 43) & 0x3FF));
  v11 = MiTransferSoftwarePte(*v8, 0LL, 0, 4);
  if ( v4 )
  {
    v12 = 0LL;
  }
  else
  {
    v12 = 48 * (v9 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v4 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v9 & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                  + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v13 = 0;
  result = MiPteInShadowRange((unsigned __int64)v4);
  if ( (_DWORD)result )
  {
    result = MiPteHasShadow(v16, v15, v17);
    if ( (_DWORD)result )
    {
      v13 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_8;
      v24 = (v11 & 1) == 0;
    }
    else
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) == 0 )
        goto LABEL_8;
      v24 = (v11 & 1) == 0;
    }
    if ( !v24 )
    {
      result = 0x8000000000000000uLL;
      v11 |= 0x8000000000000000uLL;
    }
  }
LABEL_8:
  *v4 = v11;
  if ( v13 )
    result = MiWritePteShadow(v4, v11);
  if ( v12 )
    result = MiUnmapPageInHyperSpaceWorker((unsigned __int64)v4, 0x11u);
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
  {
    v19 = *v8;
    if ( (*v8 & 0x400) != 0 )
    {
      if ( qword_140C65B40 && (v19 & 0x10) == 0 )
        v19 &= ~qword_140C65B40;
      result = MiDereferenceControlAreaPfnList(*(_QWORD *)(v19 >> 16), v19 >> 16, v17, 3LL);
    }
  }
  if ( v12 )
  {
    MiLockNestedPageAtDpcInline(v12, v15, v17, v18);
    MiDecrementShareCount(v12);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( !v5 )
  {
    result = MiSetPfnIdentity(BugCheckParameter2, 0);
    if ( (a2 & 1) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
    }
    else
    {
      result = MiGetPfnPriority(BugCheckParameter2);
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 4LL * (unsigned int)result + 6888));
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
      if ( ListEntry )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
        v25 = (unsigned __int64)ListEntry;
        if ( !ListEntry )
          goto LABEL_53;
        v26 = (__int64)ListEntry[2].Next & 0xFFF;
        if ( v26 )
        {
          ListEntry[2].Next->Next = (_SLIST_ENTRY *)(0xAAAAAAAAAAAAAAABuLL
                                                   * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
          *(_QWORD *)(v25 + 32) += 8LL;
          v26 = *(_QWORD *)(v25 + 32) & 0xFFFLL;
        }
        if ( v26 < 0xC00 )
        {
          if ( v26 )
            v25 = 0LL;
          else
            *(_QWORD *)(v25 + 24) = MEMORY[0xFFFFF78000000320];
        }
        else
        {
LABEL_53:
          v25 = (unsigned int)dword_140C67FE8;
        }
        result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      }
      else
      {
        v25 = (unsigned int)dword_140C67FE8;
      }
      if ( v25 )
        return KiInsertQueueDpc((ULONG_PTR)&dword_140C682A0, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
