/*
 * XREFs of ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z @ 0x180045F80
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180045CA0 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall ARI::ProcessToken::SysAppId::OpenTokenForProcess(HANDLE ProcessHandle, PHANDLE TokenHandle, void **a3)
{
  if ( ProcessHandle == GetCurrentProcess() )
  {
    *TokenHandle = (void *)-4LL;
  }
  else if ( !OpenProcessToken(ProcessHandle, 8u, TokenHandle) )
  {
    return GetLastError();
  }
  return 0;
}
