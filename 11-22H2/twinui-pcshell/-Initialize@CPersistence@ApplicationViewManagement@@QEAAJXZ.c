/*
 * XREFs of ?Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ @ 0x18012F5D8
 * Callers:
 *     ??$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlobals@ApplicationViewManagement@@AEAPEAVCApplicationViewManager@@@Z @ 0x18012F178 (--$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@D.c)
 * Callees:
 *     ?CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z @ 0x18012F95C (-CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY06$$CBGAEAJ@Z @ 0x1803CFFD4 (--$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@Applicati.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY0L@$$CBGAEAJ@Z @ 0x1803D00A4 (--$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@Applicat.c)
 */

__int64 __fastcall ApplicationViewManagement::CPersistence::Initialize(PHKEY phkResult)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  LSTATUS Key; // eax
  __int64 v5; // rcx
  HKEY v6; // rcx
  __int64 v8; // rdx
  DWORD dwOptions; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v11; // [rsp+68h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+70h] [rbp+18h] BYREF

  hKey = 0LL;
  v11 = CreateShellSessionKey(4u, &hKey);
  v3 = v11;
  if ( v11 < 0 )
  {
    ApplicationViewManagement::ApplicationViewTelemetry::ApplicationViewManagerInitializationFailed<unsigned short const (&)[11],long &>(
      v2,
      &v11);
    v8 = 15LL;
  }
  else
  {
    Key = RegCreateKeyExW(hKey, L"ApplicationViewManagement", 0, 0LL, 1u, 0xF003Fu, 0LL, phkResult, 0LL);
    v3 = Key;
    if ( Key > 0 )
      v3 = (unsigned __int16)Key | 0x80070000;
    v11 = v3;
    if ( (v3 & 0x80000000) == 0 )
    {
      v3 = 0;
      goto LABEL_6;
    }
    ApplicationViewManagement::ApplicationViewTelemetry::ApplicationViewManagerInitializationFailed<unsigned short const (&)[7],long &>(
      v5,
      &v11);
    v8 = 32LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
    (const char *)v3,
    dwOptions);
LABEL_6:
  v6 = hKey;
  hKey = 0LL;
  if ( v6 )
    RegCloseKey(v6);
  return v3;
}
