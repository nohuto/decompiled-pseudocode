/*
 * XREFs of ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1800B3444
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_763cec3dac0cff81e03ecbc4f147f2fe___ @ 0x1800553D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_763cec3dac0cff81e03ecbc4f147f2fe___.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1800B0B84 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ?PrelaunchActivated@?$consume_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs@UIPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B35F8 (-PrelaunchActivated@-$consume_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs@U.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800B52B4 (--$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienc.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     ?DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1801EACB8 (-DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@QEAA_NXZ @ 0x1801F0684 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UndockedSearchAppExperienceManager::ActivateSearch(
        UndockedSearchAppExperienceManager *this,
        const struct winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs *a2,
        char a3)
{
  const struct winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs *v4; // r14
  int v6; // eax
  __int64 (__fastcall ***v7)(_QWORD, __int64 *, __int64 ***); // rcx
  __int64 *v8; // rbx
  int v9; // eax
  char v10; // r15
  __int64 *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 **v16; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v17[8]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 *v21; // [rsp+88h] [rbp+38h] BYREF

  v4 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    a2);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56936253>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56936253>::GetImpl'::`2'::impl) )
  {
    v6 = UndockedSearchAppExperienceManager::DetectAndMitigateSpartanSubdomainIssue(this);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA6B,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v6,
        (int)v16);
  }
  v7 = *(__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 ***))v4;
  if ( *(_QWORD *)v4 )
  {
    v16 = 0LL;
    v9 = (**v7)(
           v7,
           &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>,
           &v16);
    if ( v9 < 0 )
      winrt::throw_hresult((unsigned int)v9);
    v8 = (__int64 *)v16;
    v21 = (__int64 *)v16;
  }
  else
  {
    v21 = 0LL;
    v8 = 0LL;
  }
  v10 = winrt::impl::consume_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::PrelaunchActivated(&v21);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
  if ( v10 || !a3 )
  {
    UndockedSearchAppExperienceManager::Activate(this, v4);
  }
  else
  {
    v21 = 0LL;
    v16 = &v21;
    v11 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v16);
    v12 = Microsoft::WRL::AsWeak<UndockedSearchAppExperienceManager>(this, v11);
    if ( v12 < 0 )
      winrt::throw_hresult((unsigned int)v12);
    v17[0] = a3;
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
      &v18,
      v4);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v19, &v21);
    v19[1] = (__int64)this;
    v15 = Windows::Internal::ComTaskPool::QueueTask__lambda_763cec3dac0cff81e03ecbc4f147f2fe___(
            v14,
            v13,
            *((_DWORD *)this + 40),
            (__int64)v17);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v19);
    if ( v18 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA84,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v15,
        (int)v16);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  }
}
