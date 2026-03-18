/*
 * XREFs of AlpcpEndInitialization @ 0x1407A5668
 * Callers:
 *     AlpcpCreateSection @ 0x14066BC7C (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1406CBB84 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x1407A74A4 (AlpcpCreateSecurityContext.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpEndInitialization(__int64 a1)
{
  ULONG_PTR v1; // rbx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v3, 0);
  *(_BYTE *)(a1 - 32) &= ~4u;
  v1 = a1 - 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 - 16);
  return KeAbPostRelease(v1);
}
