/*
 * XREFs of KiInsertTimer2 @ 0x1402F332C
 * Callers:
 *     KiTimer2Expiration @ 0x1402F27B0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1402F2CA0 (KiExpireTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x1403AD92C (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1403457BC (KiHvEnlightenedGuestPriorityKick.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140351500 (KiInsertTimer2WithCollectionLockHeld.c)
 */

char __fastcall KiInsertTimer2(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rdx
  char inserted; // bl
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  LOBYTE(v6) = a2;
  inserted = KiInsertTimer2WithCollectionLockHeld(a1, v6, a3, &v9);
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  if ( v9 )
    KiHvEnlightenedGuestPriorityKick(
      KeGetCurrentPrcb(),
      KiProcessorBlock[(unsigned int)KiClockTimerOwner],
      (unsigned int)KiVpThreadSystemWorkPriority);
  return inserted;
}
