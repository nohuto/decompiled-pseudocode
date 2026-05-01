/*
 * XREFs of _lambda_527ad20aa16d56b88e42a79a9a93120f_::operator() @ 0x180435784
 * Callers:
 *     ?RaiseToastPeekRegionClickedEvent@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804391D8 (-RaiseToastPeekRegionClickedEvent@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18001B048 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180056A4C (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056D78 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1804355A0 (--1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?EventRaised@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180435F4C (-EventRaised@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?NoOp_ApplicationNotRunning@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180436F18 (-NoOp_ApplicationNotRunning@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXPEBG_N@Z @ 0x18043A098 (-StartActivity@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXPEBG_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_527ad20aa16d56b88e42a79a9a93120f_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r8d
  HSTRING_HEADER *v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  HSTRING_HEADER v7; // [rsp+40h] [rbp-178h] BYREF
  _QWORD v8[40]; // [rsp+60h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v1 = *a1;
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v8,
    (__int64)"EM_RaiseApplicationEventActivity");
  v8[0] = &ToastCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  ToastCenterTelemetry::EM_RaiseApplicationEventActivity::StartActivity(
    (ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)v8,
    L"ToastPeekRegionClicked",
    1);
  if ( !*(_QWORD *)(v1 + 128) )
  {
    ToastCenterTelemetry::EM_RaiseApplicationEventActivity::NoOp_ApplicationNotRunning((ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)v8);
    goto LABEL_6;
  }
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v7, (const WCHAR **)&off_1807CBFD8, v2);
  v4 = ExperienceManagerUtils::RaiseReactivatedEvent(
         *(ExperienceManagerUtils **)(v1 + 128),
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*(unsigned int *)(v1 + 232),
         *(HSTRING *)(v1 + 112),
         *(HSTRING *)(v1 + 120),
         (HSTRING)v3[1].Reserved.Reserved1,
         0LL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    ToastCenterTelemetry::EM_RaiseApplicationEventActivity::EventRaised((ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)v8);
LABEL_6:
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v8, 0);
    v5 = 0;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33E,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  ToastCenterTelemetry::EM_RaiseApplicationEventActivity::~EM_RaiseApplicationEventActivity((ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)v8);
  return v5;
}
