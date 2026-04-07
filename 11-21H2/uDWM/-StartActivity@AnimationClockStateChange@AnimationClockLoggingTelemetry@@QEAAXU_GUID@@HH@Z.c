/*
 * XREFs of ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x1800A29B8
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800A3DF8 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800401D8 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800628FC (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180096F94 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x1800A44A8 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800A4610 (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall AnimationClockLoggingTelemetry::AnimationClockStateChange::StartActivity(
        AnimationClockLoggingTelemetry::AnimationClockStateChange *this,
        struct _GUID *a2,
        int a3,
        int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  _DWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // [rsp+38h] [rbp-59h] BYREF
  int v14; // [rsp+3Ch] [rbp-55h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-51h] BYREF
  __int64 v16; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v17[32]; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v18; // [rsp+78h] [rbp-19h]
  int v19; // [rsp+80h] [rbp-11h]
  int v20; // [rsp+84h] [rbp-Dh]
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp-9h]
  int v22; // [rsp+90h] [rbp-1h]
  int v23; // [rsp+94h] [rbp+3h]
  struct _GUID *v24; // [rsp+98h] [rbp+7h]
  int v25; // [rsp+A0h] [rbp+Fh]
  int v26; // [rsp+A4h] [rbp+13h]
  int *v27; // [rsp+A8h] [rbp+17h]
  int v28; // [rsp+B0h] [rbp+1Fh]
  int v29; // [rsp+B4h] [rbp+23h]
  int *v30; // [rsp+B8h] [rbp+27h]
  int v31; // [rsp+C0h] [rbp+2Fh]
  int v32; // [rsp+C4h] [rbp+33h]

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v10 = *(_DWORD **)(wil::details::static_lazy<AnimationClockLogging>::get(
                       v8,
                       _lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)
                   + 8);
  if ( *v10 > 4u )
  {
    v13 = a4;
    v14 = a3;
    v16 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v11 = wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v12 = *((_QWORD *)this + 6);
    v32 = 0;
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v20 = 0;
    v30 = &v13;
    v27 = &v14;
    p_CurrentThreadId = &CurrentThreadId;
    v18 = &v16;
    v31 = 4;
    v28 = 4;
    v24 = a2;
    v25 = 16;
    v22 = 4;
    v19 = 8;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v10, byte_18011E898, v12 + 8, v11, 7, (__int64)v17);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (AnimationClockLoggingTelemetry::AnimationClockStateChange *)((char *)this + 8),
      v9);
}
