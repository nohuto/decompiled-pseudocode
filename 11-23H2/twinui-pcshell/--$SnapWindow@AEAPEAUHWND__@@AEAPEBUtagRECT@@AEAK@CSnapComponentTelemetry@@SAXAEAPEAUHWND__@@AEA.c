/*
 * XREFs of ??$SnapWindow@AEAPEAUHWND__@@AEAPEBUtagRECT@@AEAK@CSnapComponentTelemetry@@SAXAEAPEAUHWND__@@AEAPEBUtagRECT@@AEAK@Z @ 0x18065D414
 * Callers:
 *     ?SnapWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEBUtagRECT@@K@Z @ 0x180663530 (-SnapWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEBUtagRECT@@K@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18066189C (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?SnapWindow_@CSnapComponentTelemetry@@QEBAXPEAUHWND__@@PEBUtagRECT@@K@Z @ 0x1806639D0 (-SnapWindow_@CSnapComponentTelemetry@@QEBAXPEAUHWND__@@PEBUtagRECT@@K@Z.c)
 */

void __fastcall CSnapComponentTelemetry::SnapWindow<HWND__ * &,tagRECT const * &,unsigned long &>(
        HWND *a1,
        const struct tagRECT **a2,
        unsigned int *a3)
{
  CSnapComponentTelemetry *v6; // rcx
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  union _RTL_RUN_ONCE *v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  WINBOOL fPending; // [rsp+68h] [rbp+20h] BYREF

  if ( CSnapComponentTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CSnapComponentTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v8 = &`CSnapComponentTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098EBC8;
        qword_18098EBC8 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
        v9 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v8);
      }
    }
    CSnapComponentTelemetry::SnapWindow_(v6, *a1, *a2, *a3);
  }
}
