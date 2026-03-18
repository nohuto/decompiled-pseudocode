/*
 * XREFs of AnFwFadeCompletion @ 0x140AEDF7C
 * Callers:
 *     BgpFwLibraryDisable @ 0x140AED1B0 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x140AF24C0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140AF2870 (BgpConsoleDisplayString.c)
 *     ResFwFreeContext @ 0x140AF2ED4 (ResFwFreeContext.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x140384860 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403848B0 (BgpFwAcquireLock.c)
 *     LogFwStat @ 0x140AEE81C (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x140AEEA30 (BgpGxRectangleDestroy.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_140C0E4B0 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140D16AC0, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140C0B518 )
    {
      BgpGxRectangleDestroy(qword_140C0B518);
      qword_140C0B518 = 0LL;
    }
    if ( qword_140C0B548 )
    {
      BgpGxRectangleDestroy(qword_140C0B548);
      qword_140C0B548 = 0LL;
    }
    if ( qword_140C0B550 )
    {
      BgpGxRectangleDestroy(qword_140C0B550);
      qword_140C0B550 = 0LL;
    }
    if ( qword_140C0B558 )
    {
      BgpGxRectangleDestroy(qword_140C0B558);
      qword_140C0B558 = 0LL;
    }
    if ( qword_140C0B588 )
    {
      BgpGxRectangleDestroy(qword_140C0B588);
      qword_140C0B588 = 0LL;
    }
    if ( qword_140C0B590 )
    {
      BgpGxRectangleDestroy(qword_140C0B590);
      qword_140C0B590 = 0LL;
    }
  }
}
