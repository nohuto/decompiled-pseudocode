/*
 * XREFs of BgAcquireSpinLock @ 0x140AF1180
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B6630 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1403856B0 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
