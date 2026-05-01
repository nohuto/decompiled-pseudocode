/*
 * XREFs of ??$PPIWin32VtcSideBarError@AEAY0DB@$$CBG@TabletModeTelemetry@@SAXAEAY0DB@$$CBG@Z @ 0x180514818
 * Callers:
 *     ?_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x180517540 (-_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?IsEnabled@TabletModeTelemetry@@SA_NE_K@Z @ 0x180505050 (-IsEnabled@TabletModeTelemetry@@SA_NE_K@Z.c)
 *     ?PPIWin32VtcSideBarError_@TabletModeTelemetry@@QEAAXPEBG@Z @ 0x180515740 (-PPIWin32VtcSideBarError_@TabletModeTelemetry@@QEAAXPEBG@Z.c)
 */

void __fastcall TabletModeTelemetry::PPIWin32VtcSideBarError<unsigned short const (&)[49]>(__int64 a1)
{
  TabletModeTelemetry *v1; // rcx
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  __int64 fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  fPending = a1;
  if ( TabletModeTelemetry::IsEnabled(a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`TabletModeTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context) )
    {
      if ( (_DWORD)fPending )
      {
        v2 = &`TabletModeTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B4570;
        qword_1807B4570 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_51d33002daa63bfc4d65f85f7f956340_::_lambda_invoker_cdecl_);
        v3 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v2);
      }
    }
    TabletModeTelemetry::PPIWin32VtcSideBarError_(v1, L"There should at least be one item in the layout.");
  }
}
