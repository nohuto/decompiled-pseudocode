/*
 * XREFs of ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x180017060
 * Callers:
 *     ??$MonitorFrameCreated@_NIIUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1$$QEAUtagRECT@@@Z @ 0x180016F7C (--$MonitorFrameCreated@_NIIUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1$$QEAUtagRECT@@@Z.c)
 *     ??$MonitorFrameCreated@_NIAEAIAEAUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAIAEAIAEAUtagRECT@@@Z @ 0x18042BC48 (--$MonitorFrameCreated@_NIAEAIAEAUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAIAEAIAEAUtagRE.c)
 *     ??$TaskViewContextMenuInvoked@I_N@XamlSwitcherTelemetry@@SAX$$QEAI$$QEA_N@Z @ 0x180440100 (--$TaskViewContextMenuInvoked@I_N@XamlSwitcherTelemetry@@SAX$$QEAI$$QEA_N@Z.c)
 *     ??$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUCRect@Geometry@@AEAPEAUHWND__@@1@Z @ 0x1805FF8B4 (--$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUC.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ @ 0x180017200 (--1Completer@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

bool __fastcall XamlSwitcherTelemetry::IsEnabled(char a1)
{
  unsigned __int64 v1; // r8
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL v5; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v6; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v5) = a1;
  v6 = 0LL;
  if ( __std_init_once_begin_initialize(&`XamlSwitcherTelemetry::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v3 = &`XamlSwitcherTelemetry::Instance'::`2'::wrapper;
    v6 = (wil::TraceLoggingProvider *)&qword_1807B4440;
    qword_1807B4440 = (__int64)&XamlSwitcherTelemetry::`vftable';
    atexit(_lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<XamlSwitcherTelemetry>::Completer::~Completer(&v3);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v6, 0, v1);
}
