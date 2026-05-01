/*
 * XREFs of ?GetWindowNamedObjectPath@UserAwareWindowIdentity@@YAJPEAUHWND__@@EPEAU_UNICODE_STRING@@@Z @ 0x180713550
 * Callers:
 *     ?TryOpenFileMappingHandleForWindow@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@_JAEBUhstring@winrt@@@Z @ 0x1807197A0 (-TryOpenFileMappingHandleForWindow@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_re.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetProcessNamedObjectPath@UserAwareProcessIdentity@@YAJKEPEAU_UNICODE_STRING@@@Z @ 0x180712ACC (-GetProcessNamedObjectPath@UserAwareProcessIdentity@@YAJKEPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall UserAwareWindowIdentity::GetWindowNamedObjectPath(
        UserAwareWindowIdentity *this,
        HWND a2,
        __int64 a3,
        struct _UNICODE_STRING *a4)
{
  int ProcessNamedObjectPath; // ebx
  __int64 v6; // rdx
  __int64 v8; // rdx
  char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(dwProcessId) = (_BYTE)a2;
  if ( !a3 )
  {
    ProcessNamedObjectPath = -2147024809;
    v6 = 136LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
      (const char *)(unsigned int)ProcessNamedObjectPath);
    return (unsigned int)ProcessNamedObjectPath;
  }
  if ( !GetWindowThreadProcessId((HWND)this, &dwProcessId) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x8B,
             (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
             v9);
  ProcessNamedObjectPath = UserAwareProcessIdentity::GetProcessNamedObjectPath(
                             dwProcessId,
                             v8,
                             a3,
                             (struct _UNICODE_STRING *)v9);
  if ( ProcessNamedObjectPath < 0 )
  {
    v6 = 141LL;
    goto LABEL_3;
  }
  return 0LL;
}
