/*
 * XREFs of BgReleaseSpinLock @ 0x140AF138C
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B6810 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140385840 (BgpFwReleaseLock.c)
 */

char BgReleaseSpinLock()
{
  return BgpFwReleaseLock();
}
