/*
 * XREFs of ?WindowMigrationAnswer_@SnapMigrationHandlerTelemetry@@QEBAX_KAEBUtagRECT@@@Z @ 0x1805A8968
 * Callers:
 *     ??$WindowMigrationAnswer@_KAEBUCRect@Geometry@@@SnapMigrationHandlerTelemetry@@SAX$$QEA_KAEBUCRect@Geometry@@@Z @ 0x1805A81A0 (--$WindowMigrationAnswer@_KAEBUCRect@Geometry@@@SnapMigrationHandlerTelemetry@@SAX$$QEA_KAEBUCRe.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall SnapMigrationHandlerTelemetry::WindowMigrationAnswer_(
        SnapMigrationHandlerTelemetry *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  const struct tagRECT *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  v5 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
  {
    v13 = 0;
    v10 = 0;
    v8 = &v6;
    v6 = a2;
    v11 = a3;
    v12 = 16;
    v9 = 8;
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_1806CAC6D, 0LL, 0LL, 4u, &v7);
  }
}
