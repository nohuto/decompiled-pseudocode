/*
 * XREFs of ?DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1801EACB8
 * Callers:
 *     ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1800B3444 (-ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@U.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UndockedSearchExperienceManager_NumberOfSubdomainsIssueDetected@PEBGAEAIAEA_NAEA_N@SearchAppExperienceManagerTelemetry@@SAX$$QEAPEBGAEAIAEA_N2@Z @ 0x1801E6B18 (--$UndockedSearchExperienceManager_NumberOfSubdomainsIssueDetected@PEBGAEAIAEA_NAEA_N@SearchAppE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56811165@@@details@wil@@QEAA_NXZ @ 0x1801F0608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56811165@@@details@wil@@QEAA_NXZ.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1803DFDA4 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::DetectAndMitigateSpartanSubdomainIssue(
        UndockedSearchAppExperienceManager *this)
{
  bool v2; // bl
  bool v3; // di
  LSTATUS DWORD; // eax
  LSTATUS v5; // eax
  int v6; // eax
  int v7; // eax
  const unsigned __int16 *v9; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  bool v11; // [rsp+58h] [rbp+28h] BYREF
  bool v12; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+38h] BYREF

  v2 = 0;
  v12 = 0;
  v3 = 0;
  v11 = 0;
  v13 = 0;
  DWORD = SHRegGetDWORD(
            HKEY_CLASSES_ROOT,
            L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.client"
             ".cbs_cw5n1h2txyewy\\Internet Explorer\\DOMStorage\\bing.com",
            L"NumberOfSubdomains",
            &v13);
  if ( DWORD < 0 )
  {
    if ( DWORD != -2147024894 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x407,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)DWORD);
  }
  else
  {
    v2 = v13 >= 0x3E8;
    v12 = v13 >= 0x3E8;
  }
  v5 = SHRegGetDWORD(
         HKEY_CLASSES_ROOT,
         L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.client.cb"
          "s_cw5n1h2txyewy\\Internet Explorer\\DOMStorage\\client.cbs",
         L"NumberOfSubdomains",
         &v13);
  if ( v5 < 0 )
  {
    if ( v5 != -2147024894 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x411,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
  else
  {
    v3 = v13 >= 0x3E8;
    v11 = v13 >= 0x3E8;
  }
  if ( v2 || v3 )
  {
    v9 = winrt::hstring::c_str((UndockedSearchAppExperienceManager *)((char *)this + 840));
    SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_NumberOfSubdomainsIssueDetected<unsigned short const *,unsigned int &,bool &,bool &>(
      (__int64 *)&v9,
      (int *)this + 219,
      (char *)&v12,
      (char *)&v11);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56811165>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56811165>::GetImpl'::`2'::impl) )
    {
      if ( v2 )
      {
        v6 = SHRegSetDWORD(
               HKEY_CLASSES_ROOT,
               L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.cli"
                "ent.cbs_cw5n1h2txyewy\\Internet Explorer\\DOMStorage\\bing.com",
               L"NumberOfSubdomains",
               1u);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x41B,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v6);
      }
      if ( v3 )
      {
        v7 = SHRegSetDWORD(
               HKEY_CLASSES_ROOT,
               L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.cli"
                "ent.cbs_cw5n1h2txyewy\\Internet Explorer\\DOMStorage\\client.cbs",
               L"NumberOfSubdomains",
               1u);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x41F,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v7);
      }
      ++*((_DWORD *)this + 219);
    }
  }
  return 0LL;
}
