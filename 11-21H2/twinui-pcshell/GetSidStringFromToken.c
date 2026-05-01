/*
 * XREFs of GetSidStringFromToken @ 0x180108224
 * Callers:
 *     IsUserAssignedAccessSingleApp @ 0x18010773C (IsUserAssignedAccessSingleApp.c)
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x18011BC20 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 *     ?IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ @ 0x1805CD0E8 (-IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ.c)
 *     IsCurrentUserAssignedAccessSingleAppClassicApp @ 0x1805F41DC (IsCurrentUserAssignedAccessSingleAppClassicApp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?first@?$__compressed_pair@PEAU_TOKEN_USER@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAPEAU_TOKEN_USER@@XZ @ 0x180108360 (-first@-$__compressed_pair@PEAU_TOKEN_USER@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ?first@?$__compressed_pair@PEAU_TOKEN_USER@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEBAAEBQEAU_TOKEN_USER@@XZ @ 0x18010836C (-first@-$__compressed_pair@PEAU_TOKEN_USER@@U-$function_deleter@P6AXPEAX@Z$1-CoTask_ea_18010836C.c)
 *     ?get@?$unique_ptr@U_TOKEN_USER@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEBAPEAU_TOKEN_USER@@XZ @ 0x180108378 (-get@-$unique_ptr@U_TOKEN_USER@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wis.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetSidStringFromToken(HANDLE TokenHandle, LPWSTR *StringSid)
{
  const char *v4; // r9
  DWORD v5; // ebx
  void *v6; // rax
  const char *v7; // r9
  PSID *v8; // rax
  unsigned int LastError; // ebx
  void *v10; // rdi
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  SIZE_T cb; // [rsp+50h] [rbp+18h] BYREF
  LPVOID v15; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(cb) = 0;
  if ( !GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, (PDWORD)&cb) && GetLastError() != 122 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1D,
             (unsigned int)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
             v4);
  v15 = CoTaskMemAlloc((unsigned int)cb);
  if ( !*(_QWORD *)wistd::__compressed_pair<_TOKEN_USER *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::first(&v15) )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_9;
  }
  v5 = cb;
  v6 = (void *)wistd::unique_ptr<_TOKEN_USER,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::get(&v15);
  if ( !GetTokenInformation(TokenHandle, TokenUser, v6, v5, (PDWORD)&cb) )
  {
    v12 = 33LL;
LABEL_16:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v12,
                  (unsigned int)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
                  v7);
    goto LABEL_9;
  }
  if ( *StringSid )
  {
    LocalFree(*StringSid);
    *StringSid = 0LL;
  }
  StringSid[1] = (LPWSTR)-1LL;
  StringSid[2] = (LPWSTR)-1LL;
  v8 = (PSID *)wistd::unique_ptr<_TOKEN_USER,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::get(&v15);
  if ( !ConvertSidToStringSidW(*v8, StringSid) )
  {
    v12 = 34LL;
    goto LABEL_16;
  }
  LastError = 0;
LABEL_9:
  v10 = *(void **)wistd::__compressed_pair<_TOKEN_USER *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::first(&v15);
  *(_QWORD *)wistd::__compressed_pair<_TOKEN_USER *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::first(&v15) = 0LL;
  if ( v10 )
    CoTaskMemFree(v10);
  return LastError;
}
