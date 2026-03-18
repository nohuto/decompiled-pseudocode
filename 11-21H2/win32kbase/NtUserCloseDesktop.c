/*
 * XREFs of NtUserCloseDesktop @ 0x1C00B1DB0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionCloseDesktopEntryPoint @ 0x1C00B1DC8 (ApiSetEditionCloseDesktopEntryPoint.c)
 */

__int64 NtUserCloseDesktop()
{
  return (int)ApiSetEditionCloseDesktopEntryPoint();
}
