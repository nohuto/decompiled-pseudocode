/*
 * XREFs of ?SnapAssistItemSelected_@CSnapComponentTelemetry@@QEAAXPEAUHWND__@@UtagRECT@@@Z @ 0x18059CDC8
 * Callers:
 *     ??$SnapAssistItemSelected@AEAPEAUHWND__@@AEBUtagRECT@@@CSnapComponentTelemetry@@SAXAEAPEAUHWND__@@AEBUtagRECT@@@Z @ 0x18059A9F8 (--$SnapAssistItemSelected@AEAPEAUHWND__@@AEBUtagRECT@@@CSnapComponentTelemetry@@SAXAEAPEAUHWND__.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x18014A4B8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

void __fastcall CSnapComponentTelemetry::SnapAssistItemSelected_(
        CSnapComponentTelemetry *this,
        HWND a2,
        struct tagRECT *a3)
{
  int v3; // edi
  _DWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  LONG top; // [rsp+50h] [rbp-18h] BYREF
  LONG left; // [rsp+54h] [rbp-14h] BYREF
  _DWORD v10[4]; // [rsp+58h] [rbp-10h] BYREF
  CSnapComponentTelemetry *v11; // [rsp+70h] [rbp+8h] BYREF
  LONG right; // [rsp+88h] [rbp+20h] BYREF

  v11 = this;
  v3 = (int)a2;
  v5 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
  {
    LODWORD(v11) = a3->bottom;
    right = a3->right;
    top = a3->top;
    left = a3->left;
    v10[0] = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v5,
      byte_1806CA62F,
      v6,
      v7,
      (__int64)v10,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&v11);
  }
}
