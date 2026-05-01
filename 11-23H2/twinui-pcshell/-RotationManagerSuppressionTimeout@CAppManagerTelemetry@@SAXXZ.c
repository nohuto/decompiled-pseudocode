/*
 * XREFs of ?RotationManagerSuppressionTimeout@CAppManagerTelemetry@@SAXXZ @ 0x1803AA028
 * Callers:
 *     _lambda_fc741a4743938d06b405cea5fdae9784_::operator() @ 0x1803A9AD8 (_lambda_fc741a4743938d06b405cea5fdae9784_--operator().c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

void CAppManagerTelemetry::RotationManagerSuppressionTimeout(void)
{
  __int64 v0; // rdx
  void (*v1)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-38h] BYREF

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v6.Ptr = (ULONGLONG)&`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_18098DB60;
    qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v6.Size = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v0, v1);
  }
  v2 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x200000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_1808431C7, 0LL, 0LL, 2u, &v6);
  }
}
