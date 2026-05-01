/*
 * XREFs of ?FallbackTelemetryCallback@ErrorHandlingHelpers@wil@@SAX_NAEBUFailureInfo@2@@Z @ 0x18013A5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::ErrorHandlingHelpers::FallbackTelemetryCallback(char a1, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  void (*v6)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPINIT_ONCE v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  WINBOOL v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( __std_init_once_begin_initialize(&`wil::ErrorHandlingHelpers::Instance'::`2'::wrapper, 0, &v9, (LPVOID *)&v10)
    && v9 )
  {
    v7 = &`wil::ErrorHandlingHelpers::Instance'::`2'::wrapper;
    v10 = &qword_1807B40A0;
    qword_1807B40A0 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B40B8 = (__int64)&`wil::ErrorHandlingHelpers::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_8d5ca15cf69e69dee1fdb0dcddeb1e66_::_lambda_invoker_cdecl_);
    v8 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v7, v5, v6);
  }
  LOBYTE(v4) = a1;
  (*(void (__fastcall **)(__int64 *, __int64, const struct wil::FailureInfo *))(*v10 + 16))(v10, v4, a2);
}
