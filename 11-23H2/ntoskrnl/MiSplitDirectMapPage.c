/*
 * XREFs of MiSplitDirectMapPage @ 0x14063F7B4
 * Callers:
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x140219D60 (MiCopyPfnEntryEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x1402840A0 (MiCopyPage.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLockedPageCharge @ 0x1402DBDB0 (MiRemoveLockedPageCharge.c)
 *     MiFinalizePageAttribute @ 0x1402E1874 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiAddLockedPageCharge @ 0x1402EF5F8 (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiUpdateTransitionPteFrame @ 0x140330E4C (MiUpdateTransitionPteFrame.c)
 *     MiDereferenceControlAreaPfnList @ 0x140339E00 (MiDereferenceControlAreaPfnList.c)
 *     MiColdPageSizeSupported @ 0x140347BC0 (MiColdPageSizeSupported.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiWaitForFreePage @ 0x140653F98 (MiWaitForFreePage.c)
 *     MiAddPageToHeatRanges @ 0x140654244 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x140654B4C (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiSplitDirectMapPage(unsigned __int16 *a1, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 i; // rax
  ULONG_PTR v8; // r13
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  char v11; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  int v17; // r8d
  unsigned __int8 v18; // al
  int v19; // edx
  __int128 v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 updated; // rbx
  __int64 v29; // r8
  int v30; // eax
  bool v31; // zf
  unsigned __int64 v32; // r11
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // ecx
  ULONG_PTR v36; // r15
  char v37; // al
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  int v40; // eax
  _DWORD *v41; // r8
  __int128 v42; // [rsp+20h] [rbp-38h] BYREF
  __int128 v43; // [rsp+30h] [rbp-28h] BYREF
  __int128 v44; // [rsp+40h] [rbp-18h]
  __int64 *v46; // [rsp+A0h] [rbp+48h]
  __int64 v47; // [rsp+A8h] [rbp+50h]

  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v4 = 48 * a3 - 0x220000000000LL;
  v5 = *(_DWORD *)(a2 + 12) | *(_DWORD *)(a2 + 8) & _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u);
  v47 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  for ( i = MiGetPage(v6, v5, 0); ; i = MiGetPage(v6, v5, 0) )
  {
    v8 = i;
    if ( i != -1 )
      break;
    MiWaitForFreePage(v6);
  }
  v9 = 48 * i - 0x220000000000LL;
  v10 = (unsigned __int8)MiLockPageInline(v4);
  v11 = *(_BYTE *)(v4 + 35);
  if ( (v11 & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_20;
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) == 0
      || CurrentIrql > 0xFu
      || (unsigned __int8)v10 > 0xFu
      || CurrentIrql < 2u )
    {
      goto LABEL_20;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
    v16 = (v15 & SchedulerAssist[5]) == 0;
    v17 = v15 & SchedulerAssist[5];
LABEL_18:
    SchedulerAssist[5] = v17;
    if ( v16 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
LABEL_20:
    __writecr8(v10);
    MiReleaseFreshPage(v9);
    return -1LL;
  }
  if ( (v11 & 0x10) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_20;
    v18 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 || v18 > 0xFu || (unsigned __int8)v10 > 0xFu || v18 < 2u )
      goto LABEL_20;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
    v16 = (v19 & SchedulerAssist[5]) == 0;
    v17 = v19 & SchedulerAssist[5];
    goto LABEL_18;
  }
  MiLockNestedPageAtDpcInline(v9);
  MiFinalizePageAttribute(v9, *(unsigned __int8 *)(v4 + 34) >> 6, 1u);
  v21 = *(_OWORD *)(v4 + 16);
  v42 = *(_OWORD *)v4;
  v22 = *(__m128i *)(v4 + 32);
  v43 = v21;
  *(_QWORD *)&v44 = v22.m128i_i64[0];
  *((_QWORD *)&v44 + 1) = _mm_srli_si128(v22, 8).m128i_u64[0] & 0xFFDFFFFFFFFFFFFFuLL;
  v23 = MiSwizzleInvalidPte(32LL * ((a1[16] >> 1) & 0x1F));
  if ( !MiPteInShadowRange((unsigned __int64)&v43) )
    goto LABEL_30;
  if ( !MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v23 & 1) != 0 )
      v23 |= v24;
LABEL_30:
    *(_QWORD *)&v43 = v23;
    goto LABEL_31;
  }
  if ( !HIBYTE(word_140C66CFC) && (v23 & 1) != 0 )
    v23 |= v24;
  *(_QWORD *)&v43 = v23;
  MiWritePteShadow((__int64)&v43, v23, v25);
LABEL_31:
  MiCopyPfnEntryEx(v9, &v42);
  *(_BYTE *)(v9 + 34) |= 0x10u;
  *(_WORD *)(v9 + 32) = 0;
  MiAddLockedPageCharge(v9, 1);
  MiDereferenceControlAreaPfnList(v47, 0LL, v26, 2);
  MiCopyPage(v8, a3, 6);
  *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0xF8 | 5;
  v46 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                  + 8LL * ((*(_DWORD *)(v4 + 8) >> 3) & 0x1FF));
  v27 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v46);
  updated = MiUpdateTransitionPteFrame(v27, v8);
  if ( MiPteInShadowRange((unsigned __int64)v46) )
  {
    if ( MiPteHasShadow() )
    {
      v30 = 1;
      if ( !HIBYTE(word_140C66CFC) )
      {
        v31 = (updated & 1) == 0;
        goto LABEL_35;
      }
    }
    else
    {
      v30 = 0;
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v31 = (updated & 1) == 0;
LABEL_35:
        if ( !v31 )
          updated |= 0x8000000000000000uLL;
      }
    }
  }
  else
  {
    v30 = 0;
  }
  v32 = (unsigned __int64)v46;
  *v46 = updated;
  if ( v30 )
    MiWritePteShadow((__int64)v46, updated, v29);
  MiUnmapPageInHyperSpaceWorker(v32, 0x11u);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( *(_WORD *)(v4 + 32) == 1 )
  {
    v36 = a3;
    if ( (unsigned int)MiColdPageSizeSupported(1u)
      && (unsigned int)MiAddPageToHeatRanges(a4, a3, (unsigned int)(v35 + 2)) )
    {
      MiNotifyPageHeat(a4);
    }
  }
  else
  {
    v36 = a3;
  }
  v37 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v4 + 34) = v37 & 0xF8 | 6;
  if ( (unsigned int)MiRemoveLockedPageCharge(v4, v33, v34) )
  {
    *(_BYTE *)(v4 + 35) |= 0x10u;
    MiInsertPageInFreeOrZeroedList(v36, 2);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    v38 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v38 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v38 >= 2u )
    {
      v39 = KeGetCurrentPrcb();
      v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v41 = v39->SchedulerAssist;
      v16 = (v40 & v41[5]) == 0;
      v41[5] &= v40;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)v39);
    }
  }
  __writecr8(v10);
  return v8;
}
