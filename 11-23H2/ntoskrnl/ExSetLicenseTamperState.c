/*
 * XREFs of ExSetLicenseTamperState @ 0x1409F99C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExpGetLicenseTamperState @ 0x1406095AC (ExpGetLicenseTamperState.c)
 *     ExpSetLicenseTamperState @ 0x140609934 (ExpSetLicenseTamperState.c)
 *     ExpSetKernelDataProtection @ 0x1407AEA20 (ExpSetKernelDataProtection.c)
 */

__int64 (__fastcall *__fastcall ExSetLicenseTamperState(int a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // r14
  __int64 v6; // rcx
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0;
  result = (__int64 (__fastcall *)(_QWORD))PsGetCurrentServerSiloGlobals();
  v3 = *((_QWORD *)result + 113);
  if ( a1 && a1 != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3 + 46840, 0LL);
    ExpGetLicenseTamperState(v3, &v8);
    v5 = v8 == 0;
    ExpSetLicenseTamperState(v3, a1);
    memset(v7, 0, sizeof(v7));
    ExpSetKernelDataProtection(v3, (__int64)v7, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 46840));
    KeAbPostRelease(v3 + 46840);
    result = (__int64 (__fastcall *)(_QWORD))KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v5 )
    {
      v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
      result = qword_140D53508;
      if ( qword_140D53508 )
        return (__int64 (__fastcall *)(_QWORD))qword_140D53508(v6);
    }
  }
  return result;
}
