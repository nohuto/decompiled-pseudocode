/*
 * XREFs of ?EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@CAX_N_JAEBVCorrelationVector@@@Z @ 0x180098AF8
 * Callers:
 *     ?OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z @ 0x180012F60 (-OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x180254A90 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDes_ea_180254A90.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@QEAA_NXZ @ 0x180098788 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEAA_NXZ @ 0x180098904 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x180098F3C (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z @ 0x18018D6DC (-SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ProtocolLauncher@Utils@@QEAA@XZ @ 0x1802E9BF8 (--1ProtocolLauncher@Utils@@QEAA@XZ.c)
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x18046A3A4 (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MNIB@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806BF8CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MNIB@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1806C2684 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun(
        char a1,
        __int64 a2,
        const struct CorrelationVector *a3)
{
  __int64 v6; // rdx
  Utils::ProtocolLauncher *v7; // rbx
  const unsigned __int16 *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int16 *v12; // rcx
  unsigned __int16 v13; // ax
  unsigned __int16 *v14; // rax
  __int64 v15; // r8
  unsigned __int16 *v16; // rax
  __int64 v17; // r10
  const char *v18; // r9
  __int64 v19; // rdx
  unsigned __int16 *v20; // rcx
  __int64 v21; // rax
  char *v22; // r8
  unsigned __int16 v23; // r9
  unsigned __int16 *v24; // rax
  int v25; // eax
  int bIgnoreCase; // [rsp+20h] [rbp-E0h]
  Utils::ProtocolLauncher *v27; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v28[40]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v29[128]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR String1[512]; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5A8h] [rbp+4A8h]

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveChat>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_RemoveChat>::GetImpl'::`2'::impl)
    && !wil::details::FeatureImpl<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::GetImpl'::`2'::impl) )
  {
    std::wstring::wstring(v28, L"ms-meetnow");
    Utils::ProtocolLauncher::TryGetForUriScheme(&v27, v28);
    std::wstring::_Tidy_deallocate(v28, v6);
    if ( (int)SHRegGetStringEx(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Communications",
                L"LastRegisteredProgId",
                2,
                String1,
                0x200u) < 0 )
      String1[0] = 0;
    v7 = v27;
    if ( v27 )
      v8 = *(const unsigned __int16 **)v27;
    else
      v8 = &LocaleName;
    if ( CompareStringOrdinal(String1, -1, v8, -1, 1) != 2 )
    {
      v9 = SHRegSetString(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Communications",
             L"LastRegisteredProgId",
             v8);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x161,
          (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
          (const char *)(unsigned int)v9,
          bIgnoreCase);
      if ( a1 && *v8 )
      {
        v11 = 128LL;
        v12 = v29;
        do
        {
          if ( v11 == -2147483518 )
            break;
          v13 = *(unsigned __int16 *)((char *)v12 + (char *)L"ms-meetnow" - (char *)v29);
          if ( !v13 )
            break;
          *v12++ = v13;
          --v11;
        }
        while ( v11 );
        v14 = v12 - 1;
        if ( v11 )
          v14 = v12;
        *v14 = 0;
        if ( !v11 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x169,
            (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
            (const char *)0x8007007ALL,
            bIgnoreCase);
        v15 = 128LL;
        v16 = v29;
        do
        {
          if ( !*v16 )
            break;
          ++v16;
          --v15;
        }
        while ( v15 );
        v17 = (128 - v15) & -(__int64)(v15 != 0);
        v18 = v15 == 0 ? (const char *)0x80070057LL : 0LL;
        if ( v15 )
        {
          v19 = 128 - v17;
          v20 = &v29[v17];
          if ( 128 != v17 )
          {
            v21 = 2147483646LL;
            v22 = (char *)((char *)L":FirstRun" - (char *)v20);
            do
            {
              if ( !v21 )
                break;
              v23 = *(unsigned __int16 *)((char *)v20 + (_QWORD)v22);
              if ( !v23 )
                break;
              *v20++ = v23;
              --v21;
              --v19;
            }
            while ( v19 );
          }
          v24 = v20 - 1;
          if ( v19 )
            v24 = v20;
          *v24 = 0;
          v18 = v19 == 0 ? (const char *)0x8007007ALL : 0LL;
        }
        if ( (int)v18 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x16A,
            (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
            v18,
            bIgnoreCase);
        Utils::ProtocolLauncher::LaunchUriWithCv(v7, v29, a2, a3);
      }
      LOBYTE(v10) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_MNIB>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_MNIB>::GetImpl'::`2'::impl,
        v10);
      v25 = RtlPublishWnfStateData(WNF_SHEL_CHAT_ICON_BADGE, 0LL, &LocaleName, 2LL) | 0x10000000;
      if ( v25 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x171,
          (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
          (const char *)(unsigned int)v25,
          0);
    }
    if ( v7 )
    {
      Utils::ProtocolLauncher::~ProtocolLauncher(v7);
      operator delete(v7, 0x30uLL);
    }
  }
}
