/*
 * XREFs of SmpSystemStoreCreate @ 0x14085BEC0
 * Callers:
 *     SmProcessConfigRequest @ 0x14085BD4C (SmProcessConfigRequest.c)
 *     SmInitSystem @ 0x140B4D6E0 (SmInitSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     SmpDirtyStoreCreate @ 0x1407B7854 (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpSystemStoreCreate(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v1 = (volatile signed __int64 *)(a1 + 2120);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 2120, 0LL);
  if ( *(_DWORD *)(a1 + 2112) == -1 )
  {
    v4 = SmpDirtyStoreCreate(a1, (unsigned int)(*(_QWORD *)(*(_QWORD *)qword_140C673C8 + 17040LL) >> 8) >> 1, 0, &v6);
    if ( v4 >= 0 )
      *(_DWORD *)(a1 + 2112) = v6;
  }
  else
  {
    v4 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
