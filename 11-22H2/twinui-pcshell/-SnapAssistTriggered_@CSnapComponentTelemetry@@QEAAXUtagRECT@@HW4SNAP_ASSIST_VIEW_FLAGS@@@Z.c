/*
 * XREFs of ?SnapAssistTriggered_@CSnapComponentTelemetry@@QEAAXUtagRECT@@HW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18066BAC8
 * Callers:
 *     ??$SnapAssistTriggered@AEBUCRect@Geometry@@HAEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetry@@SAXAEBUCRect@Geometry@@$$QEAHAEAW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180669140 (--$SnapAssistTriggered@AEBUCRect@Geometry@@HAEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetr.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x180110E08 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 */

int __fastcall CSnapComponentTelemetry::SnapAssistTriggered_(__int64 a1, _DWORD *a2, int a3, int a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rcx
  int v12; // [rsp+50h] [rbp-20h] BYREF
  int v13; // [rsp+54h] [rbp-1Ch] BYREF
  int v14; // [rsp+58h] [rbp-18h] BYREF
  int v15; // [rsp+5Ch] [rbp-14h] BYREF
  _DWORD v16[4]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+10h] BYREF

  v17 = a1;
  v7 = wil::details::static_lazy<WindowManagementLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v10 = (_DWORD *)v7[1];
  if ( *v10 > 5u )
  {
    v13 = a2[3];
    v14 = a2[2];
    v15 = a2[1];
    v16[0] = *a2;
    LODWORD(v17) = a4;
    v12 = a3;
    LODWORD(v7) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v10,
                    byte_1808739DE,
                    v8,
                    v9,
                    (__int64)v16,
                    (__int64)&v15,
                    (__int64)&v14,
                    (__int64)&v13,
                    (__int64)&v12,
                    (__int64)&v17);
  }
  return (int)v7;
}
