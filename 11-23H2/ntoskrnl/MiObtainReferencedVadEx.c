/*
 * XREFs of MiObtainReferencedVadEx @ 0x140274F40
 * Callers:
 *     MiProbeAndLockPrepare @ 0x140234E80 (MiProbeAndLockPrepare.c)
 *     NtGetWriteWatch @ 0x1402EA4F0 (NtGetWriteWatch.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiPrefetchPreallocatePages @ 0x140632678 (MiPrefetchPreallocatePages.c)
 *     MmUpdateUserShadowStackValue @ 0x140646CD0 (MmUpdateUserShadowStackValue.c)
 *     MmGetEnclaveModuleList @ 0x140649270 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x14065DF04 (MiProcessVaContiguityInformation.c)
 *     MiAllocateVirtualMemory @ 0x1406F7430 (MiAllocateVirtualMemory.c)
 *     MiCopyVirtualMemory @ 0x1406F7B20 (MiCopyVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406F9980 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14071A6A8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x14071F1C0 (MiUnmapViewOfSection.c)
 *     MmFreeVirtualMemory @ 0x1407452B0 (MmFreeVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140747A20 (NtResetWriteWatch.c)
 *     MmDeleteTeb @ 0x14076EDBC (MmDeleteTeb.c)
 *     MiCfgMarkValidEntries @ 0x1407A493C (MiCfgMarkValidEntries.c)
 *     MiReferenceCfgVad @ 0x1407A4DFC (MiReferenceCfgVad.c)
 *     MiProcessVaRangesInfoClass @ 0x1407A51F4 (MiProcessVaRangesInfoClass.c)
 *     MmFlushVirtualMemory @ 0x1407B4538 (MmFlushVirtualMemory.c)
 *     MmSecureVirtualMemoryEx @ 0x1407BAB90 (MmSecureVirtualMemoryEx.c)
 *     MiCheckForUserStackOverflow @ 0x1407BDC68 (MiCheckForUserStackOverflow.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1407E6430 (MiUnmapLockedPagesInUserSpace.c)
 *     NtAreMappedFilesTheSame @ 0x1408718D0 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1408ABF5E (MmGetFileNameForAddress.c)
 *     MmSetGraphicsPtes @ 0x140A2EDA0 (MmSetGraphicsPtes.c)
 *     MmRotatePhysicalView @ 0x140A31E80 (MmRotatePhysicalView.c)
 *     MiGetVadForHotPatchInProgress @ 0x140A375BC (MiGetVadForHotPatchInProgress.c)
 *     MmPrepareImagePagesForHotPatch @ 0x140A3C4C4 (MmPrepareImagePagesForHotPatch.c)
 *     MiHandleEnclaveFault @ 0x140A3CED4 (MiHandleEnclaveFault.c)
 *     MiInitializeEnclave @ 0x140A3E148 (MiInitializeEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140A3ECBC (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x140A3F520 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x140A3FB50 (NtTerminateEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3FC00 (MiQueryMemoryPhysicalContiguity.c)
 *     MmStoreFreeVirtualMemory @ 0x140A45FD4 (MmStoreFreeVirtualMemory.c)
 *     MiScrubProcessLargePage @ 0x140A46C44 (MiScrubProcessLargePage.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD0B0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1402754E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140275700 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVad @ 0x14029CA60 (MiLockVad.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockVadShared @ 0x14032A674 (MiUnlockVadShared.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiWaitForVadDeletion @ 0x1406611A8 (MiWaitForVadDeletion.c)
 */

__int64 *__fastcall MiObtainReferencedVadEx(unsigned __int64 a1, char a2, int *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r13
  struct _KTHREAD *v8; // r14
  volatile signed __int64 *v9; // rsi
  unsigned int AbEntrySummary; // eax
  int v11; // r12d
  unsigned int v12; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  _KPROCESS *v16; // rdx
  __int64 *v17; // rbx
  unsigned __int64 v18; // r15
  char v19; // r14
  __int64 v20; // rcx
  volatile signed __int64 *v21; // rsi
  struct _KTHREAD *v22; // r14
  unsigned int v23; // eax
  unsigned int v24; // ecx
  struct _KPRCB *v25; // r8
  signed __int32 *v26; // rdx
  bool v27; // zf
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  struct _KTHREAD *v31; // r14
  unsigned int v32; // eax
  unsigned int v33; // ecx
  struct _KPRCB *v34; // r8
  signed __int32 *v35; // rdx
  signed __int32 v36; // eax
  signed __int32 v37; // ett
  signed __int32 v38; // eax
  signed __int32 v39; // ett
  int v40; // eax
  int v41; // eax
  unsigned int v42; // [rsp+20h] [rbp-68h]
  unsigned int v43; // [rsp+24h] [rbp-64h]
  int v45; // [rsp+98h] [rbp+10h]
  unsigned int v47; // [rsp+A8h] [rbp+20h]

  v3 = 0LL;
  *a3 = 0;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  v8 = KeGetCurrentThread();
  v9 = (volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[7];
  _disable();
  AbEntrySummary = v8->AbEntrySummary;
  v11 = -1;
  if ( v8->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, v8)) != 0 )
  {
    _BitScanForward(&v12, AbEntrySummary);
    v47 = v12;
    v8->AbEntrySummary = AbEntrySummary & ~(1 << v12);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v29 = *SchedulerAssist;
      do
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange(SchedulerAssist, v29 & 0xFFDFFFFF, v29);
      }
      while ( v30 != v29 );
      if ( (v29 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v5 = (__int64)(&v8[1].Process + 12 * v47);
    if ( (unsigned __int64)v9 - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v8->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v5 + 8) = SessionId;
    *(_QWORD *)v5 = (unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&Process[1].Affinity.StaticBitmap[7], 0LL, v5, &Process[1].Affinity.StaticBitmap[7]);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  v16 = KeGetCurrentThread()->ApcState.Process;
  v17 = *(__int64 **)&v16[1].Spare2[23];
  if ( !v17 )
    goto LABEL_69;
  v18 = a1 >> 12;
  if ( v18 < (*((unsigned int *)v17 + 6) | ((unsigned __int64)*((unsigned __int8 *)v17 + 32) << 32))
    || v18 > (*((unsigned int *)v17 + 7) | ((unsigned __int64)*((unsigned __int8 *)v17 + 33) << 32)) )
  {
    v17 = *(__int64 **)&v16[1].Spare2[15];
    if ( v17 )
    {
      do
      {
        if ( v18 > (*((unsigned int *)v17 + 7) | ((unsigned __int64)*((unsigned __int8 *)v17 + 33) << 32)) )
        {
          v17 = (__int64 *)v17[1];
        }
        else
        {
          if ( v18 >= (*((unsigned int *)v17 + 6) | ((unsigned __int64)*((unsigned __int8 *)v17 + 32) << 32)) )
            break;
          v17 = (__int64 *)*v17;
        }
      }
      while ( v17 );
      if ( v17 )
      {
        *(_QWORD *)&v16[1].Spare2[23] = v17;
        goto LABEL_13;
      }
    }
LABEL_69:
    v40 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v40 = -1073741664;
    goto LABEL_71;
  }
LABEL_13:
  v19 = a2;
  if ( (a2 & 1) == 0 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v40 = -1073741558;
LABEL_71:
    *a3 = v40;
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    v27 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v27 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  if ( !_InterlockedIncrement((volatile signed __int32 *)v17 + 9) )
    __fastfail(0xEu);
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  v21 = v17 + 5;
  v45 = a2 & 2;
  if ( (v19 & 2) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v22 = KeGetCurrentThread();
    _disable();
    v23 = v22->AbEntrySummary;
    if ( v22->AbEntrySummary || (v23 = KiAbTryReclaimOrphanedEntries(v20, v22)) != 0 )
    {
      _BitScanForward(&v24, v23);
      v42 = v24;
      v22->AbEntrySummary = v23 & ~(1 << v24);
      v25 = KeGetCurrentPrcb();
      v26 = (signed __int32 *)v25->SchedulerAssist;
      if ( v26 )
      {
        _m_prefetchw(v26);
        v36 = *v26;
        do
        {
          v37 = v36;
          v36 = _InterlockedCompareExchange(v26, v36 & 0xFFDFFFFF, v36);
        }
        while ( v37 != v36 );
        if ( (v36 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
      _enable();
      v3 = (__int64)(&v22[1].Process + 12 * v42);
      if ( (unsigned __int64)v21 - qword_140C659E8 < 0x8000000000LL )
        v11 = MmGetSessionIdEx(v22->ApcState.Process);
      *(_DWORD *)(v3 + 8) = v11;
      *(_QWORD *)v3 = (unsigned __int64)v21 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _InterlockedCompareExchange64(v21, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v21, 0LL, v3, v21);
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    BYTE1(CurrentThread[1].Queue) |= 0x40u;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    v31 = KeGetCurrentThread();
    _disable();
    v32 = v31->AbEntrySummary;
    if ( v31->AbEntrySummary || (v32 = KiAbTryReclaimOrphanedEntries(v20, v31)) != 0 )
    {
      _BitScanForward(&v33, v32);
      v43 = v33;
      v31->AbEntrySummary = v32 & ~(1 << v33);
      v34 = KeGetCurrentPrcb();
      v35 = (signed __int32 *)v34->SchedulerAssist;
      if ( v35 )
      {
        _m_prefetchw(v35);
        v38 = *v35;
        do
        {
          v39 = v38;
          v38 = _InterlockedCompareExchange(v35, v38 & 0xFFDFFFFF, v38);
        }
        while ( v39 != v38 );
        if ( (v38 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v34);
      }
      _enable();
      v3 = (__int64)(&v31[1].Process + 12 * v43);
      if ( (unsigned __int64)v21 - qword_140C659E8 < 0x8000000000LL )
        v11 = MmGetSessionIdEx(v31->ApcState.Process);
      *(_DWORD *)(v3 + 8) = v11;
      *(_QWORD *)v3 = (unsigned __int64)v21 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
      ExfAcquirePushLockExclusiveEx(v21, v3, v21);
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
  v27 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v27 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( (v17[6] & 4) != 0 )
  {
    if ( v45 )
    {
      MiUnlockVadShared(CurrentThread, v17);
      MiLockVad(CurrentThread, v17);
    }
    MiWaitForVadDeletion(v17);
    MiUnlockAndDereferenceVad((char *)v17);
    v41 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v41 = -1073741664;
    *a3 = v41;
  }
  else
  {
    if ( v18 >= (*((unsigned int *)v17 + 6) | ((unsigned __int64)*((unsigned __int8 *)v17 + 32) << 32))
      && v18 <= (*((unsigned int *)v17 + 7) | ((unsigned __int64)*((unsigned __int8 *)v17 + 33) << 32)) )
    {
      return v17;
    }
    if ( v45 )
      MiUnlockAndDereferenceVadShared(v17);
    else
      MiUnlockAndDereferenceVad((char *)v17);
    *a3 = -1073741664;
  }
  return 0LL;
}
