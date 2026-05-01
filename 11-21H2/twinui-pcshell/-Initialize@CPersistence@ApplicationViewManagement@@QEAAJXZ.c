/*
 * XREFs of ?Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ @ 0x1800CA460
 * Callers:
 *     ??$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlobals@ApplicationViewManagement@@AEAPEAVCApplicationViewManager@@@Z @ 0x1800CA3A4 (--$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@D.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z @ 0x1800CA514 (-CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY06$$CBGAEAJ@Z @ 0x180314A54 (--$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@Applicati.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY0L@$$CBGAEAJ@Z @ 0x180314B24 (--$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@Applicat.c)
 */

__int64 __fastcall ApplicationViewManagement::CPersistence::Initialize(PHKEY phkResult)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  LSTATUS Key; // eax
  __int64 v5; // rcx
  HKEY v6; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v10; // [rsp+68h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+70h] [rbp+18h] BYREF

  hKey = 0LL;
  v10 = CreateShellSessionKey((unsigned int)phkResult, &hKey);
  v3 = v10;
  if ( v10 < 0 )
  {
    ApplicationViewManagement::ApplicationViewTelemetry::ApplicationViewManagerInitializationFailed<unsigned short const (&)[11],long &>(
      v2,
      &v10);
    v8 = 15LL;
  }
  else
  {
    Key = RegCreateKeyExW(hKey, L"ApplicationViewManagement", 0, 0LL, 1u, 0xF003Fu, 0LL, phkResult, 0LL);
    v3 = Key;
    if ( Key > 0 )
      v3 = (unsigned __int16)Key | 0x80070000;
    v10 = v3;
    if ( (v3 & 0x80000000) == 0 )
    {
      v3 = 0;
      goto LABEL_6;
    }
    ApplicationViewManagement::ApplicationViewTelemetry::ApplicationViewManagerInitializationFailed<unsigned short const (&)[7],long &>(
      v5,
      &v10);
    v8 = 32LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
    (const char *)v3);
LABEL_6:
  v6 = hKey;
  hKey = 0LL;
  if ( v6 )
    RegCloseKey(v6);
  return v3;
}
