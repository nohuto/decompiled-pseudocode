/*
 * XREFs of EtwpFreeCompression @ 0x14031F2D0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14078DC9C (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     KeRemoveQueueDpcEx @ 0x14031F0D0 (KeRemoveQueueDpcEx.c)
 *     EtwpFreePlaceholderList @ 0x14031F348 (EtwpFreePlaceholderList.c)
 *     EtwpRelinquishCompressionTarget @ 0x140602A68 (EtwpRelinquishCompressionTarget.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeCompression(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  KeRemoveQueueDpcEx(a1 + 1192, 0);
  if ( *(_DWORD *)(a1 + 1168) && (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 1144, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1144));
    KeAbPostRelease(a1 + 1144);
    _InterlockedExchange((volatile __int32 *)(a1 + 1168), 0);
  }
  v2 = *(void **)(a1 + 1160);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(void **)(a1 + 1152);
  if ( !v3 || (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
    EtwpFreePlaceholderList(a1);
  else
    ExFreePoolWithTag(v3, 0);
}
