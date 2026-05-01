/*
 * XREFs of ?RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z @ 0x18042229C
 * Callers:
 *     ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x18041F6D8 (-HideExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18001B048 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@_K@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ_KPEAPEAUIInspectable@@@Z1@Z @ 0x180065F84 (--$SetValue@_K@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800DD81C (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800EDA34 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18041D7F8 (--0-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1EM_RaiseHideExperienceRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DFBC (--1EM_RaiseHideExperienceRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@.c)
 *     ?EventRaised@EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x18041EC8C (-EventRaised@EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@Q.c)
 *     ?NoOp_ApplicationNotRunning@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x18041FEF4 (-NoOp_ApplicationNotRunning@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCe.c)
 *     ?StartActivity@EM_RaiseHideExperienceRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAX_N_K11@Z @ 0x180423CE0 (-StartActivity@EM_RaiseHideExperienceRequestedEventActivity@ControlCenterTelemetry@ControlCenter.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804242B0 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CControlCenterExperienceManager::RaiseHideExperienceRequestedEvent(
        CControlCenterExperienceManager *this,
        char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // rdx
  HSTRING_HEADER *v12; // rax
  __int64 v13; // r8
  unsigned int v14; // r8d
  HSTRING_HEADER *v15; // rax
  __int64 v16; // r8
  unsigned int v17; // r8d
  HSTRING_HEADER *v18; // rax
  __int64 v19; // r8
  unsigned int v20; // r8d
  HSTRING v21; // rbx
  HSTRING_HEADER *v22; // rax
  HSTRING v24; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v25; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h]
  _QWORD v28[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v28,
    (__int64)"EM_RaiseHideExperienceRequestedEventActivity");
  v28[0] = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseHideExperienceRequestedEventActivity::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseHideExperienceRequestedEventActivity::StartActivity(
    (ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseHideExperienceRequestedEventActivity *)v28,
    a2,
    0LL,
    0LL,
    0LL);
  if ( !*((_QWORD *)this + 18) )
  {
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity::NoOp_ApplicationNotRunning((ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity *)v28);
    goto LABEL_18;
  }
  v25 = 0LL;
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v4 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v27,
         (__int64 *)&v25);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v24 = v25;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_1807F4290, v6);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v24,
           (HSTRING)v7[1].Reserved.Reserved1,
           v8,
           a2);
    v5 = v9;
    if ( v9 < 0 )
    {
      v11 = 954LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
      goto LABEL_15;
    }
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1807F4280,
            v10);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v24,
           (HSTRING)v12[1].Reserved.Reserved1,
           v13,
           0LL);
    v5 = v9;
    if ( v9 < 0 )
    {
      v11 = 955LL;
      goto LABEL_14;
    }
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1807F42A8,
            v14);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v24,
           (HSTRING)v15[1].Reserved.Reserved1,
           v16,
           0LL);
    v5 = v9;
    if ( v9 < 0 )
    {
      v11 = 956LL;
      goto LABEL_14;
    }
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1807F42B0,
            v17);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v24,
           (HSTRING)v18[1].Reserved.Reserved1,
           v19,
           0LL);
    v5 = v9;
    if ( v9 < 0 )
    {
      v11 = 957LL;
      goto LABEL_14;
    }
    v21 = v25;
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1807F4270,
            v20);
    v9 = ExperienceManagerUtils::RaiseReactivatedEvent(
           *((ExperienceManagerUtils **)this + 18),
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 62),
           *((HSTRING *)this + 16),
           *((HSTRING *)this + 17),
           (HSTRING)v22[1].Reserved.Reserved1,
           v21);
    v5 = v9;
    if ( v9 < 0 )
    {
      v11 = 958LL;
      goto LABEL_14;
    }
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseApplicationEventActivity::EventRaised((ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseApplicationEventActivity *)v28);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
LABEL_18:
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v28, 0LL);
    v5 = 0;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B7,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_15:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
LABEL_19:
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseHideExperienceRequestedEventActivity::~EM_RaiseHideExperienceRequestedEventActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseHideExperienceRequestedEventActivity *)v28);
  return v5;
}
