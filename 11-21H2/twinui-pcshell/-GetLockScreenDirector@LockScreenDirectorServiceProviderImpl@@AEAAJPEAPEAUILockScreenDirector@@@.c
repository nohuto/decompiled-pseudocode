/*
 * XREFs of ?GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x180053240
 * Callers:
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1800530A0 (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 * Callees:
 *     ??1LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x180053324 (--1LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemet.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x180053350 (-StartActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenSe.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180072794 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C847C (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C97B4 (--0-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::GetLockScreenDirector(
        RTL_SRWLOCK *this,
        struct ILockScreenDirector **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7[4]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v8[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v8,
    "LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity");
  v8[0] = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity::`vftable';
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity::StartActivity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity *)v8);
  *a2 = 0LL;
  AcquireSRWLockShared(this + 18);
  *(_QWORD *)v7 = this + 18;
  if ( this[19].Ptr
    && (v4 = AgileGitPtr::CopyLocal((AgileGitPtr *)&this[19], &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb, (void **)a2),
        v5 = v4,
        v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F,
      (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v4,
      v7[0]);
  }
  else
  {
    wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v8);
    v5 = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v7);
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity::~LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity *)v8);
  return v5;
}
