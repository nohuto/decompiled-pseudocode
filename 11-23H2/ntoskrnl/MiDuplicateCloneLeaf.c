/*
 * XREFs of MiDuplicateCloneLeaf @ 0x1406645D8
 * Callers:
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140664E98 (MiHandleForkTransitionPte.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     MiCopyPage @ 0x1402840A0 (MiCopyPage.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E41F0 (MiInitializePfnForOtherProcess.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiUpdateTransitionPteFrame @ 0x140330E4C (MiUpdateTransitionPteFrame.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140355810 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 *     MiVaToPfnEx @ 0x14038A450 (MiVaToPfnEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDuplicateCloneLeaf(
        unsigned __int64 a1,
        __int64 *a2,
        ULONG_PTR a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r14
  ULONG_PTR v11; // rbx
  __int64 v12; // rsi
  int v13; // r15d
  unsigned __int64 v14; // rbx
  unsigned __int64 *v15; // rbx
  volatile LONG *SharedVm; // rbx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int16 v21; // r13
  __int64 updated; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // edx
  bool v27; // zf
  char v28; // si
  __int64 v29; // rbx
  __int64 v30; // r8
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // edx
  int v38; // [rsp+20h] [rbp-48h]
  int v39; // [rsp+24h] [rbp-44h]
  int v40; // [rsp+28h] [rbp-40h]
  _BYTE *v41; // [rsp+30h] [rbp-38h]
  char PfnPriority; // [rsp+30h] [rbp-38h]
  char *v43; // [rsp+38h] [rbp-30h] BYREF

  v10 = MI_READ_PTE_LOCK_FREE(a1);
  v43 = (char *)v10;
  if ( (v10 & 1) != 0 )
  {
    v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v43) >> 12) & 0xFFFFFFFFFFLL;
    v12 = 48 * v11 - 0x220000000000LL;
    v13 = 1;
    v10 = *(_QWORD *)(v12 + 16);
  }
  else
  {
    v14 = v10;
    if ( qword_140C65B40 )
    {
      if ( (v10 & 0x10) != 0 )
        v14 = v10 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v14 = v10 & ~qword_140C65B40;
    }
    v11 = (v14 >> 12) & 0xFFFFFFFFFFLL;
    v12 = 48 * v11 - 0x220000000000LL;
    if ( (*(_BYTE *)(v12 + 34) & 0x20) != 0 )
    {
      v15 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
      v43 = (char *)v15;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockWorkingSetExclusive((__int64)v15, a4, v8, v9);
      v41 = (char *)&KeGetCurrentThread()[1].Queue + 6;
      ++*v41;
      --*v41;
      SharedVm = (volatile LONG *)MiGetSharedVm((__int64)v15);
      ExAcquireSpinLockExclusive(SharedVm);
      *((_DWORD *)SharedVm + 1) = 0;
      return 0LL;
    }
    v13 = 0;
  }
  v18 = (v10 >> 5) & 0x1F;
  v39 = MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v12 + 16));
  v20 = v19 + 48 * a3;
  v21 = 128;
  if ( !v13 )
  {
    v21 = 132;
    MiLockNestedPageAtDpcInline(v20);
  }
  MiCopyPage(a3, v11, v21);
  if ( !v13 )
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v12);
  v40 = *(unsigned __int8 *)(v12 + 34) >> 6;
  if ( v13 )
  {
    updated = MiSwizzleInvalidPte(32 * ((unsigned int)v18 | ((a3 & 0xFFFFFFFFFFLL) << 7) | 0x40));
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && a5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (a5 + 1));
        v27 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(a5);
    updated = MiUpdateTransitionPteFrame((__int64)v43, a3);
  }
  v43 = (char *)updated;
  v28 = updated;
  v38 = 0;
  v29 = updated;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
  {
    if ( MiPteHasShadow() )
    {
      v38 = 1;
      if ( !HIBYTE(word_140C66CFC) )
      {
LABEL_29:
        if ( (v28 & 1) != 0 )
          v29 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_29;
    }
  }
  v31 = (unsigned __int64)a2;
  *a2 = v29;
  if ( v38 )
    MiWritePteShadow((__int64)a2, v29, v30);
  v32 = MiVaToPfnEx(v31);
  MiInitializePfnForOtherProcess(a3, a1, v32, 16);
  *(_QWORD *)(v20 + 16) = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v18);
  v33 = (unsigned __int8)MiLockPageInline(v20);
  if ( v39 )
    *(_QWORD *)(v20 + 16) |= 0x4000000uLL;
  if ( *(unsigned __int8 *)(v20 + 34) >> 6 != v40 )
    MiChangePageAttribute(v20, v40, 3u);
  *(_BYTE *)(v20 + 35) ^= (*(_BYTE *)(v20 + 35) ^ PfnPriority) & 7;
  *(_BYTE *)(v20 + 34) = *(_BYTE *)(v20 + 34) & 0xF8 | 6;
  MiDecrementShareCount(v20);
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    v34 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v34 <= 0xFu && (unsigned __int8)v33 <= 0xFu && v34 >= 2u )
    {
      v35 = KeGetCurrentPrcb();
      v36 = v35->SchedulerAssist;
      v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
      v27 = (v37 & v36[5]) == 0;
      v36[5] &= v37;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick((__int64)v35);
    }
  }
  __writecr8(v33);
  return 1LL;
}
