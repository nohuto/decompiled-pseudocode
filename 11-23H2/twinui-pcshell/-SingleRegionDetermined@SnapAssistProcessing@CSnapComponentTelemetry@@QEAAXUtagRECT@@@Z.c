/*
 * XREFs of ?SingleRegionDetermined@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXUtagRECT@@@Z @ 0x18066B8EC
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18066CA10 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1800E4524 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

void __fastcall CSnapComponentTelemetry::SnapAssistProcessing::SingleRegionDetermined(
        CSnapComponentTelemetry::SnapAssistProcessing *this,
        struct tagRECT *a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  LONG bottom; // [rsp+40h] [rbp-18h] BYREF
  LONG right; // [rsp+44h] [rbp-14h] BYREF
  LONG top; // [rsp+48h] [rbp-10h] BYREF
  LONG v10[3]; // [rsp+4Ch] [rbp-Ch] BYREF

  v4 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    v6 = *((_QWORD *)this + 6);
    bottom = a2->bottom;
    right = a2->right;
    top = a2->top;
    v10[0] = a2->left;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v4,
      byte_180873DE4,
      (const GUID *)(v6 + 8),
      v5,
      (__int64)v10,
      (__int64)&top,
      (__int64)&right,
      (__int64)&bottom);
  }
}
