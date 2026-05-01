/*
 * XREFs of ?IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z @ 0x180468FC0
 * Callers:
 *     ?CanUserInstallStoreApps@@YA_NXZ @ 0x180466EB4 (-CanUserInstallStoreApps@@YA_NXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetUserTokenHandle@UserHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUIUser@System@Windows@@@Z @ 0x180467F88 (-GetUserTokenHandle@UserHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_p.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall UserHelpers::IsUserAnAdmin(UserHelpers *this, struct Windows::System::IUser *a2)
{
  const char *v2; // r9
  char v3; // bl
  DWORD LastError; // eax
  char *v5; // rcx
  const char *v6; // r9
  unsigned int ReturnLength; // [rsp+20h] [rbp-39h]
  WINBOOL IsMember; // [rsp+30h] [rbp-29h] BYREF
  DWORD cbSid; // [rsp+34h] [rbp-25h] BYREF
  char *TokenInformation; // [rsp+38h] [rbp-21h] BYREF
  HANDLE TokenHandle; // [rsp+40h] [rbp-19h] BYREF
  _BYTE pSid[80]; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  UserHelpers::GetUserTokenHandle(&TokenHandle);
  cbSid = 68;
  v3 = 0;
  if ( !CreateWellKnownSid(WinBuiltinAdministratorsSid, 0LL, pSid, &cbSid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x94,
      (int)"shellcommon\\internal\\shell\\inc\\Helpers\\UserHelpers.h",
      v2);
  IsMember = 0;
  if ( CheckTokenMembership(TokenHandle, pSid, &IsMember) && IsMember )
    goto LABEL_15;
  TokenInformation = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)&TokenInformation,
    0LL);
  if ( !GetTokenInformation(TokenHandle, TokenLinkedToken, &TokenInformation, 8u, &cbSid) )
  {
    LastError = GetLastError();
    if ( ((LastError - 1312) & 0xFFFFFFFD) != 0 )
      wil::details::in1diag3::Throw_Win32(
        retaddr,
        (void *)0xA1,
        (unsigned int)"shellcommon\\internal\\shell\\inc\\Helpers\\UserHelpers.h",
        (const char *)LastError,
        ReturnLength);
  }
  v5 = TokenInformation;
  if ( (unsigned __int64)(TokenInformation - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( !CheckTokenMembership(TokenInformation, pSid, &IsMember) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xA7,
        (int)"shellcommon\\internal\\shell\\inc\\Helpers\\UserHelpers.h",
        v6);
    v5 = TokenInformation;
  }
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  if ( IsMember )
LABEL_15:
    v3 = 1;
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TokenHandle);
  return v3;
}
