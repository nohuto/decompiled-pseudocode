/*
 * XREFs of ?Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x1801AC7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x180112920 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     ?UndockedSearchAppExperienceManager_PrelaunchRequested@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1801AC8D0 (-UndockedSearchAppExperienceManager_PrelaunchRequested@SearchAppExperienceManagerTelemetry@@SAXX.c)
 *     ?MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1801EDB50 (-MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1801F0644 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@QEAA_NW4R.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$UndockedSearchAppExperienceManager_PrelaunchSkipped@AEB_N@SearchAppExperienceManagerTelemetry@@SAXAEB_N@Z @ 0x180462150 (--$UndockedSearchAppExperienceManager_PrelaunchSkipped@AEB_N@SearchAppExperienceManagerTelemetry.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UndockedSearchAppExperienceManager::Prelaunch(
        UndockedSearchAppExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // eax
  const char *v6; // r9
  UndockedSearchAppExperienceManager *v7; // rcx
  int v8; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v11; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    v5 = *((_DWORD *)this + 184);
    if ( !v5 || v5 == 12 )
    {
      SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PrelaunchRequested();
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56936253>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56936253>::GetImpl'::`2'::impl) )
      {
        v8 = UndockedSearchAppExperienceManager::MitigateSpartanSubDomains(v7);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x432,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v8);
      }
      winrt::hstring::hstring((winrt::hstring *)&v11, L"Hidden");
      UndockedSearchAppExperienceManager::ActivateAppAsync(
        (__int64)this,
        1,
        2,
        (winrt::hstring *)&v11,
        0,
        (unsigned __int16 *)&LocaleName);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
    }
    else
    {
      SetExistingEvent(L"ShellSearchReadyEvent");
      LOBYTE(v11) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 12) + 48LL))(
                      *((_QWORD *)this + 12),
                      *((_QWORD *)this + 8));
      SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PrelaunchSkipped<bool const &>(&v11);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x444,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
                           v6);
  }
  return result;
}
