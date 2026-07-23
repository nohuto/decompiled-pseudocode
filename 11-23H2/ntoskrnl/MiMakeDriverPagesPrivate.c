/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x140291CE0
 * Callers:
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1402845A0 (MiSetSystemCodeProtection.c)
 *     MmProtectDriverSection @ 0x14036EA10 (MmProtectDriverSection.c)
 *     MiLockDriverPageRange @ 0x14061A380 (MiLockDriverPageRange.c)
 *     MiBackSingleImageWithPagefile @ 0x140871E64 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x140A2B95C (MiSplitDriverPage.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14020AB68 (MiSessionLookupImage.c)
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiDriverPageMustStayResident @ 0x140291334 (MiDriverPageMustStayResident.c)
 *     MiUnlockLoaderEntry @ 0x140292368 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402923F4 (MiLockLoaderEntry.c)
 *     MiUseProtectedSlabAllocatorForDriverPage @ 0x140292634 (MiUseProtectedSlabAllocatorForDriverPage.c)
 *     MiCheckSlabPage @ 0x140292678 (MiCheckSlabPage.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DB214 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiAddLockedPageCharge @ 0x1402EF5F8 (MiAddLockedPageCharge.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiMakeDriverPageStayResident @ 0x14061A8D8 (MiMakeDriverPageStayResident.c)
 *     MiAllocateDriverPage @ 0x140706534 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // r13d
  unsigned __int16 *SessionVm; // rax
  __int64 v10; // rcx
  ULONG_PTR v11; // r14
  int v12; // eax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r15
  __int64 v15; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v17; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v19; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 v23; // rbp
  unsigned __int8 v24; // al
  __int64 v25; // r9
  __int64 v26; // r14
  ULONG_PTR v27; // rbx
  unsigned __int64 v28; // rbp
  __int64 v29; // rax
  struct _KTHREAD *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  bool v35; // zf
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  __int64 v39; // rax
  unsigned int v40; // ebx
  unsigned __int64 v41; // r14
  ULONG_PTR v42; // rbx
  unsigned __int64 v43; // rbx
  __int64 v44; // r9
  __int64 v45; // rbp
  int v46; // eax
  int v47; // r14d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int8 v51; // [rsp+30h] [rbp-A8h]
  char v52; // [rsp+31h] [rbp-A7h]
  __int64 v53; // [rsp+38h] [rbp-A0h]
  unsigned int v54; // [rsp+40h] [rbp-98h]
  unsigned int v55; // [rsp+44h] [rbp-94h] BYREF
  unsigned __int64 DriverPage; // [rsp+48h] [rbp-90h]
  unsigned __int64 v57; // [rsp+50h] [rbp-88h]
  int v58; // [rsp+58h] [rbp-80h]
  int v59; // [rsp+5Ch] [rbp-7Ch]
  int v60; // [rsp+60h] [rbp-78h] BYREF
  int v61; // [rsp+64h] [rbp-74h] BYREF
  unsigned __int64 v62; // [rsp+68h] [rbp-70h]
  _QWORD *v63; // [rsp+70h] [rbp-68h]
  __int64 v64; // [rsp+78h] [rbp-60h]
  __int64 v65; // [rsp+80h] [rbp-58h]
  ULONG_PTR v66; // [rsp+88h] [rbp-50h]
  ULONG_PTR v67[8]; // [rsp+98h] [rbp-40h] BYREF

  v4 = 0;
  v55 = 0;
  v63 = 0LL;
  v52 = 0;
  v65 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    v57 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
    SessionVm = (unsigned __int16 *)MiGetSessionVm();
  }
  else
  {
    v57 = 0LL;
    SessionVm = (unsigned __int16 *)&unk_140C69B40;
  }
  v53 = (__int64)SessionVm;
  v10 = 0LL;
  v64 = *(_QWORD *)(qword_140C673C8 + 8LL * SessionVm[87]);
  if ( (a4 & 3) == 0 && (MiFlags & 0xC000) == 0xC000 )
    v10 = 2LL;
  v62 = 0LL;
  v11 = a1 + 264;
  v58 = a4 & 4;
  v12 = v10 | 1;
  v66 = a1 + 264;
  v13 = a2;
  DriverPage = -1LL;
  if ( (a4 & 4) == 0 )
    v12 = v10;
  v14 = 0LL;
  v59 = v12;
  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v17 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v17->AbEntrySummary;
  if ( v17->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v10, v17)) != 0 )
  {
    _BitScanForward(&v19, AbEntrySummary);
    v54 = v19;
    v17->AbEntrySummary = AbEntrySummary & ~(1 << v19);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v37 = *SchedulerAssist;
      do
      {
        v38 = v37;
        v37 = _InterlockedCompareExchange(SchedulerAssist, v37 & 0xFFDFFFFF, v37);
      }
      while ( v38 != v37 );
      if ( (v37 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v15 = (__int64)(&v17[1].Process + 12 * v54);
    if ( v11 - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v17->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v15 + 8) = SessionId;
    *(_QWORD *)v15 = v11 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx(v11, v15, v11);
  if ( v15 )
    *(_BYTE *)(v15 + 18) = 1;
  v23 = v53;
  v24 = MiLockWorkingSetShared(v53);
  v51 = v24;
  if ( a2 > a3 )
    goto LABEL_31;
  v26 = a1;
  while ( 1 )
  {
    if ( v14 )
    {
      if ( (v13 & 0xFFF) != 0 )
        goto LABEL_21;
      MiUnlockPageTableInternal(v23, v14);
    }
    v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v23, v14, 0, v25);
LABEL_21:
    v27 = *(_QWORD *)v13;
    if ( MiPteInShadowRange(v13)
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v49 = *((_QWORD *)&Flink->Flink + ((v13 >> 3) & 0x1FF));
        v50 = v27 | 0x20;
        if ( (v49 & 0x20) == 0 )
          v50 = v27;
        v27 = v50;
        if ( (v49 & 0x42) != 0 )
          v27 = v50 | 0x42;
      }
    }
    v67[0] = v27;
    if ( !v27 )
      goto LABEL_26;
    if ( (v27 & 1) == 0 )
    {
      if ( (v27 & 0x400) == 0 )
        goto LABEL_26;
      MiUnlockPageTableInternal(v23, v14);
      MiUnlockWorkingSetShared(v23, v51);
      MiUnlockLoaderEntry(v26 + 160, 0LL);
      v45 = (__int64)((v13 << 25) - v65) >> 16;
      v46 = MmAccessFault(0LL, v45, 0, 0LL);
      v47 = v46;
      if ( v46 < 0 && (v13 == a2 || (a4 & 8) == 0) )
        KeBugCheckEx(0x1Au, 0x3000uLL, v45, v27, v46);
      MiLockLoaderEntry(a1 + 160, 0LL);
      v23 = v53;
      MiLockWorkingSetShared(v53);
      if ( v47 >= 0 )
      {
        MiLockPageTableInternal(v53, v14, 0, v25);
        v26 = a1;
        goto LABEL_27;
      }
      v14 = 0LL;
      goto LABEL_60;
    }
    v28 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v67) >> 12) & 0xFFFFFFFFFFLL)
        - 0x220000000000LL;
    v29 = *(_QWORD *)(v28 + 40);
    if ( v29 < 0 )
    {
      if ( (v29 & 0x10000000000LL) != 0 || (v39 = *(_QWORD *)(v28 + 8), v39 < 0) || !v39 )
      {
        if ( (a4 & 1) == 0 || (v27 & 0x800) == 0 && (v27 & 0x200) != 0 )
          break;
      }
    }
    v23 = v53;
LABEL_26:
    v13 += 8LL;
LABEL_27:
    if ( v13 > a3 )
      goto LABEL_28;
  }
  v40 = (*(_DWORD *)(v28 + 16) >> 5) & 0x1F;
  if ( (MiFlags & 0x8000) != 0 && (v57 || (a4 & 2) != 0) && ((*(_DWORD *)(v28 + 16) >> 5) & 2) != 0 )
  {
LABEL_92:
    v23 = v53;
    v4 = -1073741755;
    goto LABEL_28;
  }
  if ( dword_140C6987C && v57 && ((*(_DWORD *)(v28 + 16) >> 5) & 2) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x8000000) != 0 )
      goto LABEL_92;
    v26 = a1;
  }
  if ( v58 && (*(_DWORD *)(v26 + 196) & 1) == 0 && (*(_BYTE *)(v28 + 35) & 8) != 0 )
  {
    v23 = v53;
    goto LABEL_26;
  }
  if ( DriverPage == -1LL )
    goto LABEL_61;
  v41 = 48 * DriverPage - 0x220000000000LL;
  if ( (unsigned int)MiUseProtectedSlabAllocatorForDriverPage(v64, v40, &v55) )
  {
    if ( !(unsigned int)MiCheckSlabPfnBitmap(v41, 1LL) || !(unsigned int)MiCheckSlabPage(v41, v55) )
      goto LABEL_99;
LABEL_57:
    v42 = (__int64)((v13 << 25) - v65) >> 16;
    MiCopyOnWrite(v42, v13, DriverPage, v59);
    v25 = a1;
    if ( v57 && !v63 && (v63 = MiSessionLookupImage(*(_QWORD *)(a1 + 48)), *((_BYTE *)v63 + 64)) )
    {
      v52 = 1;
    }
    else if ( !v52 )
    {
LABEL_59:
      v23 = v53;
      DriverPage = -1LL;
      if ( (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v41 + 40) >> 60) & 7) == 3 )
        MiMakeDriverPageStayResident(v25, v53, v42);
LABEL_60:
      v26 = a1;
      goto LABEL_26;
    }
    if ( MiDriverPageMustStayResident(v25, v13) )
    {
      v60 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v60);
        while ( *(__int64 *)(v28 + 24) < 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(v28);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v61 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v61);
        while ( *(__int64 *)(v41 + 24) < 0 );
      }
      MiAddLockedPageCharge(v41, 1LL);
      _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v25 = a1;
    }
    goto LABEL_59;
  }
  if ( !(unsigned int)MiCheckSlabPfnBitmap(v41, 1LL) || (unsigned int)MiCheckSlabPage(v41, 4LL) )
    goto LABEL_57;
LABEL_99:
  if ( v62 == v13 )
    goto LABEL_57;
  MiReleaseFreshPage(v41);
  v62 = v13;
LABEL_61:
  v23 = v53;
  MiUnlockPageTableInternal(v53, v14);
  MiUnlockWorkingSetShared(v53, v51);
  v26 = a1;
  MiUnlockLoaderEntry(a1 + 160, 0LL);
  DriverPage = MiAllocateDriverPage(v64, v40, 0LL);
  v43 = DriverPage;
  MiLockLoaderEntry(a1 + 160, 0LL);
  MiLockWorkingSetShared(v53);
  MiLockPageTableInternal(v53, v14, 0, v44);
  if ( v43 != -1LL )
    goto LABEL_27;
  v4 = -1073741801;
LABEL_28:
  if ( v14 )
    MiUnlockPageTableInternal(v23, v14);
  v24 = v51;
  v11 = v66;
LABEL_31:
  MiUnlockWorkingSetShared(v23, v24);
  v30 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  KeAbPostRelease(v11);
  v35 = v30->SpecialApcDisable++ == -1;
  if ( v35 && ($C71981A45BEB2B45F82C232A7085991E *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
    KiCheckForKernelApcDelivery(v32, v31, v33, v34);
  if ( DriverPage != -1LL )
    MiReleaseFreshPage(48 * DriverPage - 0x220000000000LL);
  return v4;
}
