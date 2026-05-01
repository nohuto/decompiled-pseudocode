/*
 * XREFs of ?RaiseStartAnimationEvent@CActionCenterExperienceManager@@AEAAJ_K00@Z @ 0x180018828
 * Callers:
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180018540 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x1801DC300 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??1EM_RaiseStartAnimationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1800187FC (--1EM_RaiseStartAnimationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180019CA8 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180019F64 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18001B048 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?StartActivity@EM_RaiseStartAnimationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAX_K00@Z @ 0x18001BCEC (-StartActivity@EM_RaiseStartAnimationEventActivity@NotificationCenterTelemetry@NotificationCente.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@_K@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ_KPEAPEAUIInspectable@@@Z1@Z @ 0x180065F84 (--$SetValue@_K@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?EventRaised@EM_RaiseStartAnimationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18006968C (-EventRaised@EM_RaiseStartAnimationEventActivity@NotificationCenterTelemetry@NotificationCenterU.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800EDA34 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?NoOp_ApplicationNotRunning@EM_RaiseStartAnimationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1804191FC (-NoOp_ApplicationNotRunning@EM_RaiseStartAnimationEventActivity@NotificationCenterTelemetry@Noti.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CActionCenterExperienceManager::RaiseStartAnimationEvent(
        CActionCenterExperienceManager *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  HSTRING v14; // rbx
  __int64 v15; // rax
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-E0h]
  struct Windows::Foundation::Collections::IPropertySet *v19; // [rsp+30h] [rbp-D0h]
  struct Windows::Foundation::Collections::IPropertySet *v20; // [rsp+38h] [rbp-C8h]
  HSTRING v21; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v22; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h]
  _QWORD v25[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v25);
  v25[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseStartAnimationEventActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseStartAnimationEventActivity::StartActivity(
    (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseStartAnimationEventActivity *)v25,
    a2,
    a4,
    a3);
  if ( !*((_QWORD *)this + 19) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseStartAnimationEventActivity::NoOp_ApplicationNotRunning((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseStartAnimationEventActivity *)v25);
    goto LABEL_8;
  }
  v22 = 0LL;
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v8 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v24,
         &v22);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2ED,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v8,
      v18);
LABEL_16:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    goto LABEL_9;
  }
  v21 = v22;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_1807A43D0);
  v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
          *(HSTRING *)(v10 + 24));
  v9 = v11;
  if ( v11 < 0 )
  {
    v17 = 752LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v11,
      v18);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
    goto LABEL_16;
  }
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_1807A43E0);
  v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
          *(HSTRING *)(v12 + 24));
  v9 = v11;
  if ( v11 < 0 )
  {
    v17 = 753LL;
    goto LABEL_15;
  }
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_1807A43D8);
  v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
          *(HSTRING *)(v13 + 24));
  v9 = v11;
  if ( v11 < 0 )
  {
    v17 = 754LL;
    goto LABEL_15;
  }
  v14 = v22;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_1807A43E8);
  v11 = ExperienceManagerUtils::RaiseReactivatedEvent(
          *((ExperienceManagerUtils **)this + 19),
          (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 64),
          *((_QWORD *)this + 17),
          *((HSTRING *)this + 18),
          *(HSTRING *)(v15 + 24),
          v14,
          v19,
          v20);
  v9 = v11;
  if ( v11 < 0 )
  {
    v17 = 755LL;
    goto LABEL_15;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseStartAnimationEventActivity::EventRaised((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseStartAnimationEventActivity *)v25);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
LABEL_8:
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v25, 0LL);
  v9 = 0;
LABEL_9:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseStartAnimationEventActivity::~EM_RaiseStartAnimationEventActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseStartAnimationEventActivity *)v25);
  return v9;
}
