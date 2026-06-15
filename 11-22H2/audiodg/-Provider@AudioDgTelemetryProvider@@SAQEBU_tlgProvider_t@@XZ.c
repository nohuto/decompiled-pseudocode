/*
 * XREFs of ?Provider@AudioDgTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x140051A30
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x14002B690 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     _lambda_39f0b8db704028d22821d7bebaf9e9fc_::operator() @ 0x14002D540 (_lambda_39f0b8db704028d22821d7bebaf9e9fc_--operator().c)
 *     ?GetControllableSystemEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEAX@Z @ 0x14006E5E0 (-GetControllableSystemEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEA.c)
 * Callees:
 *     atexit @ 0x140028478 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400504A4 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

const struct _tlgProvider_t *AudioDgTelemetryProvider::Provider(void)
{
  __int64 v0; // rdx
  void (*v1)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v3 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1400CF680;
    qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v3, v0, v1);
  }
  return (const struct _tlgProvider_t *)*((_QWORD *)Context + 1);
}
