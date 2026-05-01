/*
 * XREFs of ?StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@0I@Z @ 0x18047A9D8
 * Callers:
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x180470864 (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?zInternalStart@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800BFF5C (-zInternalStart@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgR.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::StartActivity(
        __int64 a1,
        char a2,
        int a3,
        char a4,
        int a5)
{
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  const GUID *v11; // rax
  const GUID *v12; // r8
  char v13; // [rsp+38h] [rbp-71h] BYREF
  char v14; // [rsp+39h] [rbp-70h] BYREF
  int v15; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v16; // [rsp+40h] [rbp-69h] BYREF
  DWORD CurrentThreadId; // [rsp+44h] [rbp-65h] BYREF
  __int64 v18; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+58h] [rbp-51h] BYREF
  __int64 *v20; // [rsp+78h] [rbp-31h]
  int v21; // [rsp+80h] [rbp-29h]
  int v22; // [rsp+84h] [rbp-25h]
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp-21h]
  int v24; // [rsp+90h] [rbp-19h]
  int v25; // [rsp+94h] [rbp-15h]
  char *v26; // [rsp+98h] [rbp-11h]
  int v27; // [rsp+A0h] [rbp-9h]
  int v28; // [rsp+A4h] [rbp-5h]
  int *v29; // [rsp+A8h] [rbp-1h]
  int v30; // [rsp+B0h] [rbp+7h]
  int v31; // [rsp+B4h] [rbp+Bh]
  char *v32; // [rsp+B8h] [rbp+Fh]
  int v33; // [rsp+C0h] [rbp+17h]
  int v34; // [rsp+C4h] [rbp+1Bh]
  int *v35; // [rsp+C8h] [rbp+1Fh]
  int v36; // [rsp+D0h] [rbp+27h]
  int v37; // [rsp+D4h] [rbp+2Bh]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v10 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                    v9,
                    _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 5u )
  {
    v15 = a5;
    v13 = a4;
    v16 = a3;
    v14 = a2;
    v18 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v11 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    v37 = 0;
    v34 = 0;
    v31 = 0;
    v28 = 0;
    v25 = 0;
    v22 = 0;
    v35 = &v15;
    v32 = &v13;
    v29 = &v16;
    v26 = &v14;
    p_CurrentThreadId = &CurrentThreadId;
    v20 = &v18;
    v36 = 4;
    v30 = 4;
    v24 = 4;
    v12 = (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL);
    v33 = 1;
    v27 = 1;
    v21 = 8;
    tlgWriteTransfer_EventWriteTransfer((__int64)v10, (unsigned __int8 *)dword_1806BB8D6, v12, v11, 8u, &v19);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
