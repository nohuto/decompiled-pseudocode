/*
 * XREFs of ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@@Z @ 0x180046AA4
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180047F50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180046BC8 (-zInternalStart@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall CommonStartTelemetry::LauncherInvokeActivity::StartActivity(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  _DWORD *v7; // rdi
  int v8; // eax
  __int64 v9; // r8
  int v10; // [rsp+38h] [rbp-19h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 v12; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  DWORD *p_CurrentThreadId; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  int *v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  int v22; // [rsp+94h] [rbp+43h]

  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v6 = wil::details::static_lazy<LauncherTelemetryLogging>::get(
         v4,
         _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_,
         v5);
  v7 = *(_DWORD **)(v6 + 8);
  if ( *v7 > 5u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v6 + 8), 0x400000000000LL) )
  {
    v10 = a2;
    v12 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v8 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    v9 = *(_QWORD *)(a1 + 48);
    v22 = 0;
    v19 = 0;
    v16 = 0;
    v20 = &v10;
    p_CurrentThreadId = &CurrentThreadId;
    v14 = &v12;
    v21 = 4;
    v18 = 4;
    v15 = 8;
    tlgWriteTransfer_EventWriteTransfer((int)v7, (int)&dword_1806B5E5A, v9 + 8, v8, 5u, &v13);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
