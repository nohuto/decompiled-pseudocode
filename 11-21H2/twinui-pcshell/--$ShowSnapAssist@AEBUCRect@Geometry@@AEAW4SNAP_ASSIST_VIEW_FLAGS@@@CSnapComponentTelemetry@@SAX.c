/*
 * XREFs of ??$ShowSnapAssist@AEBUCRect@Geometry@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetry@@SAXAEBUCRect@Geometry@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059A93C
 * Callers:
 *     ?_ShowSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIApplicationViewCollection@@AEBUCRect@Geometry@@W4SNAP_ASSIST_VIEW_FLAGS@@V?$shared_ptr@VGuidedSnapAssistData@@@std@@@Z @ 0x18059EAA8 (-_ShowSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIApplicationViewCollection@@AEBUCRect@Geome.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x1805940E4 (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?ShowSnapAssist_@CSnapComponentTelemetry@@QEAAXUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059CC00 (-ShowSnapAssist_@CSnapComponentTelemetry@@QEAAXUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 */

char __fastcall CSnapComponentTelemetry::ShowSnapAssist<Geometry::CRect const &,enum SNAP_ASSIST_VIEW_FLAGS &>(
        __int128 *a1,
        unsigned int *a2)
{
  char result; // al
  __int64 v5; // rcx
  __int64 v6; // r8
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  result = CSnapComponentTelemetry::IsEnabled((char)a1);
  if ( result )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CSnapComponentTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        *(_QWORD *)&v7 = &`CSnapComponentTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B4700;
        qword_1807B4700 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
        DWORD2(v7) = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v7);
      }
    }
    v6 = *a2;
    v7 = *a1;
    return CSnapComponentTelemetry::ShowSnapAssist_(v5, &v7, v6);
  }
  return result;
}
