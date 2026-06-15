/*
 * XREFs of ?FallbackTelemetryCallback@AudioDgTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x140050EB0
 * Callers:
 *     <none>
 * Callees:
 *     atexit @ 0x140028478 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400504A4 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

void __fastcall AudioDgTelemetryProvider::FallbackTelemetryCallback(char a1, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  void (*v6)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  WINBOOL v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &v9, (LPVOID *)&v10)
    && v9 )
  {
    v7 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    v10 = &qword_1400CF680;
    qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v8 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v7, v5, v6);
  }
  LOBYTE(v4) = a1;
  (*(void (__fastcall **)(__int64 *, __int64, const struct wil::FailureInfo *))(*v10 + 16))(v10, v4, a2);
}
