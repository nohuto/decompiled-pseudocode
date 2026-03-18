/*
 * XREFs of BgDisplaySafeToPowerOffScreen @ 0x140671A40
 * Callers:
 *     PopShutdownHandler @ 0x140AA8EE0 (PopShutdownHandler.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140385660 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403856B0 (BgpFwAcquireLock.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x140672E44 (BgpDisplaySafeToPowerOffScreen.c)
 */

__int64 BgDisplaySafeToPowerOffScreen()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C0E4B0 & 2) != 0 )
    v0 = BgpDisplaySafeToPowerOffScreen();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
