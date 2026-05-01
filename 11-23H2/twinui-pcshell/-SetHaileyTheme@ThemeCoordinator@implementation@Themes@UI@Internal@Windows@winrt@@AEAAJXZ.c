/*
 * XREFs of ?SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x1806E3674
 * Callers:
 *     _lambda_c6ba9d0e3b7f29cae293d336d79dd692_::operator() @ 0x180258638 (_lambda_c6ba9d0e3b7f29cae293d336d79dd692_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetThemeId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA?AU_GUID@@PEAUIThemeManager2@@H@Z @ 0x1806E29B8 (-GetThemeId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA-AU_GUID@@PEAU.c)
 *     ?IsEduThemeWithType@EduThemeHelpers@@YA_NAEBU_GUID@@AEBW4EduThemeTypes@@@Z @ 0x1806E2E08 (-IsEduThemeWithType@EduThemeHelpers@@YA_NAEBU_GUID@@AEBW4EduThemeTypes@@@Z.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_EduDefaultThemeApplied@@@tip@@QEAA?AV?$test_watcher@U_tip_EduDefaultThemeApplied@@@2@XZ @ 0x1806E4C6C (-start_and_watch_errors@-$tip_test@U_tip_EduDefaultThemeApplied@@@tip@@QEAA-AV-$test_watcher@U_t.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::SetHaileyTheme(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this)
{
  HRESULT Instance; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v4; // rcx
  unsigned int v5; // edi
  const enum EduThemeTypes *v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  bool v9; // di
  __int64 v10; // rbx
  __int64 v11; // rax
  struct IThemeManager2 *ppv; // [rsp+48h] [rbp-29h] BYREF
  int v14; // [rsp+50h] [rbp-21h] BYREF
  int v15; // [rsp+54h] [rbp-1Dh] BYREF
  int v16; // [rsp+58h] [rbp-19h] BYREF
  struct _GUID v17; // [rsp+5Ch] [rbp-15h] BYREF
  __int64 v18; // [rsp+98h] [rbp+27h] BYREF
  struct _GUID v19; // [rsp+A8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  ppv = 0LL;
  Instance = CoCreateInstance(&CLSID_ThemeManager2, 0LL, 1u, &GUID_c1e8c83e_845d_4d95_81db_e283fdffc000, (LPVOID *)&ppv);
  v2 = Instance;
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(struct IThemeManager2 *))(*(_QWORD *)ppv + 40LL))(ppv);
    v2 = Instance;
    if ( Instance < 0 )
    {
      v3 = 144LL;
      goto LABEL_12;
    }
    Instance = (*(__int64 (__fastcall **)(struct IThemeManager2 *, int *))(*(_QWORD *)ppv + 88LL))(ppv, &v14);
    v2 = Instance;
    if ( Instance < 0 )
    {
      v3 = 147LL;
      goto LABEL_12;
    }
    Instance = (*(__int64 (__fastcall **)(struct IThemeManager2 *, int *))(*(_QWORD *)ppv + 112LL))(ppv, &v16);
    v2 = Instance;
    if ( Instance < 0 )
    {
      v3 = 149LL;
      goto LABEL_12;
    }
    if ( v14 == v16 )
    {
      Instance = (*(__int64 (__fastcall **)(struct IThemeManager2 *, int *))(*(_QWORD *)ppv + 64LL))(ppv, &v15);
      v2 = Instance;
      if ( Instance < 0 )
      {
        v3 = 155LL;
        goto LABEL_12;
      }
      v5 = 0;
      if ( v15 > 0 )
      {
        v17.Data1 = 8;
        while ( 1 )
        {
          winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetThemeId(v4, &v19, ppv, v5);
          if ( EduThemeHelpers::IsEduThemeWithType(&v19, &v17, v6) )
            break;
          if ( (int)++v5 >= v15 )
            goto LABEL_31;
        }
        if ( v5 != -1 )
        {
          v19 = 0LL;
          tip::tip_test<_tip_EduDefaultThemeApplied>::start_and_watch_errors(&v19, &v17.Data4[4]);
          tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v19);
          v7 = (*(__int64 (__fastcall **)(struct IThemeManager2 *, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(*(_QWORD *)ppv + 96LL))(
                 ppv,
                 0LL,
                 v5,
                 1LL,
                 0,
                 0);
          v2 = v7;
          if ( v7 < 0 )
          {
            v8 = 171LL;
LABEL_23:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v8,
              (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
              (const char *)(unsigned int)v7);
            tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)&v17.Data4[4]);
            goto LABEL_32;
          }
          v7 = (*(__int64 (__fastcall **)(struct IThemeManager2 *, int *))(*(_QWORD *)ppv + 88LL))(ppv, &v14);
          v2 = v7;
          if ( v7 < 0 )
          {
            v8 = 173LL;
            goto LABEL_23;
          }
          v9 = v14 == v5;
          std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
            &v19,
            &v18);
          v10 = *(_QWORD *)&v19.Data1;
          tip::details::test_common_data<1>::begin_update(*(_QWORD *)&v19.Data1 + 8LL);
          v11 = v10 + 184;
          if ( !v10 )
            v11 = 8LL;
          *(_BYTE *)v11 = v9;
          if ( v10 )
          {
            tip::details::test_common_data<1>::end_update(v10 + 8);
            std::shared_ptr<PeoplePaneViewInfo>::reset(&v19);
          }
          if ( *(_QWORD *)v19.Data4 )
            std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)v19.Data4);
          tip::details::test_common_data<1>::complete(v18 + 8);
          tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)&v17.Data4[4]);
        }
      }
    }
LABEL_31:
    v2 = 0;
    goto LABEL_32;
  }
  v3 = 142LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
    (const char *)(unsigned int)Instance);
LABEL_32:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  return v2;
}
