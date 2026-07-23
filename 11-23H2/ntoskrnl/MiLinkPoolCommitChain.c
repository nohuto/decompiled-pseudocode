/*
 * XREFs of MiLinkPoolCommitChain @ 0x140286530
 * Callers:
 *     MiCommitPoolMemory @ 0x1402860C0 (MiCommitPoolMemory.c)
 * Callees:
 *     MiWriteTopLevelPxe @ 0x140201D04 (MiWriteTopLevelPxe.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbAsNeeded @ 0x14027A1E0 (MiFlushTbAsNeeded.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiGetContainingPageTable @ 0x1402E1500 (MiGetContainingPageTable.c)
 *     MiLockAndIncrementShareCount @ 0x1402E4038 (MiLockAndIncrementShareCount.c)
 *     MiIsPoolPteInUse @ 0x1402E64D8 (MiIsPoolPteInUse.c)
 *     MiUpdateLargePageBitMap @ 0x1402E8B9C (MiUpdateLargePageBitMap.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x140353088 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

char __fastcall MiLinkPoolCommitChain(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rsi
  ULONG_PTR v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r9
  ULONG_PTR v17; // r9
  _QWORD *v18; // r14
  unsigned __int64 v19; // r14
  __int64 ValidPte; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 ContainingPageTable; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx

  v2 = a2;
  v3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v3 > *(_QWORD *)(a1 + 56) )
    v3 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 78) & 4) != 0 )
  {
    v14 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MI_READ_PTE_LOCK_FREE((unsigned __int64)v14);
    v15 = MiSwizzleInvalidPte(768LL);
    if ( v16 != v15 && (unsigned int)MiIsPoolPteInUse(v16) )
      KeBugCheckEx(0x1Au, 0x5304uLL, (__int64)(v2 << 25) >> 16, v17, 0LL);
    v18 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 24) += 512LL;
    *(_QWORD *)(a1 + 16) = *v18;
    v19 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v18 + 0x44000000000LL) >> 4);
    MiUpdateLargePageBitMap((unsigned int)&MiSystemPartition, v19, 512, 1, 1);
    ValidPte = MiMakeValidPte(0LL, v19, (*(unsigned __int16 *)(a1 + 78) >> 3) & 0x1F | 0xA4000000);
    if ( (unsigned __int64)v14 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v14 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      if ( MiPteInShadowRange((unsigned __int64)v14) )
      {
        if ( (unsigned int)MiPteHasShadow(v22, v21, v23) )
        {
          if ( !HIBYTE(word_140C66CFC) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
          *v14 = ValidPte;
          MiWritePteShadow(v14, ValidPte);
          goto LABEL_28;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          ValidPte |= 0x8000000000000000uLL;
        }
      }
      *v14 = ValidPte;
    }
    else
    {
      MiWriteTopLevelPxe(v14, ValidPte);
    }
LABEL_28:
    ContainingPageTable = MiGetContainingPageTable(v14);
    MiLockAndIncrementShareCount(ContainingPageTable);
    LOBYTE(CurrentThread) = MiInitializeLargeNonPagedPoolLeafFrames(v2, v19);
    return (char)CurrentThread;
  }
  MiFlushTbAsNeeded(a2, ((__int64)(v3 - a2) >> 3) + 1, *(_DWORD *)(a1 + 44), 1);
  v5 = *(_QWORD *)(a1 + 32);
  for ( LOBYTE(CurrentThread) = 0; v2 <= v3; v2 += 8LL )
  {
    v7 = *(_QWORD *)v2;
    if ( v2 >= 0xFFFFF6FB7DBED000uLL
      && v2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v7 & 1) != 0
      && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v26 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
        v27 = v7 | 0x20;
        if ( (v26 & 0x20) == 0 )
          v27 = *(_QWORD *)v2;
        v7 = v27;
        if ( (v26 & 0x42) != 0 )
          v7 = v27 | 0x42;
      }
    }
    CurrentThread = (struct _KTHREAD *)(v7 & 0x3E0);
    if ( (v7 & 0xC01) != 0 || CurrentThread != 0LL )
    {
      if ( (v7 & 1) == 0 )
      {
        LOBYTE(CurrentThread) = CurrentThread == (struct _KTHREAD *)992;
        if ( (((v7 & 0xC00) == 0) & (unsigned __int8)CurrentThread) != 0 )
          KeBugCheckEx(0x1Au, 0x5308uLL, v2, v7, 0LL);
      }
      continue;
    }
    if ( v5 )
      v8 = (__int64)(v5 + 0x94000000000LL) >> 3;
    else
      v8 = 0xFFFFFFFFFLL;
    v9 = v8 << 28;
    if ( qword_140C65B40 )
    {
      if ( (qword_140C65B40 & v9) != 0 )
        v9 |= 0x10uLL;
      else
        v9 |= qword_140C65B40;
    }
    v10 = v9 | 0x3E0;
    LODWORD(CurrentThread) = MiPteInShadowRange(v2);
    if ( (_DWORD)CurrentThread )
    {
      if ( (unsigned int)MiPteHasShadow(v12, v11, v13) )
      {
        if ( !HIBYTE(word_140C66CFC) && (v10 & 1) != 0 )
          v10 |= 0x8000000000000000uLL;
        *(_QWORD *)v2 = v10;
        LOBYTE(CurrentThread) = MiWritePteShadow(v2, v10);
        goto LABEL_17;
      }
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v10 & 1) != 0 )
        v10 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v2 = v10;
LABEL_17:
    v5 = v2;
  }
  *(_QWORD *)(a1 + 32) = v5;
  return (char)CurrentThread;
}
