/*
 * XREFs of KeTestSpinLock @ 0x140226F10
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x1402278E4 (EtwpLockUnlockBufferList.c)
 *     BgpFwAcquireLock @ 0x1403848B0 (BgpFwAcquireLock.c)
 *     KiDecodeMcaFault @ 0x1403E3090 (KiDecodeMcaFault.c)
 *     BvgaAcquireLock @ 0x14054F1D0 (BvgaAcquireLock.c)
 *     EtwpBugCheckMultiPartCallback @ 0x140600390 (EtwpBugCheckMultiPartCallback.c)
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
