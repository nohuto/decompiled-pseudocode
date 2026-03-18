/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x1402500B4
 * Callers:
 *     KeSetTimer2 @ 0x140250150 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x14031DB78 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x14031DEE0 (KeCancelTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402515B0 (KxAcquireSpinLock.c)
 */

char __fastcall KiAcquireTimer2CollectionLockIfInserted(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
  {
    KxAcquireSpinLock(&KiTimer2CollectionLock);
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      return 1;
    else
      KxReleaseSpinLock(&KiTimer2CollectionLock);
  }
  return v1;
}
