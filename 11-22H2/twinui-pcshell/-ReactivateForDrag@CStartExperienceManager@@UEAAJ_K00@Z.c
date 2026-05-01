/*
 * XREFs of ?ReactivateForDrag@CStartExperienceManager@@UEAAJ_K00@Z @ 0x1804459B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18001B048 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$SetValue@_K@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ_KPEAPEAUIInspectable@@@Z1@Z @ 0x180065F84 (--$SetValue@_K@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ??$ActivateInstance@UIPropertySet@Collections@Foundation@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@01@@Z @ 0x1800979B0 (--$ActivateInstance@UIPropertySet@Collections@Foundation@Windows@@@Foundation@Windows@@YAJPEAUHS.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?ReportReactivatingForDrag@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K00@Z @ 0x1801E2C94 (-ReportReactivatingForDrag@-$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartContro.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ @ 0x1801E3294 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CStartExperienceManager::ReactivateForDrag(
        CStartExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // r8d
  HSTRING_HEADER *v12; // rax
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  HSTRING_HEADER *v17; // rax
  __int64 v18; // r8
  unsigned int v19; // r8d
  HSTRING_HEADER *v20; // rax
  __int64 v21; // r8
  unsigned int v22; // r8d
  HSTRING v23; // rbx
  HSTRING_HEADER *v24; // rax
  HSTRING v26; // [rsp+40h] [rbp-19h] BYREF
  HSTRING v27; // [rsp+48h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-9h] BYREF
  __int64 v29; // [rsp+68h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_49402389>::GetImpl'::`2'::impl) )
  {
    if ( wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool((_QWORD *)this + 68) )
      winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController>::ReportReactivatingForDrag(
        v8,
        a2,
        a3,
        a4);
    return 0LL;
  }
  if ( *((_QWORD *)this + 38) )
  {
    v27 = 0LL;
    v29 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v9 = Windows::Foundation::ActivateInstance<Windows::Foundation::Collections::IPropertySet>(v29, &v27);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x483,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_16:
      wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)&v27);
      return v10;
    }
    v26 = v27;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1807CBFF8,
            v11);
    v14 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
            (HSTRING)v12[1].Reserved.Reserved1,
            v13,
            a2);
    v10 = v14;
    if ( v14 < 0 )
    {
      v16 = 1157LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&v26);
      goto LABEL_16;
    }
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1807CC008,
            v15);
    v14 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
            (HSTRING)v17[1].Reserved.Reserved1,
            v18,
            a3);
    v10 = v14;
    if ( v14 < 0 )
    {
      v16 = 1158LL;
      goto LABEL_15;
    }
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1807CC010,
            v19);
    v14 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
            (HSTRING)v20[1].Reserved.Reserved1,
            v21,
            a4);
    v10 = v14;
    if ( v14 < 0 )
    {
      v16 = 1159LL;
      goto LABEL_15;
    }
    v23 = v27;
    v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1807CC048,
            v22);
    v14 = ExperienceManagerUtils::RaiseReactivatedEvent(
            *((ExperienceManagerUtils **)this + 38),
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 102),
            *((HSTRING *)this + 36),
            *((HSTRING *)this + 37),
            (HSTRING)v24[1].Reserved.Reserved1,
            v23);
    v10 = v14;
    if ( v14 < 0 )
    {
      v16 = 1160LL;
      goto LABEL_15;
    }
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&v26);
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)&v27);
  }
  return 0LL;
}
