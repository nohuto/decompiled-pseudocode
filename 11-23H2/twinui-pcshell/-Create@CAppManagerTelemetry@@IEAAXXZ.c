/*
 * XREFs of ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x180067C34
 * Callers:
 *     ??1Completer@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x180067BF8 (--1Completer@-$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAppManagerTelemetry::Create(CAppManagerTelemetry *this)
{
  __int64 v2; // rax
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v3 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    v6 = &qword_18098DB60;
    qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v3);
  }
  v2 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = v6[1];
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(CAppManagerTelemetry *))(v2 + 8))(this);
}
