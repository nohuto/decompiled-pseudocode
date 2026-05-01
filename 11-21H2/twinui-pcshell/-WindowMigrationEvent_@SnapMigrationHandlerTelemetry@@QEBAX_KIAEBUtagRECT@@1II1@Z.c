/*
 * XREFs of ?WindowMigrationEvent_@SnapMigrationHandlerTelemetry@@QEBAX_KIAEBUtagRECT@@1II1@Z @ 0x1805A8A1C
 * Callers:
 *     ??$WindowMigrationEvent@_KIAEBUCRect@Geometry@@AEBU12@AEBIAEBIAEBU12@@SnapMigrationHandlerTelemetry@@SAX$$QEA_K$$QEAIAEBUCRect@Geometry@@2AEBI32@Z @ 0x1805A8250 (--$WindowMigrationEvent@_KIAEBUCRect@Geometry@@AEBU12@AEBIAEBIAEBU12@@SnapMigrationHandlerTeleme.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperPtrSize@@U3@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperPtrSize@@5445@Z @ 0x1805A8350 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperPtrSize@@U3@U2@U2@U3@@-$_.c)
 */

void __fastcall SnapMigrationHandlerTelemetry::WindowMigrationEvent_(
        SnapMigrationHandlerTelemetry *this,
        __int64 a2,
        int a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5,
        unsigned int a6,
        unsigned int a7,
        const struct tagRECT *a8)
{
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // [rsp+68h] [rbp-9h] BYREF
  int v15; // [rsp+6Ch] [rbp-5h] BYREF
  __int64 v16; // [rsp+70h] [rbp-1h] BYREF
  __int64 v17; // [rsp+78h] [rbp+7h] BYREF
  int v18; // [rsp+80h] [rbp+Fh]
  __int64 v19; // [rsp+88h] [rbp+17h] BYREF
  int v20; // [rsp+90h] [rbp+1Fh]
  __int64 v21; // [rsp+98h] [rbp+27h] BYREF
  int v22; // [rsp+A0h] [rbp+2Fh]
  __int64 v23; // [rsp+B8h] [rbp+47h] BYREF

  v23 = (__int64)this;
  v11 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                    (__int64)this,
                    _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v11 > 5u )
  {
    v17 = (__int64)a8;
    LODWORD(v23) = a7;
    v14 = a6;
    v19 = (__int64)a5;
    v18 = 16;
    v20 = 16;
    v22 = 16;
    v21 = (__int64)a4;
    v15 = a3;
    v16 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize>(
      (__int64)v11,
      byte_1806CAB9F,
      v12,
      v13,
      (__int64)&v16,
      (__int64)&v15,
      &v21,
      &v19,
      (__int64)&v14,
      (__int64)&v23,
      &v17);
  }
}
