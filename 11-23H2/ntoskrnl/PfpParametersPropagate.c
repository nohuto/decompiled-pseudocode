/*
 * XREFs of PfpParametersPropagate @ 0x140980250
 * Callers:
 *     PfpParametersWatcher @ 0x140980380 (PfpParametersWatcher.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PfTStart @ 0x1408461D0 (PfTStart.c)
 *     PfTInitialize @ 0x14084722C (PfTInitialize.c)
 *     PfTCleanup @ 0x14097F368 (PfTCleanup.c)
 *     PfpRpShutdown @ 0x14097F664 (PfpRpShutdown.c)
 */

void __fastcall PfpParametersPropagate(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  __int64 v4; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
  if ( (dword_140C65148 & 1) != 0 )
    v3 = a1[20] != dword_140C6535C;
  if ( (dword_140C65148 & 2) != 0 && a1[19] != dword_140C65364 )
    v3 |= 2u;
  if ( (dword_140C65148 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, (__int64)&PfKernelGlobals);
    PfTInitialize(&PfTGlobals, (unsigned __int64 *)&PfKernelGlobals, 1);
    PfTStart((__int64)&PfTGlobals, v4, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_140C650C0 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_140C650B0, 0LL);
      dword_140C650C0 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_140C65028);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
