/*
 * XREFs of MxSwapPages @ 0x140B5BAA8
 * Callers:
 *     MxRelocatePageTables @ 0x140B5B0A0 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x140B5B258 (MxMovePageTables.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x140219D80 (MiCopyPfnEntryEx.c)
 *     MiGetPage @ 0x14026D240 (MiGetPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiFinalizePageAttribute @ 0x1402E15E4 (MiFinalizePageAttribute.c)
 *     MiWriteValidPteNewPage @ 0x1402EB04C (MiWriteValidPteNewPage.c)
 *     KeFlushSingleTb @ 0x1402EB0C4 (KeFlushSingleTb.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348380 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MxGetPhase0Mapping @ 0x140B5BDAC (MxGetPhase0Mapping.c)
 */

void __fastcall MxSwapPages(__int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v3; // r15
  unsigned __int64 v4; // r12
  __int64 Page; // rax
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
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  int v37; // eax
  _DWORD *v38; // r8
  unsigned __int64 Phase0Mapping; // [rsp+20h] [rbp-48h]
  BOOL v41; // [rsp+80h] [rbp+18h]
  __int64 v42; // [rsp+88h] [rbp+20h] BYREF

  v42 = MI_READ_PTE_LOCK_FREE(a2);
  v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v42) >> 12) & 0xFFFFFFFFFFLL;
  Phase0Mapping = MxGetPhase0Mapping();
  v4 = Phase0Mapping;
  if ( !Phase0Mapping )
    return;
  Page = MiGetPage(
           (__int64)MiSystemPartition,
           *(_DWORD *)(a1 + 12) | *(_DWORD *)(a1 + 8) & (unsigned int)_InterlockedExchangeAdd(
                                                                        *(volatile signed __int32 **)a1,
                                                                        1u),
           8u);
  v6 = Page;
  if ( Page == -1 )
    return;
  v7 = 48 * Page - 0x220000000000LL;
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
  v10 = ((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ValidPte = MiMakeValidPte(v10, v6, 2684354564LL);
  v12 = 0;
  v41 = MiPteInShadowRange(v10);
  v13 = 0x8000000000000000uLL;
  v14 = 4096LL;
  if ( v41 )
  {
    if ( MiPteHasShadow() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C66DFC) != v29 )
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
  memmove((void *)Phase0Mapping, (const void *)v15, v14);
  if ( ((v10 ^ v15) & 0xFFFFFFFFFFFFF000uLL) == 0 )
  {
    v21 = ZeroPte;
    v22 = (unsigned __int64 *)(Phase0Mapping + 8 * ((v10 >> 3) & 0x1FF));
    v23 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v22) )
    {
LABEL_15:
      *v22 = v21;
      if ( v23 )
        MiWritePteShadow((__int64)v22, v21, v24);
      v4 = Phase0Mapping;
      goto LABEL_11;
    }
    if ( MiPteHasShadow() )
    {
      v23 = 1;
      if ( HIBYTE(word_140C66DFC) != v31 )
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
  if ( !v41 )
    goto LABEL_9;
  if ( MiPteHasShadow() )
  {
    v17 = 1LL;
    if ( HIBYTE(word_140C66DFC) == v33 )
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
  v42 = v42 ^ (v42 ^ (v6 << 12)) & 0xFFFFFFFFFF000LL | 0x20;
  MiWriteValidPteNewPage((__int64 *)a2, v42, 0);
  KeFlushSingleTb(v15, 0, 1u);
  KeFlushSingleTb(v4, 0, 1u);
  v18 = MiLockPageInline(48 * v3 - 0x220000000000LL);
  v19 = *(_BYTE *)(v8 + 34) & 0xDF;
  *(_WORD *)(v8 + 32) = 0;
  v20 = v18;
  *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(v8 + 34) = v19;
  *(_BYTE *)(v8 + 34) &= ~8u;
  MiInsertPageInFreeOrZeroedList(v3, 2);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    v35 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v35 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v35 >= 2u )
    {
      v36 = KeGetCurrentPrcb();
      v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
      v38 = v36->SchedulerAssist;
      v30 = (v37 & v38[5]) == 0;
      v38[5] &= v37;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick((__int64)v36);
    }
  }
  __writecr8(v20);
}
