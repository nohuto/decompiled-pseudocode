/*
 * XREFs of ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x180084C18
 * Callers:
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x18003A55C (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CallerIdentity::IsProcessAppContainer(HANDLE ProcessHandle, bool *a2, bool *a3)
{
  signed int LastError; // eax
  signed int v6; // ebx
  signed int v7; // eax
  char *v8; // rcx
  int TokenInformation; // [rsp+40h] [rbp+8h] BYREF
  DWORD ReturnLength; // [rsp+48h] [rbp+10h] BYREF
  void *TokenHandle; // [rsp+50h] [rbp+18h] BYREF

  TokenHandle = 0LL;
  *a2 = 0;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
    goto LABEL_6;
  }
  if ( OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
LABEL_6:
    v6 = 0;
    goto LABEL_7;
  }
  LastError = GetLastError();
  v6 = LastError;
  if ( LastError > 0 )
    v6 = (unsigned __int16)LastError | 0x80070000;
LABEL_7:
  if ( v6 >= 0 )
  {
    TokenInformation = 0;
    if ( GetTokenInformation(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength) )
    {
      v6 = 0;
      *a2 = TokenInformation != 0;
    }
    else
    {
      v7 = GetLastError();
      v6 = v7;
      if ( v7 > 0 )
        v6 = (unsigned __int16)v7 | 0x80070000;
      if ( v6 >= 0 )
        v6 = -2147467259;
    }
  }
  v8 = (char *)TokenHandle;
  TokenHandle = 0LL;
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v8);
  return (unsigned int)v6;
}
