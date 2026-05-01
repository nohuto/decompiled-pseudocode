/*
 * XREFs of ?GetProcessNamedObjectPath@UserAwareProcessIdentity@@YAJKEPEAU_UNICODE_STRING@@@Z @ 0x180712ACC
 * Callers:
 *     ?GetWindowNamedObjectPath@UserAwareWindowIdentity@@YAJPEAUHWND__@@EPEAU_UNICODE_STRING@@@Z @ 0x180713550 (-GetWindowNamedObjectPath@UserAwareWindowIdentity@@YAJPEAUHWND__@@EPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800507C4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     IsUMgrQueryUserTokenPresent @ 0x1801CC418 (IsUMgrQueryUserTokenPresent.c)
 */

__int64 __fastcall UserAwareProcessIdentity::GetProcessNamedObjectPath(
        DWORD dwProcessId,
        __int64 a2,
        __int64 a3,
        struct _UNICODE_STRING *a4)
{
  char *v7; // rbx
  signed int v8; // edi
  signed int Error; // eax
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // esi
  int TokenNamedObjectPath; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *TokenHandle; // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v7 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = 0;
    TokenHandle = 0LL;
    goto LABEL_6;
  }
  Error = ResultFromKnownLastError();
  TokenHandle = 0LL;
  v8 = Error;
  if ( Error >= 0 )
  {
LABEL_6:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &TokenHandle,
      0LL);
    if ( !OpenProcessToken(v7, 8u, &TokenHandle) )
      v8 = ResultFromKnownLastError();
  }
  if ( (((unsigned __int64)TokenHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
    && v8 == -2147024891
    && IsUMgrQueryUserTokenPresent()
    && (wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &TokenHandle,
          0LL),
        v11 = UMgrOpenProcessTokenForQuery(dwProcessId, &TokenHandle),
        v12 = v11,
        v11 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
      (const char *)(unsigned int)v11);
  }
  else if ( (((unsigned __int64)TokenHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    LOBYTE(v10) = 1;
    TokenNamedObjectPath = RtlGetTokenNamedObjectPath(TokenHandle, v10, a3);
    if ( TokenNamedObjectPath >= 0 )
      v12 = 0;
    else
      v12 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x6E,
              (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
              (const char *)(unsigned int)TokenNamedObjectPath);
  }
  else
  {
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C,
        (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
        (const char *)(unsigned int)v8);
    v12 = v8;
  }
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TokenHandle);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  return v12;
}
