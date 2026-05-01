/*
 * XREFs of ?Create@NPSMDesktopShellTelemetry@@IEAAXXZ @ 0x1806ED9D4
 * Callers:
 *     ??1Completer@?$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAA@XZ @ 0x1806ED95C (--1Completer@-$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall NPSMDesktopShellTelemetry::Create(NPSMDesktopShellTelemetry *this)
{
  __int64 v2; // rdx
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v4; // rax
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( __std_init_once_begin_initialize(&`NPSMDesktopShellLogging::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v5 = &`NPSMDesktopShellLogging::Instance'::`2'::wrapper;
    v8 = &qword_18098ED58;
    qword_18098ED58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098ED70 = (__int64)&`NPSMDesktopShellLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a200443fcc2186113617defd521f394c_::_lambda_invoker_cdecl_);
    v6 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v5, v2, v3);
  }
  v4 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = v8[1];
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(NPSMDesktopShellTelemetry *))(v4 + 8))(this);
}
