/*
 * XREFs of ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180438FA8
 * Callers:
 *     ?HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180436390 (-HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Window.c)
 *     ?OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ @ 0x1804386A4 (-OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ.c)
 *     wil::details::functor_wrapper_void__lambda_93cac9cad1f570776af354fa4b60c55e__&_::Run @ 0x180439A50 (wil--details--functor_wrapper_void__lambda_93cac9cad1f570776af354fa4b60c55e__-_--Run.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18001B048 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180056A4C (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056D78 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800DD81C (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800EDA34 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1804355A0 (--1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?EventRaised@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180435F4C (-EventRaised@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?NoOp_ApplicationNotRunning@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180436F18 (-NoOp_ApplicationNotRunning@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXPEBG_N@Z @ 0x18043A098 (-StartActivity@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXPEBG_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CToastCenterExperienceManager::RaisePropertyChangedEvent(
        CToastCenterExperienceManager *this,
        const unsigned __int16 *a2,
        char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // r8d
  HSTRING_HEADER *v9; // rax
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rdx
  HSTRING v14; // rbx
  HSTRING_HEADER *v15; // rax
  HSTRING v17; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v18; // [rsp+48h] [rbp-B8h] BYREF
  const WCHAR *v19; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h]
  _QWORD v22[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v19 = a2;
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v22,
    (__int64)"EM_RaiseApplicationEventActivity");
  v22[0] = &ToastCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  ToastCenterTelemetry::EM_RaiseApplicationEventActivity::StartActivity(
    (ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)v22,
    a2,
    a3);
  if ( !*((_QWORD *)this + 16) )
  {
    ToastCenterTelemetry::EM_RaiseApplicationEventActivity::NoOp_ApplicationNotRunning((ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)v22);
    goto LABEL_12;
  }
  v17 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v21,
         (__int64 *)&v17);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v18 = v17;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v19, v8);
    v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v18,
            (HSTRING)v9[1].Reserved.Reserved1,
            v10,
            a3);
    v7 = v11;
    if ( v11 < 0 )
    {
      v13 = 806LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
      goto LABEL_9;
    }
    v14 = v17;
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_1807F4368,
            v12);
    v11 = ExperienceManagerUtils::RaiseReactivatedEvent(
            *((ExperienceManagerUtils **)this + 16),
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 58),
            *((HSTRING *)this + 14),
            *((HSTRING *)this + 15),
            (HSTRING)v15[1].Reserved.Reserved1,
            v14);
    v7 = v11;
    if ( v11 < 0 )
    {
      v13 = 807LL;
      goto LABEL_8;
    }
    ToastCenterTelemetry::EM_RaiseApplicationEventActivity::EventRaised((ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)v22);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
LABEL_12:
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v22, 0);
    v7 = 0;
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x323,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
LABEL_13:
  ToastCenterTelemetry::EM_RaiseApplicationEventActivity::~EM_RaiseApplicationEventActivity((ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)v22);
  return v7;
}
