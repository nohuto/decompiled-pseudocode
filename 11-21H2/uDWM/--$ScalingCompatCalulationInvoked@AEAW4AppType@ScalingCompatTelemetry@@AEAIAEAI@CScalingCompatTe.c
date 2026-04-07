/*
 * XREFs of ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x180109AD4
 * Callers:
 *     ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x180109DC4 (-GetLegacyPhoneScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z.c)
 *     ?_GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180109F1C (-_GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800108F8 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x1800605D8 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18006108A (InitOnceBeginInitialize_0.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180093B30 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x180109BE8 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x180109E4C (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 */

char __fastcall ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked<enum ScalingCompatTelemetry::AppType &,unsigned int &,unsigned int &>(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  char result; // al
  __int64 v7; // rcx
  LPVOID Context; // [rsp+20h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v9; // [rsp+28h] [rbp-18h] BYREF
  int v10; // [rsp+30h] [rbp-10h]
  WINBOOL fPending; // [rsp+88h] [rbp+48h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize_0(
         &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    v9 = &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper;
    Context = &qword_180146448;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_180146448);
    qword_180146448 = &ScalingCompatTelemetry::CScalingCompatTelemetry::`vftable';
    atexit(_lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_);
    v10 = 0;
    wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::Completer::~Completer(&v9);
  }
  result = wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context);
  if ( result )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize_0(
           &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context) )
    {
      if ( fPending )
      {
        v9 = &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper;
        Context = &qword_180146448;
        wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_180146448);
        qword_180146448 = &ScalingCompatTelemetry::CScalingCompatTelemetry::`vftable';
        atexit(_lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_);
        v10 = 0;
        wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::Completer::~Completer(&v9);
      }
    }
    return ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(v7, *a1, *a2, *a3);
  }
  return result;
}
