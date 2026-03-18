/*
 * XREFs of VrpIncrementSiloCount @ 0x14077CE2C
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14077A068 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     CmRegisterInternalCallback @ 0x140850C9C (CmRegisterInternalCallback.c)
 */

__int64 VrpIncrementSiloCount()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // esi
  __int64 v2; // rax
  __int64 v3; // rcx
  signed __int8 v4; // cf
  __int64 v5; // rdi
  char v6; // bl
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  v2 = KeAbPreAcquire((__int64)&VrpActiveSilosLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&VrpActiveSilosLock, 0LL);
  v5 = v2;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&VrpActiveSilosLock, v2, (__int64)&VrpActiveSilosLock);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  if ( VrpNumActiveSilos || (v8[0] = 917516LL, v8[1] = L"189900", v1 = CmRegisterInternalCallback(v3, v8), v1 >= 0) )
    ++VrpNumActiveSilos;
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&VrpActiveSilosLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&VrpActiveSilosLock);
  KeAbPostRelease((ULONG_PTR)&VrpActiveSilosLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
