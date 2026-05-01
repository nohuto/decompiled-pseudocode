/*
 * XREFs of ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x18000682C
 * Callers:
 *     ReleaseExclusiveCpuSets @ 0x180005E40 (ReleaseExclusiveCpuSets.c)
 * Callees:
 *     ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x1800066B0 (-IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 */

__int64 __fastcall ARI::ProcessToken::SysAppId::IsProcessStronglyNamed(HANDLE ProcessHandle, _BYTE *a2, bool *a3)
{
  bool *v5; // r8
  DWORD LastError; // ebx
  void *TokenHandle; // [rsp+30h] [rbp+8h] BYREF

  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
  }
  else if ( !OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
    LastError = GetLastError();
    if ( LastError )
      return LastError;
  }
  LastError = ARI::ProcessToken::SysAppId::IsStronglyNamed(TokenHandle, a2, v5);
  if ( TokenHandle != (void *)-4LL )
    CloseHandle(TokenHandle);
  return LastError;
}
