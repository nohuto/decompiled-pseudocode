/*
 * XREFs of SkReleasePushLockExclusive @ 0x1405E1740
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __noreturn SkReleasePushLockExclusive()
{
  KeBugCheckEx(0x123u, 0LL, 0LL, 0LL, 0LL);
}
