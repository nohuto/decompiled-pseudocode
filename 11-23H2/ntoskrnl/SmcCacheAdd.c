/*
 * XREFs of SmcCacheAdd @ 0x1409DA9D0
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409D7E9C (SmcProcessCreateRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B360 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall SmcCacheAdd(__int64 a1, int *a2, int *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // esi
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v10; // ecx
  int v11; // ecx

  v3 = 0;
  v5 = 0;
  while ( 1 )
  {
    v8 = a1 + 32LL * v5;
    if ( !*(_QWORD *)v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
      if ( !*(_QWORD *)v8 )
      {
        *(_QWORD *)v8 = a2;
        do
        {
          v10 = *(_DWORD *)(v8 + 24) ^ (*(_DWORD *)(v8 + 24) ^ (*(_DWORD *)(v8 + 24) + 1)) & 0xFFF;
          *(_DWORD *)(v8 + 24) = v10;
          v11 = v5 | (16 * (v10 & 0xFFF));
          *a2 = v11;
        }
        while ( v11 == -1 );
        *a3 = v11;
        a2 = 0LL;
        _InterlockedExchange64((volatile __int64 *)(v8 + 8), 0LL);
        ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 8));
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 16));
      KeAbPostRelease(v8 + 16);
      KeLeaveCriticalRegion();
      if ( !a2 )
        break;
    }
    if ( ++v5 >= 0x10 )
      return (unsigned int)-1073741671;
  }
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return v3;
}
