/*
 * XREFs of BgReleaseSpinLock @ 0x140AF137C
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B6630 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140385660 (BgpFwReleaseLock.c)
 */

char BgReleaseSpinLock()
{
  return BgpFwReleaseLock();
}
