/*
 * XREFs of KiInsertTimer2 @ 0x14034B7A8
 * Callers:
 *     KiTimer2Expiration @ 0x1402516A0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140251B40 (KiExpireTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14039A8DC (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14024F680 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402B30B0 (KiHvEnlightenedGuestPriorityKick.c)
 */

char __fastcall KiInsertTimer2(__int64 a1, char a2, _BYTE *a3)
{
  char inserted; // bl
  bool v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  inserted = KiInsertTimer2WithCollectionLockHeld(a1, a2, a3, &v8);
  KxReleaseSpinLock((volatile signed __int64 *)&KiTimer2CollectionLock);
  if ( v8 )
    KiHvEnlightenedGuestPriorityKick(
      (__int64)KeGetCurrentPrcb(),
      KiProcessorBlock[(unsigned int)KiClockTimerOwner],
      KiVpThreadSystemWorkPriority);
  return inserted;
}
