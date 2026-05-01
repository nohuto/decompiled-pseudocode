/*
 * XREFs of ?FrameManagerCrashed@CAppManagerTelemetry@@SAXXZ @ 0x1802FFA24
 * Callers:
 *     ?_HandleFrameManagerCrash@CApplicationFrameService@@AEAAXXZ @ 0x180300F14 (-_HandleFrameManagerCrash@CApplicationFrameService@@AEAAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

void CAppManagerTelemetry::FrameManagerCrashed(void)
{
  __int64 v0; // rdx
  void (*v1)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-9h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  __int64 v6; // [rsp+40h] [rbp+7h] BYREF
  int v7; // [rsp+48h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp+17h] BYREF
  __int64 *v9; // [rsp+70h] [rbp+37h]
  int v10; // [rsp+78h] [rbp+3Fh]
  int v11; // [rsp+7Ch] [rbp+43h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v6 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v6, v0, v1);
  }
  v2 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x200000000000LL) )
    {
      v11 = 0;
      v9 = &v6;
      v6 = 0x1000000LL;
      v10 = 8;
      tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_18069F39F, 0LL, 0LL, 3u, &v8);
    }
  }
}
