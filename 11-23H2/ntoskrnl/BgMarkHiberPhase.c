/*
 * XREFs of BgMarkHiberPhase @ 0x140AF1344
 * Callers:
 *     BgkResumePrepare @ 0x140A99A74 (BgkResumePrepare.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140385660 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403856B0 (BgpFwAcquireLock.c)
 *     BgpFwMarkHiberPhase @ 0x140AF1DE4 (BgpFwMarkHiberPhase.c)
 */

__int64 BgMarkHiberPhase()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C0E4B0 & 1) != 0 )
    v0 = BgpFwMarkHiberPhase();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
