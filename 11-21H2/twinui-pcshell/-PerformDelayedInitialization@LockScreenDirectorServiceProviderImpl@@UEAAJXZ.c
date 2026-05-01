/*
 * XREFs of ?PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ @ 0x1800C96E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x18001E7B8 (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x1800C8334 (-StartActivity@LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockS.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C847C (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??1LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x1800C9788 (--1LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockScreenService.c)
 *     ??0?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C97B4 (--0-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800C990C (--$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::PerformDelayedInitialization(
        LockScreenDirectorServiceProviderImpl *this)
{
  __int64 v2; // rcx
  int started; // eax
  unsigned int v4; // edx
  __int64 v6; // rdx
  int v7[4]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v8[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v8,
    "LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity");
  v8[0] = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity::`vftable';
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity::StartActivity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity *)v8);
  LOWORD(v7[0]) = 0;
  started = wil::wnf_query_nothrow<bool>(v2, v7, (char *)v7 + 1);
  if ( started < 0 )
  {
    v6 = 41LL;
LABEL_8:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)started);
    goto LABEL_3;
  }
  if ( BYTE1(v7[0]) )
  {
    if ( LOBYTE(v7[0]) )
    {
      started = LockScreenDirectorServiceProviderImpl::StartDirectorThread((LockScreenDirectorServiceProviderImpl *)((char *)this - 48));
      if ( started < 0 )
      {
        v6 = 47LL;
        goto LABEL_8;
      }
    }
  }
LABEL_3:
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v8, v4);
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity::~LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity *)v8);
  return 0LL;
}
