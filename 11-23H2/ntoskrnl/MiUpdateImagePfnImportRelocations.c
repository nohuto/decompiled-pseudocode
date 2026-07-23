/*
 * XREFs of MiUpdateImagePfnImportRelocations @ 0x1403253E0
 * Callers:
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403250DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x140217E64 (MiMakeProtectionPfnCompatible.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiDoesPageRequireRetpolineImportFixups @ 0x1403256D0 (MiDoesPageRequireRetpolineImportFixups.c)
 *     MiUpdateRetpolineImportFixups @ 0x140325708 (MiUpdateRetpolineImportFixups.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateImagePfnImportRelocations(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rcx
  _QWORD *v7; // r12
  _KPROCESS *Process; // rcx
  __int64 v9; // r9
  unsigned __int64 v10; // r15
  __int64 v11; // rbx
  ULONG_PTR v12; // rsi
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v19; // rbx
  struct _KTHREAD *v20; // r13
  unsigned int AbEntrySummary; // eax
  unsigned int v22; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  bool v26; // zf
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  unsigned __int64 v30; // rbx
  int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // [rsp+70h] [rbp+8h]
  unsigned int v38; // [rsp+90h] [rbp+28h]

  v4 = *(_QWORD *)(a1 + 96);
  v7 = *(_QWORD **)(v4 + 32);
  v10 = 0LL;
  if ( !(unsigned int)MiDoesPageRequireRetpolineImportFixups(v4, a3) )
    return 1LL;
  v11 = 48 * v9 - 0x220000000000LL;
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v12 = 0LL;
    v35 = 0LL;
    goto LABEL_9;
  }
  v35 = a2;
  v12 = MiReservePtes((__int64)&qword_140C69940, 1u);
  if ( v12 )
  {
LABEL_6:
    a2 = (__int64)(v12 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v11);
    ValidPte = MiMakeValidPte(v12, a4, ProtectionPfnCompatible | 0xA0000000);
    v15 = 0;
    if ( !MiPteInShadowRange(v12) )
      goto LABEL_7;
    if ( (unsigned int)MiPteHasShadow(Process, v16, v17) )
    {
      v15 = 1;
      if ( !HIBYTE(word_140C66CFC) )
      {
LABEL_45:
        if ( (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        goto LABEL_45;
    }
LABEL_7:
    *(_QWORD *)v12 = ValidPte;
    if ( v15 )
      MiWritePteShadow(v12, ValidPte);
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    v19 = v7 + 3;
    if ( (struct _KTHREAD *)v7[1] == CurrentThread )
    {
      CurrentThread = 0LL;
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      v20 = KeGetCurrentThread();
      _disable();
      AbEntrySummary = v20->AbEntrySummary;
      if ( v20->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(Process, v20)) != 0 )
      {
        _BitScanForward(&v22, AbEntrySummary);
        v38 = v22;
        v20->AbEntrySummary = AbEntrySummary & ~(1 << v22);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v28 = *SchedulerAssist;
          do
          {
            v29 = v28;
            v28 = _InterlockedCompareExchange(SchedulerAssist, v28 & 0xFFDFFFFF, v28);
          }
          while ( v29 != v28 );
          if ( (v28 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
        v10 = (unsigned __int64)(&v20[1].Process + 12 * v38);
        if ( (unsigned __int64)v19 - qword_140C659E8 < 0x8000000000LL )
          SessionId = MmGetSessionIdEx((__int64)v20->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v10 + 8) = SessionId;
        *(_QWORD *)v10 = (unsigned __int64)v19 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _InterlockedCompareExchange64(v19, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v7 + 3, 0LL, v10, (__int64)(v7 + 3));
      if ( v10 )
        *(_BYTE *)(v10 + 18) = 1;
    }
    MiUpdateRetpolineImportFixups(a2, v7[11], a3);
    if ( CurrentThread )
    {
      if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v7 + 3);
      KeAbPostRelease((ULONG_PTR)(v7 + 3));
      v26 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v26
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( !v12 )
      return 0LL;
    if ( v12 != v35 )
    {
      MiReleasePtes((__int64)&qword_140C69940, (__int64 *)v12, 1u);
      return 0LL;
    }
    v30 = ZeroPte;
    v31 = 0;
    if ( MiPteInShadowRange(v12) )
    {
      if ( (unsigned int)MiPteHasShadow(v33, v32, v34) )
      {
        v31 = 1;
        if ( HIBYTE(word_140C66CFC) )
          goto LABEL_55;
LABEL_53:
        if ( (ZeroPte & 1) != 0 )
          v30 = ZeroPte | 0x8000000000000000uLL;
        goto LABEL_55;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        goto LABEL_53;
    }
LABEL_55:
    *(_QWORD *)v12 = v30;
    if ( v31 )
      MiWritePteShadow(v12, v30);
    KeFlushSingleTb(a2, 0, 1u);
    return 0LL;
  }
  if ( a2 )
  {
    v12 = a2;
    goto LABEL_6;
  }
  return 3221225626LL;
}
