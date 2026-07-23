/*
 * XREFs of MmCheckProcessShadow @ 0x1403D0420
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14023F1D0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmCheckProcessShadow(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  struct _KTHREAD *v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v6; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  unsigned __int8 v10; // bl
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbp
  bool v16; // zf
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  unsigned int v20; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v3 = KeGetCurrentThread();
  v4 = 0LL;
  _disable();
  AbEntrySummary = v3->AbEntrySummary;
  if ( v3->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, (__int64)v3)) != 0 )
  {
    _BitScanForward(&v6, AbEntrySummary);
    v20 = v6;
    v3->AbEntrySummary = AbEntrySummary & ~(1 << v6);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v18 = *SchedulerAssist;
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange(SchedulerAssist, v18 & 0xFFDFFFFF, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v4 = (unsigned __int64)(&v3[1].Process + 12 * v20);
    if ( (unsigned __int64)&qword_140C659E0 - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v4 + 8) = SessionId;
    *(_QWORD *)v4 = (unsigned __int64)&qword_140C659E0 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C659E0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C659E0, 0LL, v4, (__int64)&qword_140C659E0);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  v10 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v13 = MiCheckProcessShadow((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], 0x1Du, v11, v12);
  v14 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v15 = v13;
  MiUnlockWorkingSetShared(v14, v10);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C659E0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C659E0);
  KeAbPostRelease((ULONG_PTR)&qword_140C659E0);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v15;
}
