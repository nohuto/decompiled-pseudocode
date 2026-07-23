/*
 * XREFs of MxSwapPages @ 0x140B58AF8
 * Callers:
 *     MxRelocatePageTables @ 0x140B580F0 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x140B582A8 (MxMovePageTables.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x140219D60 (MiCopyPfnEntryEx.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiFinalizePageAttribute @ 0x1402E1874 (MiFinalizePageAttribute.c)
 *     MiWriteValidPteNewPage @ 0x1402EB2DC (MiWriteValidPteNewPage.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     MxGetPhase0Mapping @ 0x140B58DFC (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxSwapPages(__int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v3; // r15
  __int64 result; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  unsigned __int64 ValidPte; // rbx
  int v12; // ebp
  __int64 v13; // r8
  size_t v14; // r11
  unsigned __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int8 v18; // al
  char v19; // dl
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  unsigned __int64 *v22; // rsi
  int v23; // r12d
  __int64 v24; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  char v29; // dl
  bool v30; // zf
  char v31; // dl
  bool v32; // zf
  char v33; // r9
  bool v34; // zf
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  unsigned __int64 v37; // [rsp+20h] [rbp-48h]
  BOOL v39; // [rsp+80h] [rbp+18h]
  __int64 v40; // [rsp+88h] [rbp+20h] BYREF

  v40 = MI_READ_PTE_LOCK_FREE(a2);
  v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v40) >> 12) & 0xFFFFFFFFFFLL;
  result = MxGetPhase0Mapping();
  v37 = result;
  v5 = result;
  if ( !result )
    return result;
  result = MiGetPage(
             (__int64)MiSystemPartition,
             *(_DWORD *)(a1 + 12) | *(_DWORD *)(a1 + 8) & (unsigned int)_InterlockedExchangeAdd(
                                                                          *(volatile signed __int32 **)a1,
                                                                          1u),
             8u);
  v6 = result;
  if ( result == -1 )
    return result;
  v7 = 48 * result - 0x220000000000LL;
  v8 = 48 * v3 - 0x220000000000LL;
  v9 = (unsigned __int8)MiLockPageInline(v8);
  MiLockNestedPageAtDpcInline(v7);
  MiFinalizePageAttribute(v7, *(unsigned __int8 *)(v8 + 34) >> 6, 1u);
  MiCopyPfnEntryEx(v7, (__int128 *)v8);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v9 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v30 = (v28 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v28;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v9);
  v10 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ValidPte = MiMakeValidPte(v10, v6, 2684354564LL);
  v12 = 0;
  v39 = MiPteInShadowRange(v10);
  v13 = 0x8000000000000000uLL;
  v14 = 4096LL;
  if ( v39 )
  {
    if ( MiPteHasShadow() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C66CFC) != v29 )
        goto LABEL_5;
      v30 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( ((unsigned int)v14 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink)) == 0 )
        goto LABEL_5;
      v30 = (ValidPte & 1) == 0;
    }
    if ( !v30 )
      ValidPte |= v13;
  }
LABEL_5:
  *(_QWORD *)v10 = ValidPte;
  if ( v12 )
    MiWritePteShadow(v10, ValidPte, v13);
  v15 = (__int64)(a2 << 25) >> 16;
  memmove((void *)v5, (const void *)v15, v14);
  if ( ((v10 ^ v15) & 0xFFFFFFFFFFFFF000uLL) == 0 )
  {
    v21 = ZeroPte;
    v22 = (unsigned __int64 *)(v5 + 8 * ((v10 >> 3) & 0x1FF));
    v23 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v22) )
    {
LABEL_15:
      *v22 = v21;
      if ( v23 )
        MiWritePteShadow((__int64)v22, v21, v24);
      v5 = v37;
      goto LABEL_11;
    }
    if ( MiPteHasShadow() )
    {
      v23 = 1;
      if ( HIBYTE(word_140C66CFC) != v31 )
        goto LABEL_15;
      v32 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_15;
      v32 = (ZeroPte & 1) == 0;
    }
    if ( !v32 )
      v21 = ZeroPte | 0x8000000000000000uLL;
    goto LABEL_15;
  }
  v16 = ZeroPte;
  v17 = 0LL;
  if ( !v39 )
    goto LABEL_9;
  if ( MiPteHasShadow() )
  {
    v17 = 1LL;
    if ( HIBYTE(word_140C66CFC) == v33 )
    {
      v34 = (v16 & 1) == 0;
      goto LABEL_43;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v34 = (v16 & 1) == 0;
LABEL_43:
    if ( !v34 )
      v16 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *(_QWORD *)v10 = v16;
  if ( (_DWORD)v17 )
    MiWritePteShadow(v10, v16, v17);
LABEL_11:
  v40 = v40 ^ (v40 ^ (v6 << 12)) & 0xFFFFFFFFFF000LL | 0x20;
  MiWriteValidPteNewPage((__int64 *)a2, v40, 0);
  KeFlushSingleTb(v15, 0, 1u);
  KeFlushSingleTb(v5, 0, 1u);
  v18 = MiLockPageInline(48 * v3 - 0x220000000000LL);
  v19 = *(_BYTE *)(v8 + 34) & 0xDF;
  *(_WORD *)(v8 + 32) = 0;
  v20 = v18;
  *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(v8 + 34) = v19;
  *(_BYTE *)(v8 + 34) &= ~8u;
  MiInsertPageInFreeOrZeroedList(v3, 2);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v20 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      v35 = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
      v36 = v35->SchedulerAssist;
      v30 = ((unsigned int)result & v36[5]) == 0;
      v36[5] &= result;
      if ( v30 )
        result = KiRemoveSystemWorkPriorityKick((__int64)v35);
    }
  }
  __writecr8(v20);
  return result;
}
