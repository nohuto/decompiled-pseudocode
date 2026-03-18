/*
 * XREFs of MiLockTransitionLeafPageEx @ 0x140347CA8
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140215660 (MiOutSwapWorkingSetPte.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiUserFault @ 0x140235890 (MiUserFault.c)
 *     MiGetPageProtection @ 0x140272A20 (MiGetPageProtection.c)
 *     MiDecommitPages @ 0x14027F7D0 (MiDecommitPages.c)
 *     MiSetSystemCodeProtection @ 0x140284310 (MiSetSystemCodeProtection.c)
 *     MiReservePageFileSpaceForPage @ 0x140284E70 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x1402940D4 (MiActOnPte.c)
 *     MmProtectPool @ 0x140296FC0 (MmProtectPool.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiTryDeleteTransitionPte @ 0x1402F4108 (MiTryDeleteTransitionPte.c)
 *     MiUpdatePrefetchPriority @ 0x1403339DC (MiUpdatePrefetchPriority.c)
 *     MiAccessCheck @ 0x1403510BC (MiAccessCheck.c)
 *     MiSetProtectionOnTransitionPte @ 0x140358670 (MiSetProtectionOnTransitionPte.c)
 *     MiReplacePageTablePage @ 0x140394E4C (MiReplacePageTablePage.c)
 *     MiCheckPteForWriteCluster @ 0x14046C612 (MiCheckPteForWriteCluster.c)
 *     MiCheckCommitReleaseFromVad @ 0x140617C30 (MiCheckCommitReleaseFromVad.c)
 *     MiMakeOutswappedPageResident @ 0x14061856C (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x140619740 (MiWalkResetCommitPte.c)
 *     MiClearDriverHotPatchPtes @ 0x140641DEC (MiClearDriverHotPatchPtes.c)
 *     MiQueryVaPhysicalContiguity @ 0x140648F4C (MiQueryVaPhysicalContiguity.c)
 *     MiMakeTransitionHeatBatch @ 0x1406542B8 (MiMakeTransitionHeatBatch.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065D6C0 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660408 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiHandleForkTransitionPte @ 0x140664948 (MiHandleForkTransitionPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E40 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402DC440 (MiInvalidPteConforms.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140660858 (MiLockSpecialPurposeMemoryCachedPage.c)
 */

__int64 __fastcall MiLockTransitionLeafPageEx(ULONG_PTR BugCheckParameter2, _BYTE *a2, char a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  volatile signed __int32 *v11; // rdi
  signed __int8 v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v16; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  int v26; // eax
  _DWORD *v27; // r8
  int v28; // [rsp+68h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v6 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      v7 = v6;
      if ( (unsigned __int64)a2 > 1 && ((v6 & 1) != 0 || (v6 & 0x400) != 0) || (v6 & 0x800) == 0 )
        return 0LL;
      if ( MiInvalidPteConforms(v6) )
      {
        v8 = v7;
        if ( qword_140C65B40 )
        {
          if ( (v7 & 0x10) != 0 )
            v8 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v8 = v7 & ~qword_140C65B40;
        }
        v9 = (v8 >> 12) & 0xFFFFFFFFFFLL;
        if ( v9 <= qword_140C65BA0 )
        {
          if ( _bittest64((const signed __int64 *)(48 * v9 - 0x21FFFFFFFFD8LL), 0x36u) )
            break;
        }
      }
    }
    v10 = 48 * v9 - 0x220000000000LL;
    v11 = (volatile signed __int32 *)(v10 + 24);
    if ( (unsigned __int64)a2 > 1 )
    {
      *a2 = MiLockPageInline(48 * v9 - 0x220000000000LL);
    }
    else
    {
      v12 = _interlockedbittestandset64(v11, 0x3FuLL);
      if ( a2 == (_BYTE *)1 )
      {
        if ( v12 )
          return 0LL;
      }
      else
      {
        v28 = 0;
        if ( v12 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v28);
            while ( *(__int64 *)v11 < 0 );
          }
          while ( _interlockedbittestandset64(v11, 0x3FuLL) );
        }
      }
    }
    if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v7 )
      break;
    if ( (unsigned __int64)a2 <= 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v16 = (unsigned __int8)*a2;
      _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v21 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v16);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
  {
    v22 = (a2 == (_BYTE *)1) | 2u;
    if ( (a3 & 1) == 0 )
      v22 = a2 == (_BYTE *)1;
    v10 = MiLockSpecialPurposeMemoryCachedPage(v10, v22, v13, v14);
    if ( !v10 )
    {
      if ( (unsigned __int64)a2 > 1 )
      {
        v23 = (unsigned __int8)*a2;
        if ( KiIrqlFlags )
        {
          v24 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && (unsigned __int8)v23 <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
            v27 = v25->SchedulerAssist;
            v21 = (v26 & v27[5]) == 0;
            v27[5] &= v26;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        __writecr8(v23);
      }
      return 0LL;
    }
  }
  if ( (unsigned __int64)a2 <= 1
    && (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
    && !_bittest64((const signed __int64 *)(v10 + 40), 0x28u) )
  {
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v7, *(_QWORD *)(v10 + 8));
  }
  return v10;
}
