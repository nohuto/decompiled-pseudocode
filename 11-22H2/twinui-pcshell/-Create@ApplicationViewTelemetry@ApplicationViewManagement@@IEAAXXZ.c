/*
 * XREFs of ?Create@ApplicationViewTelemetry@ApplicationViewManagement@@IEAAXXZ @ 0x1801C5EEC
 * Callers:
 *     ??1Completer@?$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAA@XZ @ 0x1801C5EB0 (--1Completer@-$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QE.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTelemetry::Create(
        ApplicationViewManagement::ApplicationViewTelemetry *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
         0,
         &v7,
         (LPVOID *)&v8)
    && v7 )
  {
    v5 = &`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
    v8 = &qword_18098DDC8;
    qword_18098DDC8 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DDE0 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    v6 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v5, v3, v4);
  }
  v2 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = v8[1];
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(ApplicationViewManagement::ApplicationViewTelemetry *))(v2 + 8))(this);
}
