/*
 * XREFs of ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1800847D4
 * Callers:
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x18003A55C (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 * Callees:
 *     ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x18008488C (-GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetPackageSidFromProcessHandle(HANDLE ProcessHandle, _QWORD *a2, void **a3)
{
  void **v5; // r8
  signed int LastError; // eax
  signed int PackageSidFromProcessToken; // ebx
  char *v8; // rcx
  void *TokenHandle; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  TokenHandle = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
    goto LABEL_6;
  }
  if ( OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
LABEL_6:
    PackageSidFromProcessToken = 0;
    goto LABEL_7;
  }
  LastError = GetLastError();
  PackageSidFromProcessToken = LastError;
  if ( LastError > 0 )
    PackageSidFromProcessToken = (unsigned __int16)LastError | 0x80070000;
LABEL_7:
  if ( PackageSidFromProcessToken >= 0 )
    PackageSidFromProcessToken = CallerIdentity::GetPackageSidFromProcessToken(TokenHandle, a2, v5);
  v8 = (char *)TokenHandle;
  TokenHandle = 0LL;
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v8);
  return (unsigned int)PackageSidFromProcessToken;
}
