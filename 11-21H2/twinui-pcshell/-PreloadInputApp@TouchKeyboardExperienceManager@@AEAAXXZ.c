/*
 * XREFs of ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18046402C
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BEF4C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___ @ 0x1801AEFA0 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___.c)
 *     _lambda_2f79d86dba88adc4f3637a9ed70ae0ec_::__lambda_2f79d86dba88adc4f3637a9ed70ae0ec_ @ 0x1801AF3A8 (_lambda_2f79d86dba88adc4f3637a9ed70ae0ec_--__lambda_2f79d86dba88adc4f3637a9ed70ae0ec_.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18022DEFE (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18022DEFE.c)
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AFB0 (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180465A2C (-StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::PreloadInputApp(TouchKeyboardExperienceManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // r8
  int v5; // ebx
  int v6[2]; // [rsp+20h] [rbp-2A8h] BYREF
  TouchKeyboardExperienceManager *v7; // [rsp+160h] [rbp-168h] BYREF
  const int *v8; // [rsp+168h] [rbp-160h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v6,
    (__int64)"OnPreloadInputAppActivity");
  *(_QWORD *)v6 = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v6);
  if ( *((_QWORD *)this + 92) )
  {
    v7 = this;
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)&v8,
      (__int64)v6);
    v8 = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
    v5 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___(v3, v2, v4, &v7);
    lambda_2f79d86dba88adc4f3637a9ed70ae0ec_::__lambda_2f79d86dba88adc4f3637a9ed70ae0ec_((__int64)&v7);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x72D,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v6);
}
