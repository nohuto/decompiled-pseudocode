/*
 * XREFs of ?EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ @ 0x1800A9610
 * Callers:
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x1800A9200 (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z @ 0x1800A94E0 (-GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180196744 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?DestroyPrivateObjectSecurity@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801BBFC0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-DestroyPrivateObjectSecurity@details@wi.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall IsGameManager::EnsureGameDVRFolderAccess(IsGameManager *this, __int64 a2)
{
  int KnownFolderSubFolder; // eax
  signed int v3; // edi
  const WCHAR *StringRawBuffer; // rax
  signed int LastError; // eax
  struct _ACL *v6; // rdi
  WCHAR *v7; // rax
  DWORD v8; // eax
  signed int v10; // eax
  __int64 v11; // rdx
  signed int v12; // eax
  int v13; // [rsp+20h] [rbp-48h]
  unsigned int v14; // [rsp+20h] [rbp-48h]
  PACL pDacl; // [rsp+40h] [rbp-28h] BYREF
  _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+10h]
  IsGameManager *bDaclDefaulted; // [rsp+80h] [rbp+18h] BYREF
  WINBOOL bDaclPresent; // [rsp+88h] [rbp+20h] BYREF
  HSTRING string; // [rsp+90h] [rbp+28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+98h] [rbp+30h] BYREF

  bDaclDefaulted = this;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameMRU>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GameMRU>::GetImpl'::`2'::impl,
    a2);
  string = 0LL;
  KnownFolderSubFolder = GetKnownFolderSubFolder(
                           (KNOWNFOLDERID *)&FOLDERID_LocalAppData,
                           L"Microsoft\\GameDVR",
                           0LL,
                           (struct Windows::Internal::String *)&string);
  v3 = KnownFolderSubFolder;
  if ( KnownFolderSubFolder >= 0 )
  {
    SecurityDescriptor = 0LL;
    memset(&SecurityAttributes, 0, sizeof(SecurityAttributes));
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;CIOI;0x111FFFFF;;;CO)(A;CIOI;0x111FFFFF;;;SY)(A;CIOI;0x111FFFFF;;;BA)(A;CIOI;GRGXGW;;;S-1-15-3-1024-4495"
            "00426-4112254358-3456904286-1727260714-2501084857-171973213-3131658879-2198086578)(A;CIOI;GRGXGW;;;S-1-5-32-"
            "449500426-4112254358-3456904286-1727260714-2501084857-171973213-3131658879-2198086578)",
           1u,
           &SecurityDescriptor,
           0LL) )
    {
      SecurityAttributes.bInheritHandle = 0;
      SecurityAttributes.lpSecurityDescriptor = SecurityDescriptor;
      SecurityAttributes.nLength = 24;
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( CreateDirectoryW(StringRawBuffer, &SecurityAttributes) )
      {
LABEL_8:
        v3 = 0;
LABEL_9:
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_DestroyPrivateObjectSecurity_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(&SecurityDescriptor);
        goto LABEL_10;
      }
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError != 183 && LastError != 80 )
      {
        if ( LastError > 0 )
          v3 = (unsigned __int16)LastError | 0x80070000;
        if ( v3 >= 0 )
          goto LABEL_9;
        v11 = 654LL;
        goto LABEL_24;
      }
      pDacl = 0LL;
      if ( GetSecurityDescriptorDacl(SecurityDescriptor, &bDaclPresent, &pDacl, (LPBOOL)&bDaclDefaulted) )
      {
        v6 = pDacl;
        if ( pDacl )
        {
          v7 = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
          v8 = SetNamedSecurityInfoW(v7, SE_FILE_OBJECT, 4u, 0LL, 0LL, v6, 0LL);
          if ( v8 )
          {
            v3 = wil::details::in1diag3::Return_Win32(
                   retaddr,
                   (void *)0x28A,
                   (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                   (const char *)v8,
                   v14);
            goto LABEL_9;
          }
          goto LABEL_8;
        }
        v3 = -2147024891;
        v11 = 643LL;
      }
      else
      {
        v12 = GetLastError();
        v3 = v12;
        if ( v12 > 0 )
          v3 = (unsigned __int16)v12 | 0x80070000;
        if ( v3 >= 0 )
          goto LABEL_9;
        v11 = 636LL;
      }
    }
    else
    {
      v10 = GetLastError();
      v3 = v10;
      if ( v10 > 0 )
        v3 = (unsigned __int16)v10 | 0x80070000;
      if ( v3 >= 0 )
        goto LABEL_9;
      v11 = 619LL;
    }
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v3,
      v13);
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x264,
    (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)(unsigned int)KnownFolderSubFolder,
    v13);
LABEL_10:
  if ( string )
    WindowsDeleteString(string);
  return (unsigned int)v3;
}
