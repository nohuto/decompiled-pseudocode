/*
 * XREFs of ?SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180051EEC
 * Callers:
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x1800B9B4C (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18046984C (-OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@1@XZ @ 0x180086CE8 (--C-$tip_test@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data_c.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180091F98 (--1-$test_data_control@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1800B9DA4 (--B-$tip_test@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@de.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_44667252@@@details@wil@@QEAA_NXZ @ 0x18011400C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_44667252@@@details@wil@@QEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UndockedSearchAppExperienceManager_SuspensionEnabled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x180190C6C (-UndockedSearchAppExperienceManager_SuspensionEnabled@SearchAppExperienceManagerTelemetry@@SAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x18046AD4C (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 */

void __fastcall UndockedSearchAppExperienceManager::SuspendAppInternal(UndockedSearchAppExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  int v8; // [rsp+40h] [rbp+20h] BYREF
  char v9; // [rsp+48h] [rbp+28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 12) + 32LL))(
         *((_QWORD *)this + 12),
         *((_QWORD *)this + 8)) )
  {
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::operator bool((char *)this + 864) )
    {
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator->(
                              (char *)this + 864,
                              &v8)
               + 292LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(&v8);
    }
  }
  else
  {
    v2 = *((_QWORD *)this + 8);
    if ( v2 )
    {
      v8 = 3;
      v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 352LL))(v2, &v8);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7FE,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v3,
          savedregs);
      if ( v8 == 3 )
      {
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SuspensionEnabled();
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 344LL))(*((_QWORD *)this + 8), 1LL);
        v5 = v4;
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x803,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v4,
            savedregs);
        if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::operator bool((char *)this + 864) )
        {
          *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator->(
                                  (char *)this + 864,
                                  &v9)
                   + 266LL) = v5 >= 0;
          tip2::test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(&v9);
        }
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_44667252>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_44667252>::GetImpl'::`2'::impl) )
          UndockedSearchAppExperienceManager::TryInstallDefaultWebSearchProvider(this, 2LL);
      }
      else if ( v8 == 5
             && (unsigned __int8)tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::operator bool((char *)this + 864) )
      {
        *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator->(
                                (char *)this + 864,
                                &v9)
                 + 293LL) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(&v9);
      }
      if ( v8 == 1 )
      {
        if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::operator bool((char *)this + 864) )
        {
          *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator->(
                                  (char *)this + 864,
                                  &v9)
                   + 294LL) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(&v9);
          *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator->(
                                  (char *)this + 864,
                                  &v9)
                   + 266LL) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(&v9);
        }
      }
    }
    *((_DWORD *)this + 184) = 6;
  }
}
