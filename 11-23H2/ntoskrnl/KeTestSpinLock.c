/*
 * XREFs of KeTestSpinLock @ 0x140227000
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x1402279D4 (EtwpLockUnlockBufferList.c)
 *     BgpFwAcquireLock @ 0x140385890 (BgpFwAcquireLock.c)
 *     KiDecodeMcaFault @ 0x1403E38D0 (KiDecodeMcaFault.c)
 *     BvgaAcquireLock @ 0x14054F7F0 (BvgaAcquireLock.c)
 *     EtwpBugCheckMultiPartCallback @ 0x140600870 (EtwpBugCheckMultiPartCallback.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeTestSpinLock(PKSPIN_LOCK SpinLock)
{
  if ( !*SpinLock )
    return 1;
  _mm_pause();
  return 0;
}
