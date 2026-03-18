/*
 * XREFs of BgReleaseSpinLock @ 0x140AAEDB0
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403DC330 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 */

void BgReleaseSpinLock()
{
  BgpFwReleaseLock();
}
