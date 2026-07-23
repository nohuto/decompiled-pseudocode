/*
 * XREFs of PspInsertSyscallProvider @ 0x1409B4EE4
 * Callers:
 *     PsRegisterSyscallProvider @ 0x1409B4760 (PsRegisterSyscallProvider.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PspDereferenceSyscallProvider @ 0x1405A513C (PspDereferenceSyscallProvider.c)
 *     PspLookupSyscallProviderByIdNoLock @ 0x1409B4FBC (PspLookupSyscallProviderByIdNoLock.c)
 */

__int64 __fastcall PspInsertSyscallProvider(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  unsigned int v4; // edi
  volatile signed __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSyscallProviderRegistrationLock, 0LL);
  if ( (unsigned int)PspLookupSyscallProviderByIdNoLock(a1 + 16, &v6) == -1073741275 )
  {
    v3 = off_140D53328;
    if ( *off_140D53328 != (_UNKNOWN *)&PspSyscallProviders )
      __fastfail(3u);
    *(_QWORD *)a1 = &PspSyscallProviders;
    *(_QWORD *)(a1 + 8) = v3;
    *v3 = a1;
    off_140D53328 = (_UNKNOWN **)a1;
    v4 = 0;
  }
  else
  {
    v4 = -1073741771;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSyscallProviderRegistrationLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSyscallProviderRegistrationLock);
  KeAbPostRelease((ULONG_PTR)&PspSyscallProviderRegistrationLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v6 )
    PspDereferenceSyscallProvider(v6);
  return v4;
}
