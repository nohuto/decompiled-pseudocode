/*
 * XREFs of ?Initialize@GameDVR_OutputDebug@@SAJXZ @ 0x1800A7798
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800905A0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?RegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ @ 0x1800A8860 (-RegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800C0B00 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureTraceFileOpen@GameDVR_OutputDebug@@SAX_N@Z @ 0x1803DD328 (-EnsureTraceFileOpen@GameDVR_OutputDebug@@SAX_N@Z.c)
 */

__int64 GameDVR_OutputDebug::Initialize(void)
{
  HRESULT v0; // eax
  int v1; // ebx
  HRESULT v2; // eax
  HSTRING v3; // rcx
  PWSTR v4; // rcx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+10h]
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF
  PWSTR ppszPath; // [rsp+48h] [rbp+20h] BYREF
  HSTRING newString; // [rsp+50h] [rbp+28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+30h] BYREF

  ppszPath = 0LL;
  v10 = 0;
  wil::EnterCriticalSection(&lpCriticalSection, &GameDVR_OutputDebug::s_csLock);
  if ( !WindowsIsStringEmpty(GameDVR_OutputDebug::s_TraceOutputFilePath) )
    goto LABEL_7;
  v0 = SHGetKnownFolderPath(&FOLDERID_LocalAppData, 0x8000u, 0LL, &ppszPath);
  v1 = v0;
  if ( v0 < 0 )
  {
    v6 = (unsigned int)v0;
    v7 = 54LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamedvrtraceprovider.cpp",
      (const char *)v6,
      v8);
    goto LABEL_12;
  }
  if ( !ppszPath )
  {
    v1 = -2147467261;
    goto LABEL_18;
  }
  v1 = Windows::Internal::String::_InitializeHelper(
         (Windows::Internal::String *)&GameDVR_OutputDebug::s_TraceOutputFilePath,
         ppszPath);
  if ( v1 < 0 )
  {
LABEL_18:
    v6 = (unsigned int)v1;
    v7 = 56LL;
    goto LABEL_19;
  }
  v2 = WindowsConcatString(GameDVR_OutputDebug::s_TraceOutputFilePath, string2, &newString);
  v1 = v2;
  if ( v2 < 0 )
  {
    v6 = (unsigned int)v2;
    v7 = 57LL;
    goto LABEL_19;
  }
  v3 = GameDVR_OutputDebug::s_TraceOutputFilePath;
  GameDVR_OutputDebug::s_TraceOutputFilePath = newString;
  WindowsDeleteString(v3);
LABEL_7:
  if ( (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR\\Debug",
              L"TraceOn",
              &v10) >= 0 )
    GameDVR_OutputDebug::EnsureTraceFileOpen(v10 != 0);
  if ( (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR\\Debug",
              L"DebugOutputOn",
              &v10) >= 0 )
    GameDVR_OutputDebug::s_fOutputToDebugger = v10 != 0;
  v1 = 0;
LABEL_12:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v4 = ppszPath;
  ppszPath = 0LL;
  CoTaskMemFree(v4);
  return (unsigned int)v1;
}
