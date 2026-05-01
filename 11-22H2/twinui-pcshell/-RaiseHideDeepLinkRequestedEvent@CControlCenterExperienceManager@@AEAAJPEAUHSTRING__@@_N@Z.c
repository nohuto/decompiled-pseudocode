/*
 * XREFs of ?RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z @ 0x180422018
 * Callers:
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x180071C60 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18001B048 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800DD81C (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800EDA34 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x18041C464 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??0?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18041D7F8 (--0-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DF90 (--1EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@Q.c)
 *     ?EventRaised@EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x18041EC8C (-EventRaised@EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@Q.c)
 *     ?NoOp_ApplicationNotRunning@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x18041FEF4 (-NoOp_ApplicationNotRunning@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCe.c)
 *     ?StartActivity@EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXPEBG_N@Z @ 0x180423C24 (-StartActivity@EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUI.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804242B0 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CControlCenterExperienceManager::RaiseHideDeepLinkRequestedEvent(
        CControlCenterExperienceManager *this,
        HSTRING a2,
        char a3)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // r8d
  HSTRING_HEADER *v9; // rax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // r8
  int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rdx
  HSTRING_HEADER *v14; // rax
  __int64 v15; // r8
  unsigned int v16; // r8d
  HSTRING v17; // rbx
  HSTRING_HEADER *v18; // rax
  HSTRING v20; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v21; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h]
  _QWORD v24[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v24,
    (__int64)"EM_RaiseHideDeepLinkRequestedEventActivity");
  v24[0] = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseHideDeepLinkRequestedEventActivity::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseHideDeepLinkRequestedEventActivity::StartActivity(
    (ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseHideDeepLinkRequestedEventActivity *)v24,
    StringRawBuffer,
    a3);
  if ( !*((_QWORD *)this + 18) )
  {
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity::NoOp_ApplicationNotRunning((ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity *)v24);
    goto LABEL_14;
  }
  v21 = 0LL;
  v23 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v23,
         (__int64 *)&v21);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v20 = v21;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_1807F4288, v8);
    v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
            (HSTRING)v9[1].Reserved.Reserved1,
            v10);
    v7 = v11;
    if ( v11 < 0 )
    {
      v13 = 982LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
      goto LABEL_11;
    }
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1807F4290,
            v12);
    v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
            (HSTRING)v14[1].Reserved.Reserved1,
            v15,
            a3);
    v7 = v11;
    if ( v11 < 0 )
    {
      v13 = 983LL;
      goto LABEL_10;
    }
    v17 = v21;
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1807F4268,
            v16);
    v11 = ExperienceManagerUtils::RaiseReactivatedEvent(
            *((ExperienceManagerUtils **)this + 18),
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 62),
            *((HSTRING *)this + 16),
            *((HSTRING *)this + 17),
            (HSTRING)v18[1].Reserved.Reserved1,
            v17);
    v7 = v11;
    if ( v11 < 0 )
    {
      v13 = 985LL;
      goto LABEL_10;
    }
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseApplicationEventActivity::EventRaised((ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseApplicationEventActivity *)v24);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
LABEL_14:
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v24, 0LL);
    v7 = 0;
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3D3,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
LABEL_15:
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseHideDeepLinkRequestedEventActivity::~EM_RaiseHideDeepLinkRequestedEventActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseHideDeepLinkRequestedEventActivity *)v24);
  return v7;
}
