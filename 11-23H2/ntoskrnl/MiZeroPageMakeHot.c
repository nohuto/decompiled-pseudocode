/*
 * XREFs of MiZeroPageMakeHot @ 0x14065615C
 * Callers:
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402E9330 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiSetZeroPageThreadPriority @ 0x14035438C (MiSetZeroPageThreadPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiChangePageHeatImmediate @ 0x14065433C (MiChangePageHeatImmediate.c)
 */

char __fastcall MiZeroPageMakeHot(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  $C71981A45BEB2B45F82C232A7085991E *v4; // rax
  _DWORD *v7; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  int v11; // ebp
  __int64 v12; // r13
  ULONG_PTR v13; // rbx
  struct _KTHREAD *v14; // r14
  unsigned __int64 v15; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v17; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  int SessionId; // eax
  int v25; // [rsp+20h] [rbp-58h] BYREF
  int v26[21]; // [rsp+24h] [rbp-54h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  unsigned int v29; // [rsp+88h] [rbp+10h]

  v4 = ($C71981A45BEB2B45F82C232A7085991E *)&retaddr;
  v7 = dword_140C13110;
  v26[0] = 0;
  v25 = 0;
  ++dword_140C13110[a2];
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->Priority )
      v11 = 33;
    else
      v11 = MiSetZeroPageThreadPriority(a3, 1);
    --CurrentThread->SpecialApcDisable;
    v12 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
    v13 = a4 + 216;
    v14 = KeGetCurrentThread();
    v15 = 0LL;
    _disable();
    AbEntrySummary = v14->AbEntrySummary;
    if ( v14->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)v7, (__int64)v14)) != 0 )
    {
      _BitScanForward(&v17, AbEntrySummary);
      v29 = v17;
      v14->AbEntrySummary = AbEntrySummary & ~(1 << v17);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v20 = *SchedulerAssist;
        do
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange(SchedulerAssist, v20 & 0xFFDFFFFF, v20);
        }
        while ( v21 != v20 );
        if ( (v20 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v15 = (unsigned __int64)(&v14[1].Process + 12 * v29);
      if ( v13 - qword_140C659E8 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)v14->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v15 + 8) = SessionId;
      *(_QWORD *)v15 = v13 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v13, 0LL, v15, v13);
    if ( v15 )
      *(_BYTE *)(v15 + 18) = 1;
    if ( a2 == (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(a1, v26, &v25) )
      MiChangePageHeatImmediate(v12, a2, 1);
    else
      ++dword_140C13120;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v13);
    LOBYTE(v4) = KeAbPostRelease(v13);
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v4 = &CurrentThread->152;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v4->ApcState.ApcListHead[0].Flink != v4 )
        LOBYTE(v4) = KiCheckForKernelApcDelivery();
    }
    if ( v11 != 33 )
      LOBYTE(v4) = MiSetZeroPageThreadPriority(a3, v11);
  }
  return (char)v4;
}
