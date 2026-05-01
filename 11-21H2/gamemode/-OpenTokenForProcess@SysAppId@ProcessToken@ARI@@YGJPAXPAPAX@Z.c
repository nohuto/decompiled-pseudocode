/*
 * XREFs of ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YGJPAXPAPAX@Z @ 0x100062BC
 * Callers:
 *     ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z @ 0x100063E5 (-IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall ARI::ProcessToken::SysAppId::OpenTokenForProcess(HANDLE a1, void **a2)
{
  if ( a1 == GetCurrentProcess() )
  {
    *a2 = (void *)-4;
  }
  else if ( !OpenProcessToken(a1, 8u, a2) )
  {
    return GetLastError();
  }
  return 0;
}
