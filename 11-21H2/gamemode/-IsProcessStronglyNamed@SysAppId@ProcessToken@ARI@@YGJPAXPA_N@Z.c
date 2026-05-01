/*
 * XREFs of ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z @ 0x100063E5
 * Callers:
 *     ?IsCurrentProcessStronglyNamed@CallerIdentity@@YGJPA_N@Z @ 0x10006515 (-IsCurrentProcessStronglyNamed@CallerIdentity@@YGJPA_N@Z.c)
 * Callees:
 *     ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YGJPAXPAPAX@Z @ 0x100062BC (-OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YGJPAXPAPAX@Z.c)
 *     ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z @ 0x100062F5 (-IsStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z.c)
 */

DWORD __fastcall ARI::ProcessToken::SysAppId::IsProcessStronglyNamed(void *a1, _BYTE *a2)
{
  DWORD IsStronglyNamed; // esi
  HANDLE hObject; // [esp+8h] [ebp-4h] BYREF

  IsStronglyNamed = ARI::ProcessToken::SysAppId::OpenTokenForProcess(a1, &hObject);
  if ( !IsStronglyNamed )
  {
    IsStronglyNamed = ARI::ProcessToken::SysAppId::IsStronglyNamed(hObject, a2);
    if ( hObject != (HANDLE)-4 )
      CloseHandle(hObject);
  }
  return IsStronglyNamed;
}
