/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x1402EF008
 * Callers:
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiHandleCollidedFault @ 0x1402EED90 (MiHandleCollidedFault.c)
 *     MiFlushWaitForReadInProgress @ 0x140635FA8 (MiFlushWaitForReadInProgress.c)
 * Callees:
 *     MiImagePageOk @ 0x1402185AC (MiImagePageOk.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRelockFaultState @ 0x140286D78 (MiRelockFaultState.c)
 *     MiFreeInPageSupportBlock @ 0x1402BD2CC (MiFreeInPageSupportBlock.c)
 *     KeAbPostReleaseEx @ 0x1402BD4C0 (KeAbPostReleaseEx.c)
 *     MiUnlockProtoPoolPage @ 0x1402DAEF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DAF84 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRelockProtoPoolPage @ 0x1402EF244 (MiRelockProtoPoolPage.c)
 *     MiReleaseFaultState @ 0x1402EF2A0 (MiReleaseFaultState.c)
 *     MiAddLockedPageCharge @ 0x1402EF368 (MiAddLockedPageCharge.c)
 *     MiIsFaultPteIntact @ 0x1402EF3C8 (MiIsFaultPteIntact.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KeAbPreWait @ 0x1402FD270 (KeAbPreWait.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348380 (MiLockNestedPageAtDpcInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        _DWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // r15
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rcx
  ULONG_PTR v16; // rsi
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v23; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  unsigned int v28; // ebx
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp+10h]
  unsigned __int8 v31; // [rsp+88h] [rbp+20h] BYREF

  v31 = a4;
  v30 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v8 = MI_READ_PTE_LOCK_FREE(v30);
  v12 = a5;
  v13 = *(_QWORD *)a2;
  v29 = v8;
  if ( *a5 )
    goto LABEL_33;
  if ( !(unsigned int)MiAddLockedPageCharge(a2, 2LL) )
    *v12 = 1;
  if ( *v12 )
    goto LABEL_33;
  if ( a3 && *(_WORD *)(a3 + 32) >= 0x7FFFu )
  {
    *v12 = 1;
    MiRemoveLockedPageChargeAndDecRef(a2);
  }
  if ( *v12 )
  {
LABEL_33:
    if ( a3 )
    {
      MiLockNestedPageAtDpcInline(a3, v9, v10, v11);
      MiRemoveLockedPageChargeAndDecRef(a3);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(v13 + 144), 1u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    MiUnlockProtoPoolPage(a3, v31);
  }
  else
  {
    if ( (_DWORD)KiIrqlFlags
      && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
      && CurrentIrql <= 0xFu )
    {
      v23 = v31;
      if ( v31 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v23 = v31;
        v9 = -1LL << (v31 + 1);
        v26 = ~(unsigned __int16)v9;
        v27 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v23 = v31;
    }
    __writecr8(v23);
  }
  v14 = 0LL;
  if ( a1[7] )
  {
    LOBYTE(v9) = 17;
    v14 = MiReleaseFaultState(a1 + 7, v9, 0LL);
  }
  v15 = *(_QWORD *)(v13 + 184);
  if ( v15 )
  {
    v19 = KeAbPreAcquire(v15, 0LL);
    v16 = v19;
    if ( v19 )
      KeAbPreWait(v19, v20, v21);
  }
  else
  {
    v16 = 0LL;
  }
  KeWaitForSingleObject((PVOID)(v13 + 24), WrPageIn, 0, 0, 0LL);
  if ( v16 )
  {
    KeAbPreAcquire(*(_QWORD *)(v13 + 184), v16);
    KeAbPostReleaseEx(*(_QWORD *)(v13 + 184), v16);
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)(v13 - 32));
  if ( a1[7] )
    MiRelockFaultState((__int64)(a1 + 7), v14);
  if ( *v12 )
    return 3221226548LL;
  if ( a3 )
  {
    MiRelockProtoPoolPage(a3, &v31);
    LODWORD(a5) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&a5);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2);
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (unsigned int)MiIsFaultPteIntact(a1, *a1, v30, &v29) && MiImagePageOk(*a1, a2, v17, 0LL) )
      return 0LL;
    MiRemoveLockedPageChargeAndDecRef(a2);
    return 3221226548LL;
  }
  v28 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
  MiRemoveLockedPageChargeAndDecRef(a2);
  return v28 - 1073740748;
}
