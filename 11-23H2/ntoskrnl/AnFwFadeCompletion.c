/*
 * XREFs of AnFwFadeCompletion @ 0x140AECFB8
 * Callers:
 *     BgpFwLibraryDisable @ 0x140AEC1EC (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x140AF14D0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140AF1880 (BgpConsoleDisplayString.c)
 *     ResFwFreeContext @ 0x140AF1EE4 (ResFwFreeContext.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x140385840 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140385890 (BgpFwAcquireLock.c)
 *     LogFwStat @ 0x140AED85C (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x140AEDA70 (BgpGxRectangleDestroy.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_140C0E4B0 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140D16A00, Executive, 0, 0, 0LL);
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
