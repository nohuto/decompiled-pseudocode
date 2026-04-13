/*
 * XREFs of ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x18003A55C
 * Callers:
 *     ?get_ContextualSuggestionsManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIContextualSuggestionsManager@2@@Z @ 0x180049140 (-get_ContextualSuggestionsManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUI.c)
 *     ?get_IdentityManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIIdentityManager@2@@Z @ 0x180049610 (-get_IdentityManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIIdentityManag.c)
 *     ?get_ThumbnailCacheHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIThumbnailCacheHelper@2@@Z @ 0x18004A4E0 (-get_ThumbnailCacheHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIThumbnai.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180044594 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x18008468C (-GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1800847D4 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180084A3C (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x180084C18 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList(
        CreativeFramework::LockScreenCategoryConfig *this,
        const unsigned __int16 *const *a2)
{
  __int64 v2; // rdx
  signed int CallingProcessHandle; // ebx
  bool *v4; // r8
  char *v5; // rcx
  void **v7; // r8
  signed int LastError; // eax
  char *v9; // rcx
  const WCHAR **v10; // rbx
  const char *v11; // rdi
  const WCHAR *v12; // r8
  __int64 v13; // rax
  const WCHAR *v14; // rcx
  unsigned __int16 **v15; // rdx
  void *v16; // rbx
  int bIgnoreCase; // [rsp+20h] [rbp-40h]
  LPWSTR StringSid; // [rsp+30h] [rbp-30h] BYREF
  int cchCount1[2]; // [rsp+38h] [rbp-28h]
  __int64 v20; // [rsp+40h] [rbp-20h]
  LPVOID pv[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  HANDLE hObject; // [rsp+90h] [rbp+30h] BYREF
  int v24; // [rsp+98h] [rbp+38h] BYREF
  PSID Sid; // [rsp+A0h] [rbp+40h] BYREF

  v24 = (int)a2;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &hObject);
  if ( CallingProcessHandle >= 0 )
    CallingProcessHandle = CallerIdentity::IsProcessAppContainer(hObject, &v24, v4);
  v5 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  if ( CallingProcessHandle < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCategoryConfig.h",
      (const char *)(unsigned int)CallingProcessHandle,
      bIgnoreCase);
    return (unsigned int)CallingProcessHandle;
  }
  if ( (_BYTE)v24 )
  {
    *(_QWORD *)cchCount1 = -1LL;
    v20 = -1LL;
    StringSid = 0LL;
    hObject = 0LL;
    CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v5, v2, &hObject);
    if ( CallingProcessHandle >= 0 )
    {
      StringSid = 0LL;
      CallingProcessHandle = CallerIdentity::GetPackageSidFromProcessHandle(hObject, &Sid, v7);
      if ( CallingProcessHandle >= 0 )
      {
        if ( ConvertSidToStringSidW(Sid, &StringSid) )
        {
          CallingProcessHandle = 0;
        }
        else
        {
          LastError = GetLastError();
          CallingProcessHandle = LastError;
          if ( LastError > 0 )
            CallingProcessHandle = (unsigned __int16)LastError | 0x80070000;
          if ( CallingProcessHandle >= 0 )
            CallingProcessHandle = -2147467259;
        }
        LocalFree(Sid);
      }
    }
    v9 = (char *)hObject;
    hObject = 0LL;
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v9);
    if ( CallingProcessHandle < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCategoryConfig.h",
        (const char *)(unsigned int)CallingProcessHandle,
        bIgnoreCase);
      if ( StringSid )
        CoTaskMemFree(StringSid);
      return (unsigned int)CallingProcessHandle;
    }
    v10 = (const WCHAR **)off_180109290;
    v11 = (const char *)&Src;
    while ( 1 )
    {
      v12 = &Src;
      if ( *v10 )
        v12 = *v10;
      LODWORD(v13) = cchCount1[0];
      if ( *(_QWORD *)cchCount1 == -1LL )
      {
        if ( StringSid )
        {
          v13 = -1LL;
          do
            ++v13;
          while ( StringSid[v13] );
        }
        else
        {
          LODWORD(v13) = 0;
        }
      }
      v14 = &Src;
      if ( StringSid )
        v14 = StringSid;
      if ( CompareStringOrdinal(v14, v13, v12, -(*v10 != 0LL), 1) == 2 )
        break;
      if ( (__int64)++v10 >= (__int64)&off_180109298 )
      {
        pv[0] = 0LL;
        pv[1] = (LPVOID)-1LL;
        pv[2] = (LPVOID)-1LL;
        CallerIdentity::GetCallingProcessPackageFullName((CallerIdentity *)pv, v15);
        v16 = pv[0];
        if ( pv[0] )
          v11 = (const char *)pv[0];
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCategoryConfig.h",
          (const char *)0x80070005LL,
          (int)"%ls",
          v11);
        if ( v16 )
          CoTaskMemFree(v16);
        if ( StringSid )
          CoTaskMemFree(StringSid);
        return 2147942405LL;
      }
    }
    if ( StringSid )
      CoTaskMemFree(StringSid);
  }
  return 0LL;
}
