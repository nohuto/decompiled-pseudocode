/*
 * XREFs of ?FallbackTelemetryCallback@AudioSrvTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x18003F080
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180065B08 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180067018 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall AudioSrvTelemetryProvider::FallbackTelemetryCallback(char a1, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rdx
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v5 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    v8 = &qword_1801CFD38;
    qword_1801CFD38 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801CFD50 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v6 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v5);
  }
  LOBYTE(v4) = a1;
  (*(void (__fastcall **)(__int64 *, __int64, const struct wil::FailureInfo *))(*v8 + 16))(v8, v4, a2);
}
