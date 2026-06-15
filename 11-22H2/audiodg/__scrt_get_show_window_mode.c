/*
 * XREFs of __scrt_get_show_window_mode @ 0x140028BA4
 * Callers:
 *     __scrt_common_main_seh @ 0x140027C30 (__scrt_common_main_seh.c)
 * Callees:
 *     memset_0 @ 0x140029234 (memset_0.c)
 */

WORD _scrt_get_show_window_mode()
{
  WORD result; // ax
  _STARTUPINFOW StartupInfo; // [rsp+20h] [rbp-78h] BYREF

  memset_0(&StartupInfo, 0, sizeof(StartupInfo));
  GetStartupInfoW(&StartupInfo);
  result = 10;
  if ( (StartupInfo.dwFlags & 1) != 0 )
    return StartupInfo.wShowWindow;
  return result;
}
