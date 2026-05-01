/*
 * XREFs of ??$SnapAssistTriggered@AEBUCRect@Geometry@@HAEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetry@@SAXAEBUCRect@Geometry@@$$QEAHAEAW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059AAB4
 * Callers:
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x18059ED14 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x1805940E4 (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?SnapAssistTriggered_@CSnapComponentTelemetry@@QEAAXUtagRECT@@HW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059CE68 (-SnapAssistTriggered_@CSnapComponentTelemetry@@QEAAXUtagRECT@@HW4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 */

char __fastcall CSnapComponentTelemetry::SnapAssistTriggered<Geometry::CRect const &,int,enum SNAP_ASSIST_VIEW_FLAGS &>(
        __int128 *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  char result; // al
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp+20h] BYREF

  result = CSnapComponentTelemetry::IsEnabled((char)a1);
  if ( result )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CSnapComponentTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        *(_QWORD *)&v11 = &`CSnapComponentTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B4700;
        qword_1807B4700 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
        DWORD2(v11) = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v11);
      }
    }
    v8 = *a3;
    v9 = *a2;
    v11 = *a1;
    return CSnapComponentTelemetry::SnapAssistTriggered_(v7, &v11, v9, v8);
  }
  return result;
}
