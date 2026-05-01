/*
 * XREFs of ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1800359E0
 * Callers:
 *     ?StartToFindInStartAnimationCompleted@XamlLauncherState@@UEAAXXZ @ 0x1801ADE70 (-StartToFindInStartAnimationCompleted@XamlLauncherState@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800A3750 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019759C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x1801ADAB0 (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x1801ADAEC (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     wil::details::ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___::_ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___ @ 0x1802D52A4 (wil--details--ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___--_ScopeExitFn__lambda_c58a.c)
 *     ??$?0$0BI@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BI@$$CBG@Z @ 0x1802D532C (--$-0$0BI@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BI@$$CBG@Z.c)
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1802E0344 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1802E77C4 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlLauncherState::OnCortanaTransitionRequested(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  HSTRING v12[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v13; // [rsp+30h] [rbp-40h] BYREF
  char v14; // [rsp+40h] [rbp-30h]
  _BYTE v15[32]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  LODWORD(v12[0]) = *((_DWORD *)this + 16);
  v12[1] = (HSTRING)this;
  v13 = *(_OWORD *)v12;
  v14 = 1;
  switch ( LODWORD(v12[0]) )
  {
    case 1:
      *((_DWORD *)this + 16) = 18;
      goto LABEL_26;
    case 2:
      *((_DWORD *)this + 16) = 19;
      goto LABEL_26;
    case 3:
      *((_DWORD *)this + 16) = 20;
      goto LABEL_26;
    case 4:
      *((_DWORD *)this + 16) = 21;
      goto LABEL_26;
    case 5:
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
      {
        v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
               (Microsoft::WRL::Wrappers::HStringReference *)v15,
               (const unsigned __int16 (*)[24])L"StartMode=AppTransition");
        v4 = XamlLauncherState::ShowSearchFromOpenStart(this, *(_QWORD *)(v9 + 24), 2LL);
        v5 = v4;
        if ( v4 < 0 )
        {
          v6 = 2827LL;
          goto LABEL_21;
        }
      }
      else
      {
        v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (Microsoft::WRL::Wrappers::HStringReference *)v15,
                (const unsigned __int16 (*)[24])L"StartMode=AppTransition");
        v4 = XamlLauncherState::ShowSearchFromOpenStart(this, *(_QWORD *)(v10 + 24), 1LL);
        v5 = v4;
        if ( v4 < 0 )
        {
          v6 = 2831LL;
          goto LABEL_21;
        }
      }
LABEL_26:
      v5 = 0;
      goto LABEL_27;
  }
  if ( LODWORD(v12[0]) != 7 )
  {
    if ( LODWORD(v12[0]) == 12 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_FindInStart>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_FindInStart>::GetImpl'::`2'::impl,
        0LL);
      v12[0] = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                              (Microsoft::WRL::Wrappers::HStringReference *)v15,
                              (const unsigned __int16 (*)[24])L"StartMode=AppTransition")
                          + 24);
      v4 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 135, v12);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 2848LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v4,
          (int)v12[0]);
        goto LABEL_27;
      }
    }
    goto LABEL_26;
  }
  v12[0] = 0LL;
  v7 = Microsoft::WRL::Wrappers::HString::Set(
         (Microsoft::WRL::Wrappers::HString *)v12,
         L"StartMode=AppTransition",
         0x17u);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v7 = XamlLauncherState::ShowSearch(this, v12[0]);
    v5 = v7;
    if ( v7 >= 0 )
    {
      ExperienceManagerUtils::CopyableHString::~CopyableHString((ExperienceManagerUtils::CopyableHString *)v12);
      goto LABEL_26;
    }
    v8 = 2819LL;
  }
  else
  {
    v8 = 2818LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v7,
    (int)v12[0]);
  ExperienceManagerUtils::CopyableHString::~CopyableHString((ExperienceManagerUtils::CopyableHString *)v12);
LABEL_27:
  wil::details::ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___::_ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___(&v13);
  return v5;
}
