/*
 * XREFs of MiLockLoaderEntry @ 0x1402923F4
 * Callers:
 *     MiSetPagingOfDriver @ 0x140291014 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MmProtectDriverSection @ 0x14036EA10 (MmProtectDriverSection.c)
 *     MiProtectDriverSectionPte @ 0x14061A9F0 (MiProtectDriverSectionPte.c)
 *     MiFreeInitializationCode @ 0x140703D0C (MiFreeInitializationCode.c)
 *     MiLockdownSections @ 0x140705B14 (MiLockdownSections.c)
 *     MiFindDriverNonPagedSections @ 0x140705EC8 (MiFindDriverNonPagedSections.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14022F850 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockLoaderEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v3; // rbx
  struct _KTHREAD *v4; // rsi
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned int v7; // ecx
  struct _KPRCB *v8; // rcx
  signed __int32 *v9; // r8
  int v10; // eax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  struct _KTHREAD *v13; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v15; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  unsigned int v21; // [rsp+58h] [rbp+10h]
  unsigned int v22; // [rsp+60h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int64 *)(a1 + 104);
  --CurrentThread->SpecialApcDisable;
  if ( a2 )
  {
    if ( a2 != 2 )
      return ExAcquireAutoExpandPushLockExclusive(a1 + 104, 0LL);
    v13 = KeGetCurrentThread();
    v5 = 0LL;
    _disable();
    AbEntrySummary = v13->AbEntrySummary;
    if ( v13->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, v13)) != 0 )
    {
      _BitScanForward(&v15, AbEntrySummary);
      v22 = v15;
      v13->AbEntrySummary = AbEntrySummary & ~(1 << v15);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v19 = *SchedulerAssist;
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v5 = (__int64)(&v13[1].Process + 12 * v22);
      if ( (unsigned __int64)v3 - qword_140C659E8 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx(v13->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v5 + 8) = SessionId;
      *(_QWORD *)v5 = (unsigned __int64)v3 & 0x7FFFFFFFFFFFFFFCLL;
    }
    result = _InterlockedCompareExchange64(v3, 17LL, 0LL);
    if ( result )
      result = ExfAcquirePushLockSharedEx(v3, 0LL, v5, v3);
  }
  else
  {
    v4 = KeGetCurrentThread();
    v5 = 0LL;
    _disable();
    LODWORD(result) = v4->AbEntrySummary;
    if ( v4->AbEntrySummary || (result = KiAbTryReclaimOrphanedEntries(a1, v4), (_DWORD)result) )
    {
      _BitScanForward(&v7, result);
      v21 = v7;
      v4->AbEntrySummary = result & ~(1 << v7);
      v8 = KeGetCurrentPrcb();
      v9 = (signed __int32 *)v8->SchedulerAssist;
      if ( v9 )
      {
        _m_prefetchw(v9);
        v11 = *v9;
        do
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange(v9, v11 & 0xFFDFFFFF, v11);
        }
        while ( v12 != v11 );
        if ( (v11 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
      _enable();
      v5 = (__int64)(&v4[1].Process + 12 * v21);
      if ( (unsigned __int64)v3 - qword_140C659E8 < 0x8000000000LL )
        v10 = MmGetSessionIdEx(v4->ApcState.Process);
      else
        v10 = -1;
      *(_DWORD *)(v5 + 8) = v10;
      result = (unsigned __int64)v3 & 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)v5 = (unsigned __int64)v3 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      result = ExfAcquirePushLockExclusiveEx(v3, v5, v3);
  }
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  return result;
}
