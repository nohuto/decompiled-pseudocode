/*
 * XREFs of ?EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@CAX_N_JAEBVCorrelationVector@@@Z @ 0x1801D1460
 * Callers:
 *     ?OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z @ 0x18003D410 (-OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x1801D26E0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDes_ea_1801D26E0.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800E6350 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x18011E514 (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@QEAA@XZ @ 0x180180794 (--1-$unique_ptr@VProtocolLauncher@Utils@@U-$default_delete@VProtocolLauncher@Utils@@@std@@@std@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1801D3374 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MNIB@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805CDFBC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MNIB@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x1805CE040 (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun(
        char a1,
        __int64 a2,
        const struct CorrelationVector *a3)
{
  LSTATUS ValueW; // eax
  bool v7; // sf
  Utils::ProtocolLauncher *v8; // rbx
  const unsigned __int16 *v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int16 *v13; // rcx
  unsigned __int16 v14; // ax
  unsigned __int16 *v15; // rax
  __int64 v16; // r8
  unsigned __int16 *v17; // rax
  __int64 v18; // r10
  const char *v19; // r9
  __int64 v20; // rdx
  unsigned __int16 *v21; // rcx
  __int64 v22; // rax
  char *v23; // r8
  unsigned __int16 v24; // r9
  unsigned __int16 *v25; // rax
  int v26; // eax
  int pdwType; // [rsp+20h] [rbp-E0h]
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  Utils::ProtocolLauncher *v29; // [rsp+48h] [rbp-B8h] BYREF
  void *v30[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v31[128]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR String1[512]; // [rsp+170h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5B8h] [rbp+4B8h]

  std::wstring::wstring(v30, L"ms-meetnow");
  Utils::ProtocolLauncher::TryGetForUriScheme(&v29, v30);
  std::wstring::~wstring(v30);
  pcbData = 1024;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Communications",
             L"LastRegisteredProgId",
             2u,
             0LL,
             String1,
             &pcbData);
  v7 = ValueW < 0;
  if ( ValueW )
  {
    String1[0] = 0;
    if ( ValueW > 0 )
      v7 = 1;
  }
  if ( v7 )
    String1[0] = 0;
  v8 = v29;
  if ( v29 )
    v9 = *(const unsigned __int16 **)v29;
  else
    v9 = &LocaleName;
  if ( CompareStringOrdinal(String1, -1, v9, -1, 1) != 2 )
  {
    v10 = SHRegSetString(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Communications",
            L"LastRegisteredProgId",
            v9);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15C,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v10,
        pdwType);
    if ( a1 && *v9 )
    {
      v12 = 128LL;
      v13 = v31;
      do
      {
        if ( v12 == -2147483518 )
          break;
        v14 = *(unsigned __int16 *)((char *)v13 + (char *)L"ms-meetnow" - (char *)v31);
        if ( !v14 )
          break;
        *v13++ = v14;
        --v12;
      }
      while ( v12 );
      v15 = v13 - 1;
      if ( v12 )
        v15 = v13;
      *v15 = 0;
      if ( !v12 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x164,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
          (const char *)0x8007007ALL,
          pdwType);
      v16 = 128LL;
      v17 = v31;
      do
      {
        if ( !*v17 )
          break;
        ++v17;
        --v16;
      }
      while ( v16 );
      v18 = (128 - v16) & -(__int64)(v16 != 0);
      v19 = v16 == 0 ? (const char *)0x80070057LL : 0LL;
      if ( v16 )
      {
        v20 = 128 - v18;
        v21 = &v31[v18];
        if ( 128 != v18 )
        {
          v22 = 2147483646LL;
          v23 = (char *)((char *)L":FirstRun" - (char *)v21);
          do
          {
            if ( !v22 )
              break;
            v24 = *(unsigned __int16 *)((char *)v21 + (_QWORD)v23);
            if ( !v24 )
              break;
            *v21++ = v24;
            --v22;
            --v20;
          }
          while ( v20 );
        }
        v25 = v21 - 1;
        if ( v20 )
          v25 = v21;
        *v25 = 0;
        v19 = v20 == 0 ? (const char *)0x8007007ALL : 0LL;
      }
      if ( (int)v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x165,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
          v19,
          pdwType);
      Utils::ProtocolLauncher::LaunchUriWithCv(v8, v31, a2, a3);
    }
    LOBYTE(v11) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MNIB>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_MNIB>::GetImpl'::`2'::impl,
      v11);
    v26 = RtlPublishWnfStateData(WNF_SHEL_CHAT_ICON_BADGE, 0LL, &LocaleName, 2LL) | 0x10000000;
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16C,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v26,
        0);
  }
  std::unique_ptr<Utils::ProtocolLauncher>::~unique_ptr<Utils::ProtocolLauncher>(&v29);
}
