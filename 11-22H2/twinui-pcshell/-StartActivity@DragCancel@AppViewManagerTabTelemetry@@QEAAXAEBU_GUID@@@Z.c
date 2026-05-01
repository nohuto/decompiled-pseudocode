/*
 * XREFs of ?StartActivity@DragCancel@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@@Z @ 0x1803B1BB8
 * Callers:
 *     ?DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z @ 0x1803ADF70 (-DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD744 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1803BA5E0 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803BA730 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragCancel::StartActivity(
        AppViewManagerTabTelemetry::DragCancel *this,
        const struct _GUID *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _DWORD *v6; // rdi
  const GUID *v7; // rax
  __int64 v8; // r8
  DWORD CurrentThreadId; // [rsp+38h] [rbp-19h] BYREF
  __int64 v10; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+17h]
  int v13; // [rsp+70h] [rbp+1Fh]
  int v14; // [rsp+74h] [rbp+23h]
  DWORD *p_CurrentThreadId; // [rsp+78h] [rbp+27h]
  int v16; // [rsp+80h] [rbp+2Fh]
  int v17; // [rsp+84h] [rbp+33h]
  const struct _GUID *v18; // [rsp+88h] [rbp+37h]
  int v19; // [rsp+90h] [rbp+3Fh]
  int v20; // [rsp+94h] [rbp+43h]

  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v5 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v4,
         _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v6 = *(_DWORD **)(v5 + 8);
  if ( *v6 > 5u && tlgKeywordOn(*(_QWORD *)(v5 + 8), 0x400000000000LL) )
  {
    v10 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v7 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v8 = *((_QWORD *)this + 6);
    v20 = 0;
    v17 = 0;
    v14 = 0;
    p_CurrentThreadId = &CurrentThreadId;
    v12 = &v10;
    v18 = a2;
    v19 = 16;
    v16 = 4;
    v13 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v6,
      (unsigned __int8 *)dword_180843475,
      (const GUID *)(v8 + 8),
      v7,
      5u,
      &v11);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
