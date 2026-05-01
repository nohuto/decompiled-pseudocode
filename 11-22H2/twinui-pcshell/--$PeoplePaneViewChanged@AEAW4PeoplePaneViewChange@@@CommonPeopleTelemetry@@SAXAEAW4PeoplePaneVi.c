/*
 * XREFs of ??$PeoplePaneViewChanged@AEAW4PeoplePaneViewChange@@@CommonPeopleTelemetry@@SAXAEAW4PeoplePaneViewChange@@@Z @ 0x1804B1554
 * Callers:
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1804B57D8 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 * Callees:
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??1Completer@?$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAA@XZ @ 0x1804B1F78 (--1Completer@-$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@CommonPeopleTelemetry@@SA_NE_K@Z @ 0x1804B4468 (-IsEnabled@CommonPeopleTelemetry@@SA_NE_K@Z.c)
 *     ?PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z @ 0x1804B5928 (-PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z.c)
 */

char __fastcall CommonPeopleTelemetry::PeoplePaneViewChanged<enum PeoplePaneViewChange &>(
        unsigned int *a1,
        unsigned __int64 a2)
{
  char result; // al
  __int64 v4; // rcx
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  result = CommonPeopleTelemetry::IsEnabled((unsigned __int8)a1, a2);
  if ( result )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CommonPeopleTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v5 = &`CommonPeopleTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098F920;
        qword_18098F920 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_44e945012bab8f6b706c51efd447e7a2_::_lambda_invoker_cdecl_);
        v6 = 0;
        wil::details::static_lazy<CommonPeopleTelemetry>::Completer::~Completer(&v5);
      }
    }
    return CommonPeopleTelemetry::PeoplePaneViewChanged_(v4, *a1);
  }
  return result;
}
