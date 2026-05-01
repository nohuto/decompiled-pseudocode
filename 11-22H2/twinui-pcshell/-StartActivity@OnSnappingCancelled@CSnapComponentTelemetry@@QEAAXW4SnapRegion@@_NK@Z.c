/*
 * XREFs of ?StartActivity@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAXW4SnapRegion@@_NK@Z @ 0x180663E1C
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180661C80 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002D3F0 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD744 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA?AW4SnapRegion@SnapComponentTelemetry@@W42@@Z @ 0x180661710 (-GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA-AW4SnapRegion@SnapComponentTelemetry@@W42@@Z.c)
 */

void __fastcall CSnapComponentTelemetry::OnSnappingCancelled::StartActivity(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        int a4)
{
  int v5; // r14d
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _DWORD *v10; // rdi
  const GUID *v11; // rax
  const GUID *v12; // r8
  int v13; // [rsp+38h] [rbp-69h] BYREF
  int v14; // [rsp+3Ch] [rbp-65h] BYREF
  int TelemetrySnapRegion; // [rsp+40h] [rbp-61h] BYREF
  DWORD CurrentThreadId; // [rsp+44h] [rbp-5Dh] BYREF
  __int64 v17; // [rsp+48h] [rbp-59h] BYREF
  __int64 v18; // [rsp+50h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+58h] [rbp-49h] BYREF
  __int64 *v20; // [rsp+78h] [rbp-29h]
  int v21; // [rsp+80h] [rbp-21h]
  int v22; // [rsp+84h] [rbp-1Dh]
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp-19h]
  int v24; // [rsp+90h] [rbp-11h]
  int v25; // [rsp+94h] [rbp-Dh]
  __int64 *v26; // [rsp+98h] [rbp-9h]
  int v27; // [rsp+A0h] [rbp-1h]
  int v28; // [rsp+A4h] [rbp+3h]
  int *p_TelemetrySnapRegion; // [rsp+A8h] [rbp+7h]
  int v30; // [rsp+B0h] [rbp+Fh]
  int v31; // [rsp+B4h] [rbp+13h]
  int *v32; // [rsp+B8h] [rbp+17h]
  int v33; // [rsp+C0h] [rbp+1Fh]
  int v34; // [rsp+C4h] [rbp+23h]
  int *v35; // [rsp+C8h] [rbp+27h]
  int v36; // [rsp+D0h] [rbp+2Fh]
  int v37; // [rsp+D4h] [rbp+33h]

  v5 = a3;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v9 = wil::details::static_lazy<WindowManagementLogging>::get(
         v8,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v10 = (_DWORD *)v9[1];
  if ( *v10 > 5u && tlgKeywordOn(v9[1], 0x400000000000LL) )
  {
    v13 = a4;
    v14 = v5;
    TelemetrySnapRegion = CSnapComponentTelemetry::GetTelemetrySnapRegion(a2);
    v17 = 0x2000000LL;
    v18 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v11 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    v37 = 0;
    v34 = 0;
    v31 = 0;
    v28 = 0;
    v25 = 0;
    v22 = 0;
    v35 = &v13;
    v32 = &v14;
    p_TelemetrySnapRegion = &TelemetrySnapRegion;
    v26 = &v17;
    p_CurrentThreadId = &CurrentThreadId;
    v20 = &v18;
    v36 = 4;
    v33 = 4;
    v30 = 4;
    v24 = 4;
    v12 = (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL);
    v27 = 8;
    v21 = 8;
    tlgWriteTransfer_EventWriteTransfer((__int64)v10, (unsigned __int8 *)dword_180871A38, v12, v11, 8u, &v19);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
}
