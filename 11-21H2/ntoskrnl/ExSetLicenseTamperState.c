/*
 * XREFs of ExSetLicenseTamperState @ 0x1409F97C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExpGetLicenseTamperState @ 0x140639C30 (ExpGetLicenseTamperState.c)
 *     ExpSetLicenseTamperState @ 0x140639FC4 (ExpSetLicenseTamperState.c)
 *     ExpSetKernelDataProtection @ 0x1406A71F0 (ExpSetKernelDataProtection.c)
 */

char __fastcall ExSetLicenseTamperState(int a1)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // r14
  __int64 v6; // rcx
  _OWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+70h] [rbp+8h] BYREF

  v9 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v3 = CurrentServerSiloGlobals[113];
  if ( a1 && a1 != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3 + 46840, 0LL);
    ExpGetLicenseTamperState(v3, &v9);
    v5 = v9 == 0;
    ExpSetLicenseTamperState(v3, a1);
    memset(v8, 0, sizeof(v8));
    ExpSetKernelDataProtection(v3, (__int64)v8, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3 + 46840);
    KeAbPostRelease(v3 + 46840);
    LOBYTE(CurrentServerSiloGlobals) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v5 )
    {
      v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
      LOBYTE(CurrentServerSiloGlobals) = (_BYTE)qword_140D3B4C8;
      if ( qword_140D3B4C8 )
        LOBYTE(CurrentServerSiloGlobals) = qword_140D3B4C8(v6);
    }
  }
  return (char)CurrentServerSiloGlobals;
}
