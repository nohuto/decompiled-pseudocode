/*
 * XREFs of KeTestSpinLock @ 0x140226EF0
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x1402278C4 (EtwpLockUnlockBufferList.c)
 *     BgpFwAcquireLock @ 0x1403856B0 (BgpFwAcquireLock.c)
 *     KiDecodeMcaFault @ 0x1403E36F0 (KiDecodeMcaFault.c)
 *     BvgaAcquireLock @ 0x14054F130 (BvgaAcquireLock.c)
 *     EtwpBugCheckMultiPartCallback @ 0x140600320 (EtwpBugCheckMultiPartCallback.c)
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
