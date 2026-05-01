/*
 * XREFs of ?GetUserTokenHandle@UserHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUIUser@System@Windows@@@Z @ 0x180467F88
 * Callers:
 *     ?IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z @ 0x180468FC0 (-IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     IsUMgrQueryUserTokenPresent @ 0x1801CC418 (IsUMgrQueryUserTokenPresent.c)
 */

// Hidden C++ exception states: #wind=1
PHANDLE __fastcall UserHelpers::GetUserTokenHandle(PHANDLE TokenHandle)
{
  HANDLE CurrentThread; // rax
  signed int LastError; // eax
  HANDLE CurrentProcess; // rax
  HANDLE v5; // rax
  HANDLE v6; // rax
  bool v7; // sf
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *TokenHandle = 0LL;
  IsUMgrQueryUserTokenPresent();
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    TokenHandle,
    0LL);
  CurrentThread = GetCurrentThread();
  if ( OpenThreadToken(CurrentThread, 8u, 0, TokenHandle) )
    return TokenHandle;
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError != -2147023888 )
    goto LABEL_17;
  CurrentProcess = GetCurrentProcess();
  if ( OpenProcessToken(CurrentProcess, 8u, TokenHandle) )
    return TokenHandle;
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError != -2147023888 )
    goto LABEL_17;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    TokenHandle,
    0LL);
  v5 = GetCurrentThread();
  if ( OpenThreadToken(v5, 8u, 1, TokenHandle) )
    goto LABEL_14;
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError != -2147023888 )
    goto LABEL_17;
  v6 = GetCurrentProcess();
  if ( OpenProcessToken(v6, 8u, TokenHandle) )
  {
LABEL_14:
    LastError = 0;
  }
  else
  {
    LastError = GetLastError();
    v7 = LastError < 0;
    if ( LastError <= 0 )
      goto LABEL_18;
    LastError = (unsigned __int16)LastError | 0x80070000;
  }
LABEL_17:
  v7 = LastError < 0;
LABEL_18:
  if ( v7 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x61,
      (int)"shellcommon\\internal\\shell\\inc\\Helpers\\UserHelpers.h",
      (const char *)(unsigned int)LastError,
      1);
  return TokenHandle;
}
