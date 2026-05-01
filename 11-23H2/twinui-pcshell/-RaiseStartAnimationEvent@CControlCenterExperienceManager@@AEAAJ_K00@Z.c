/*
 * XREFs of ?RaiseStartAnimationEvent@CControlCenterExperienceManager@@AEAAJ_K00@Z @ 0x1804227D0
 * Callers:
 *     CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x1801DE790 (CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     ?OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180421450 (-OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18001B048 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@_K@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ_KPEAPEAUIInspectable@@@Z1@Z @ 0x180065F84 (--$SetValue@_K@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800EDA34 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18041D7F8 (--0-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DFE8 (--1EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?EventRaised@EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x18041EC8C (-EventRaised@EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@Q.c)
 *     ?NoOp_ApplicationNotRunning@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x18041FEF4 (-NoOp_ApplicationNotRunning@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCe.c)
 *     ?StartActivity@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAX_K00@Z @ 0x180423E20 (-StartActivity@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemet.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804242B0 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CControlCenterExperienceManager::RaiseStartAnimationEvent(
        CControlCenterExperienceManager *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r8d
  HSTRING_HEADER *v11; // rax
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  HSTRING_HEADER *v16; // rax
  __int64 v17; // r8
  unsigned int v18; // r8d
  HSTRING_HEADER *v19; // rax
  __int64 v20; // r8
  unsigned int v21; // r8d
  HSTRING v22; // rbx
  HSTRING_HEADER *v23; // rax
  HSTRING v25; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v26; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  _QWORD v29[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v29,
    (__int64)"EM_RaiseStartAnimationEventActivity");
  v29[0] = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity::StartActivity(
    (ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity *)v29,
    a2,
    a4,
    a3);
  if ( !*((_QWORD *)this + 18) )
  {
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity::NoOp_ApplicationNotRunning((ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity *)v29);
    goto LABEL_16;
  }
  v26 = 0LL;
  v28 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v8 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v28,
         (__int64 *)&v26);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v25 = v26;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1807F4280,
            v10);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v25,
            (HSTRING)v11[1].Reserved.Reserved1,
            v12,
            a2);
    v9 = v13;
    if ( v13 < 0 )
    {
      v15 = 1008LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
      goto LABEL_13;
    }
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1807F42A8,
            v14);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v25,
            (HSTRING)v16[1].Reserved.Reserved1,
            v17,
            a3);
    v9 = v13;
    if ( v13 < 0 )
    {
      v15 = 1009LL;
      goto LABEL_12;
    }
    v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1807F42B0,
            v18);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v25,
            (HSTRING)v19[1].Reserved.Reserved1,
            v20,
            a4);
    v9 = v13;
    if ( v13 < 0 )
    {
      v15 = 1010LL;
      goto LABEL_12;
    }
    v22 = v26;
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1807F4278,
            v21);
    v13 = ExperienceManagerUtils::RaiseReactivatedEvent(
            *((ExperienceManagerUtils **)this + 18),
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 62),
            *((HSTRING *)this + 16),
            *((HSTRING *)this + 17),
            (HSTRING)v23[1].Reserved.Reserved1,
            v22);
    v9 = v13;
    if ( v13 < 0 )
    {
      v15 = 1011LL;
      goto LABEL_12;
    }
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseApplicationEventActivity::EventRaised((ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseApplicationEventActivity *)v29);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
LABEL_16:
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v29, 0LL);
    *((_QWORD *)this + 98) = 0LL;
    *((_QWORD *)this + 99) = 0LL;
    *((_QWORD *)this + 100) = 0LL;
    v9 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3ED,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_13:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
LABEL_17:
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity::~EM_RaiseStartAnimationEventActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity *)v29);
  return v9;
}
