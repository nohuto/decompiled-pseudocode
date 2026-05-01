/*
 * XREFs of ??$MonitorFrameCreated@_NIIUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1$$QEAUtagRECT@@@Z @ 0x180016F7C
 * Callers:
 *     ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800165F8 (-CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x180017060 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ??1Completer@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ @ 0x180017200 (--1Completer@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?MonitorFrameCreated_@XamlSwitcherTelemetry@@QEAAX_NIIUtagRECT@@@Z @ 0x180017278 (-MonitorFrameCreated_@XamlSwitcherTelemetry@@QEAAX_NIIUtagRECT@@@Z.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

void __fastcall XamlSwitcherTelemetry::MonitorFrameCreated<bool,unsigned int,unsigned int,tagRECT>(
        char *a1,
        unsigned int *a2,
        unsigned int *a3,
        struct tagRECT *a4)
{
  XamlSwitcherTelemetry *v8; // rcx
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  char v11; // dl
  WINBOOL fPending; // [rsp+30h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-20h] BYREF
  struct tagRECT v14; // [rsp+40h] [rbp-18h] BYREF

  if ( XamlSwitcherTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`XamlSwitcherTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        *(_QWORD *)&v14.left = &`XamlSwitcherTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B4440;
        qword_1807B4440 = (__int64)&XamlSwitcherTelemetry::`vftable';
        atexit(_lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
        v14.right = 0;
        wil::details::static_lazy<XamlSwitcherTelemetry>::Completer::~Completer(&v14);
      }
    }
    v9 = *a3;
    v10 = *a2;
    v11 = *a1;
    v14 = *a4;
    XamlSwitcherTelemetry::MonitorFrameCreated_(v8, v11, v10, v9, &v14);
  }
}
