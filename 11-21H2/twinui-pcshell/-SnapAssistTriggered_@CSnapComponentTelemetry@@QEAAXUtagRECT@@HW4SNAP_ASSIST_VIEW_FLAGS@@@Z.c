/*
 * XREFs of ?SnapAssistTriggered_@CSnapComponentTelemetry@@QEAAXUtagRECT@@HW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059CE68
 * Callers:
 *     ??$SnapAssistTriggered@AEBUCRect@Geometry@@HAEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetry@@SAXAEBUCRect@Geometry@@$$QEAHAEAW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059AAB4 (--$SnapAssistTriggered@AEBUCRect@Geometry@@HAEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetr.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x180061928 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

_QWORD *__fastcall CSnapComponentTelemetry::SnapAssistTriggered_(__int64 a1, _DWORD *a2, int a3, int a4)
{
  _QWORD *result; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rcx
  int v11; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+54h] [rbp-1Ch] BYREF
  int v13; // [rsp+58h] [rbp-18h] BYREF
  int v14; // [rsp+5Ch] [rbp-14h] BYREF
  _DWORD v15[4]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+10h] BYREF

  v16 = a1;
  result = wil::details::static_lazy<WindowManagementLogging>::get(
             a1,
             _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v10 = (_DWORD *)result[1];
  if ( *v10 > 5u )
  {
    v12 = a2[3];
    v13 = a2[2];
    v14 = a2[1];
    v15[0] = *a2;
    LODWORD(v16) = a4;
    v11 = a3;
    return (_QWORD *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                       (int)v10,
                       (int)&unk_1806CA5A9,
                       v8,
                       v9,
                       (__int64)v15,
                       (__int64)&v14,
                       (__int64)&v13,
                       (__int64)&v12,
                       (__int64)&v11,
                       (__int64)&v16);
  }
  return result;
}
