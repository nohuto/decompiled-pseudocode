/*
 * XREFs of ??$WindowMigrationEvent@_KIAEBUCRect@Geometry@@AEBU12@AEBIAEBIAEBU12@@SnapMigrationHandlerTelemetry@@SAX$$QEA_K$$QEAIAEBUCRect@Geometry@@2AEBI32@Z @ 0x1806749B8
 * Callers:
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x180674CE0 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?IsEnabled@SnapMigrationHandlerTelemetry@@SA_NE_K@Z @ 0x180674C40 (-IsEnabled@SnapMigrationHandlerTelemetry@@SA_NE_K@Z.c)
 *     ?WindowMigrationEvent_@SnapMigrationHandlerTelemetry@@QEBAX_KIAEBUtagRECT@@1II1@Z @ 0x180675190 (-WindowMigrationEvent_@SnapMigrationHandlerTelemetry@@QEBAX_KIAEBUtagRECT@@1II1@Z.c)
 */

void __fastcall SnapMigrationHandlerTelemetry::WindowMigrationEvent<unsigned __int64,unsigned int,Geometry::CRect const &,Geometry::CRect const &,unsigned int const &,unsigned int const &,Geometry::CRect const &>(
        unsigned __int64 *a1,
        unsigned int *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        unsigned int *a5,
        unsigned int *a6,
        struct tagRECT *a7)
{
  WINBOOL fPending; // [rsp+40h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v13; // [rsp+50h] [rbp-18h] BYREF
  int v14; // [rsp+58h] [rbp-10h]

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
        v13 = &`SnapMigrationHandlerTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098FEE0;
        qword_18098FEE0 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_09eb35d4d8d12ef89a70d65a1032a73e_::_lambda_invoker_cdecl_);
        v14 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v13);
      }
    }
    SnapMigrationHandlerTelemetry::WindowMigrationEvent_(
      (SnapMigrationHandlerTelemetry *)*a5,
      *a1,
      *a2,
      a3,
      a4,
      *a5,
      *a6,
      a7);
  }
}
