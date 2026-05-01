/*
 * XREFs of ??$WindowMigrationAnswer@_KAEBUCRect@Geometry@@@SnapMigrationHandlerTelemetry@@SAX$$QEA_KAEBUCRect@Geometry@@@Z @ 0x1805A81A0
 * Callers:
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x1805A8590 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?IsEnabled@SnapMigrationHandlerTelemetry@@SA_NE_K@Z @ 0x1805A84F0 (-IsEnabled@SnapMigrationHandlerTelemetry@@SA_NE_K@Z.c)
 *     ?WindowMigrationAnswer_@SnapMigrationHandlerTelemetry@@QEBAX_KAEBUtagRECT@@@Z @ 0x1805A8968 (-WindowMigrationAnswer_@SnapMigrationHandlerTelemetry@@QEBAX_KAEBUtagRECT@@@Z.c)
 */

void __fastcall SnapMigrationHandlerTelemetry::WindowMigrationAnswer<unsigned __int64,Geometry::CRect const &>(
        unsigned __int64 *a1,
        const struct tagRECT *a2)
{
  SnapMigrationHandlerTelemetry *v4; // rcx
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  if ( SnapMigrationHandlerTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`SnapMigrationHandlerTelemetry::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context) )
    {
      if ( fPending )
      {
        v5 = &`SnapMigrationHandlerTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B5718;
        qword_1807B5718 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_09eb35d4d8d12ef89a70d65a1032a73e_::_lambda_invoker_cdecl_);
        v6 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v5);
      }
    }
    SnapMigrationHandlerTelemetry::WindowMigrationAnswer_(v4, *a1, a2);
  }
}
