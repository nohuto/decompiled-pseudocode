/*
 * XREFs of MiLockAddressSpaceToo @ 0x1402897BC
 * Callers:
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     MiPrepareVadDelete @ 0x14076D6E4 (MiPrepareVadDelete.c)
 * Callees:
 *     MiUnlockVad @ 0x140289F30 (MiUnlockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029CBDC (LOCK_ADDRESS_SPACE.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     KeAbPostReleaseEx @ 0x1402BD780 (KeAbPostReleaseEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlockNestedVad @ 0x140A47EA8 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int32 *v7; // rdi
  __int64 v8; // rbx
  struct _KTHREAD *v9; // rbp
  unsigned int AbEntrySummary; // eax
  int v11; // r12d
  unsigned int v12; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  volatile signed __int32 *v22; // rdi
  struct _KTHREAD *v23; // rbp
  __int64 v24; // rbx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  struct _KPRCB *v27; // rcx
  unsigned __int32 *v28; // r8
  int v29; // eax
  __int64 v30; // rcx
  bool v31; // zf
  unsigned __int32 v32; // eax
  unsigned __int32 v33; // ett
  struct _KTHREAD *v34; // rbp
  volatile signed __int32 *v35; // rdi
  __int64 v36; // rbx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  struct _KPRCB *v39; // rcx
  unsigned __int32 v40; // eax
  unsigned __int32 v41; // ett
  unsigned int v42; // [rsp+20h] [rbp-58h]
  unsigned int v43; // [rsp+80h] [rbp+8h]
  unsigned int v44; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (volatile signed __int32 *)(a1 + 1224);
  v8 = 0LL;
  v9 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v9->AbEntrySummary;
  v11 = -1;
  if ( v9->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(1LL, v9)) != 0 )
  {
    _BitScanForward(&v12, AbEntrySummary);
    v43 = v12;
    v9->AbEntrySummary = AbEntrySummary & ~(1 << v12);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v17 = *SchedulerAssist;
      do
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
      }
      while ( v18 != v17 );
      if ( (v17 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v8 = (__int64)(&v9[1].Process + 12 * v43);
    if ( (unsigned __int64)v7 - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v9->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v8 + 8) = SessionId;
    *(_QWORD *)v8 = (unsigned __int64)v7 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64(v7, 0LL) )
  {
    if ( v8 )
      KeAbPostReleaseEx(a1 + 1224);
    if ( a3 )
      MiUnlockNestedVad(a3);
    MiUnlockVad(CurrentThread, a2);
    LOCK_ADDRESS_SPACE(CurrentThread, a1);
    --CurrentThread->SpecialApcDisable;
    v22 = (volatile signed __int32 *)(a2 + 40);
    v23 = KeGetCurrentThread();
    v24 = 0LL;
    _disable();
    v25 = v23->AbEntrySummary;
    if ( v23->AbEntrySummary || (v25 = KiAbTryReclaimOrphanedEntries(v20, v23)) != 0 )
    {
      _BitScanForward(&v26, v25);
      v44 = v26;
      v23->AbEntrySummary = v25 & ~(1 << v26);
      v27 = KeGetCurrentPrcb();
      v28 = (unsigned __int32 *)v27->SchedulerAssist;
      if ( v28 )
      {
        _m_prefetchw(v28);
        v32 = *v28;
        do
        {
          v19 = v32;
          LODWORD(v19) = v32 & 0xFFDFFFFF;
          v33 = v32;
          v32 = _InterlockedCompareExchange((volatile signed __int32 *)v28, v32 & 0xFFDFFFFF, v32);
        }
        while ( v33 != v32 );
        if ( (v32 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
      _enable();
      v24 = (__int64)(&v23[1].Process + 12 * v44);
      if ( (unsigned __int64)v22 - qword_140C659E8 < 0x8000000000LL )
        v29 = MmGetSessionIdEx(v23->ApcState.Process);
      else
        v29 = -1;
      *(_DWORD *)(v24 + 8) = v29;
      v30 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)v24 = (unsigned __int64)v22 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64(v22, 0LL) )
      ExfAcquirePushLockExclusiveEx(v22, v24, v22);
    if ( v24 )
      *(_BYTE *)(v24 + 18) = 1;
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    if ( a3 )
    {
      v34 = KeGetCurrentThread();
      v35 = (volatile signed __int32 *)(a3 + 40);
      v36 = 0LL;
      _disable();
      v37 = v34->AbEntrySummary;
      if ( v34->AbEntrySummary || (v37 = KiAbTryReclaimOrphanedEntries(v30, v34)) != 0 )
      {
        _BitScanForward(&v38, v37);
        v42 = v38;
        v34->AbEntrySummary = v37 & ~(1 << v38);
        v39 = KeGetCurrentPrcb();
        v28 = (unsigned __int32 *)v39->SchedulerAssist;
        if ( v28 )
        {
          _m_prefetchw(v28);
          v40 = *v28;
          do
          {
            v19 = v40;
            LODWORD(v19) = v40 & 0xFFDFFFFF;
            v41 = v40;
            v40 = _InterlockedCompareExchange((volatile signed __int32 *)v28, v40 & 0xFFDFFFFF, v40);
          }
          while ( v41 != v40 );
          if ( (v40 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
        _enable();
        v36 = (__int64)(&v34[1].Process + 12 * v42);
        if ( (unsigned __int64)v35 - qword_140C659E8 < 0x8000000000LL )
          v11 = MmGetSessionIdEx(v34->ApcState.Process);
        *(_DWORD *)(v36 + 8) = v11;
        v30 = 0x7FFFFFFFFFFFFFFCLL;
        *(_QWORD *)v36 = (unsigned __int64)v35 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64(v35, 0LL) )
        ExfAcquirePushLockExclusiveEx(a3 + 40, v36, a3 + 40);
      if ( v36 )
        *(_BYTE *)(v36 + 18) = 1;
    }
    v31 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v31 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v30, v19, v28, v21);
    return 0LL;
  }
  else
  {
    if ( v8 )
      *(_BYTE *)(v8 + 18) = 1;
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    return 1LL;
  }
}
