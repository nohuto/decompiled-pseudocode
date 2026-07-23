/*
 * XREFs of MiInitializeSessionGlobals @ 0x1407A9C70
 * Callers:
 *     MiSessionCreate @ 0x1407A91FC (MiSessionCreate.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140297924 (PsGetServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MmIsSessionLeaderProcess @ 0x1407A9D90 (MmIsSessionLeaderProcess.c)
 */

__int64 MiInitializeSessionGlobals()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rsi
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rbp
  char v6; // al
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( (unsigned int)MmIsSessionLeaderProcess(CurrentThread->Process) )
    return 0LL;
  if ( qword_140C659D8 )
  {
    if ( PsIsCurrentThreadInServerSilo() )
    {
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire((__int64)&qword_140C659E0, 0LL);
      v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C659E0, 0LL);
      v9 = v8;
      if ( v4 )
        ExfAcquirePushLockExclusiveEx(&qword_140C659E0, v8, (__int64)&qword_140C659E0);
      if ( v9 )
        *(_BYTE *)(v9 + 18) = 1;
      if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) )
      {
        *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) = Process;
        ObfReferenceObject(Process);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C659E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C659E0);
      KeAbPostRelease((ULONG_PTR)&qword_140C659E0);
      v7 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v7
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( (unsigned int)MmIsSessionLeaderProcess(Process) )
      return 0LL;
    return 3221225500LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    v3 = KeAbPreAcquire((__int64)&qword_140C659E0, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C659E0, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&qword_140C659E0, v3, (__int64)&qword_140C659E0);
    if ( v5 )
      *(_BYTE *)(v5 + 18) = 1;
    if ( !qword_140C659D8 )
    {
      qword_140C659D8 = (__int64)Process;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 109) = Process;
      v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C659E0, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C659E0);
      KeAbPostRelease((ULONG_PTR)&qword_140C659E0);
      v7 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v7
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      ObfReferenceObject(Process);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C659E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C659E0);
    KeAbPostRelease((ULONG_PTR)&qword_140C659E0);
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return Process != (_KPROCESS *)qword_140C659D8 ? 0xC000001C : 0;
  }
}
