/*
 * XREFs of ?StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@0II@Z @ 0x18052B66C
 * Callers:
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x1805224B0 (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD744 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800AFEB4 (-zInternalStart@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgR.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::StartActivity(
        __int64 a1,
        char a2,
        int a3,
        char a4,
        int a5,
        int a6)
{
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  const GUID *v12; // rax
  __int64 v13; // r8
  char v14; // [rsp+38h] [rbp-89h] BYREF
  char v15; // [rsp+39h] [rbp-88h] BYREF
  int v16; // [rsp+3Ch] [rbp-85h] BYREF
  int v17; // [rsp+40h] [rbp-81h] BYREF
  int v18; // [rsp+44h] [rbp-7Dh] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp-79h] BYREF
  __int64 v20; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+58h] [rbp-69h] BYREF
  __int64 *v22; // [rsp+78h] [rbp-49h]
  __int64 v23; // [rsp+80h] [rbp-41h]
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp-39h]
  __int64 v25; // [rsp+90h] [rbp-31h]
  char *v26; // [rsp+98h] [rbp-29h]
  __int64 v27; // [rsp+A0h] [rbp-21h]
  int *v28; // [rsp+A8h] [rbp-19h]
  __int64 v29; // [rsp+B0h] [rbp-11h]
  char *v30; // [rsp+B8h] [rbp-9h]
  __int64 v31; // [rsp+C0h] [rbp-1h]
  int *v32; // [rsp+C8h] [rbp+7h]
  __int64 v33; // [rsp+D0h] [rbp+Fh]
  int *v34; // [rsp+D8h] [rbp+17h]
  __int64 v35; // [rsp+E0h] [rbp+1Fh]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v11 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                    v10,
                    _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v11 > 5u )
  {
    v16 = a6;
    v17 = a5;
    v14 = a4;
    v18 = a3;
    v15 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v20 = 0LL;
    v12 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    v13 = *(_QWORD *)(a1 + 48);
    v34 = &v16;
    v35 = 4LL;
    v32 = &v17;
    v33 = 4LL;
    v30 = &v14;
    v31 = 1LL;
    v28 = &v18;
    v26 = &v15;
    p_CurrentThreadId = &CurrentThreadId;
    v22 = &v20;
    v29 = 4LL;
    v27 = 1LL;
    v25 = 4LL;
    v23 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v11,
      (unsigned __int8 *)dword_180862AE3,
      (const GUID *)(v13 + 8),
      v12,
      9u,
      &v21);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
}
