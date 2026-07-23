/*
 * XREFs of BgpConsoleClearScreen @ 0x140AF1400
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140385840 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140385890 (BgpFwAcquireLock.c)
 *     BgpConsoleClearScreenEx @ 0x140AF1438 (BgpConsoleClearScreenEx.c)
 */

__int64 BgpConsoleClearScreen()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( qword_140CF7AE0 )
    v0 = BgpConsoleClearScreenEx();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
