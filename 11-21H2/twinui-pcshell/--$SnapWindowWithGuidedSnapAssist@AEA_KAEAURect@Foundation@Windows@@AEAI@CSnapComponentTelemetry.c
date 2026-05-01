/*
 * XREFs of ??$SnapWindowWithGuidedSnapAssist@AEA_KAEAURect@Foundation@Windows@@AEAI@CSnapComponentTelemetry@@SAXAEA_KAEAURect@Foundation@Windows@@AEAI@Z @ 0x180590BA0
 * Callers:
 *     ?SnapWindowWithGuidedSnapAssist@CShellSnapComponent@@UEAAJ_KURect@Foundation@Windows@@IPEAU234@@Z @ 0x180596100 (-SnapWindowWithGuidedSnapAssist@CShellSnapComponent@@UEAAJ_KURect@Foundation@Windows@@IPEAU234@@.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x1805940E4 (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?SnapWindowWithGuidedSnapAssist_@CSnapComponentTelemetry@@QEBAX_KAEAURect@Foundation@Windows@@H@Z @ 0x18059622C (-SnapWindowWithGuidedSnapAssist_@CSnapComponentTelemetry@@QEBAX_KAEAURect@Foundation@Windows@@H@.c)
 */

void __fastcall CSnapComponentTelemetry::SnapWindowWithGuidedSnapAssist<unsigned __int64 &,Windows::Foundation::Rect &,unsigned int &>(
        unsigned __int64 *a1,
        struct Windows::Foundation::Rect *a2,
        int *a3)
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
        Context = &qword_1807B4700;
        qword_1807B4700 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
        v9 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v8);
      }
    }
    CSnapComponentTelemetry::SnapWindowWithGuidedSnapAssist_(v6, *a1, a2, *a3);
  }
}
