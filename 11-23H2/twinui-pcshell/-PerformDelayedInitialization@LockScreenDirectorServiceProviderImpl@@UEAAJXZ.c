/*
 * XREFs of ?PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ @ 0x1800ACD00
 * Callers:
 *     <none>
 * Callees:
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x180040EF0 (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     ??1LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x1800ACCCC (--1LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockScreenService.c)
 *     ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800ACE38 (--$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD744 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B7174 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??0?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BA410 (--0-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?zInternalStart@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18016A164 (-zInternalStart@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18016A1D0 (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?get@?$static_lazy@VLockScreenServiceLogging@@@details@wil@@QEAAPEAVLockScreenServiceLogging@@P6AXXZ@Z @ 0x18016A288 (-get@-$static_lazy@VLockScreenServiceLogging@@@details@wil@@QEAAPEAVLockScreenServiceLogging@@P6.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LockScreenDirectorServiceProviderImpl::PerformDelayedInitialization(
        LockScreenDirectorServiceProviderImpl *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rbx
  int v4; // eax
  int started; // eax
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-E0h]
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[3]; // [rsp+31h] [rbp-CFh] BYREF
  DWORD CurrentThreadId; // [rsp+34h] [rbp-CCh] BYREF
  int v12[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v13[6]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+70h] [rbp-90h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v13);
  v13[0] = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity::`vftable';
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(v13);
  v3 = *(_DWORD **)(wil::details::static_lazy<LockScreenServiceLogging>::get(
                      v2,
                      _lambda_63f7170bce12b7e543c3c21ebfae390d_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v3 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    *(_QWORD *)v12 = 0LL;
    v4 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(v13);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (_DWORD)v3,
      (unsigned int)&unk_1808568B9,
      v14 + 8,
      v4,
      (__int64)v12,
      (__int64)&CurrentThreadId);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(v13);
  v9 = 0;
  v10[0] = 0;
  started = wil::wnf_query_nothrow<bool>(&WNF_SHEL_LOCK_ON_LOGON, &v9, v10);
  if ( started < 0 )
  {
    v7 = 41LL;
LABEL_10:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)started,
      v8);
    goto LABEL_5;
  }
  if ( v10[0] )
  {
    if ( v9 )
    {
      started = LockScreenDirectorServiceProviderImpl::StartDirectorThread((LockScreenDirectorServiceProviderImpl *)((char *)this - 48));
      if ( started < 0 )
      {
        v7 = 47LL;
        goto LABEL_10;
      }
    }
  }
LABEL_5:
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v13);
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity::~LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity *)v13);
  return 0LL;
}
