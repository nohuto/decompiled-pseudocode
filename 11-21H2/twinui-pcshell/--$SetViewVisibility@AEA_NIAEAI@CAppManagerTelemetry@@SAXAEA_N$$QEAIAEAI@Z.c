/*
 * XREFs of ??$SetViewVisibility@AEA_NIAEAI@CAppManagerTelemetry@@SAXAEA_N$$QEAIAEAI@Z @ 0x18030B5C0
 * Callers:
 *     ?_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z @ 0x18030BFFC (-_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

char __fastcall CAppManagerTelemetry::SetViewVisibility<bool &,unsigned int,unsigned int &>(char *a1, int *a2, int *a3)
{
  __int64 v6; // rdx
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char result; // al
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  char v12; // [rsp+38h] [rbp-39h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-35h] BYREF
  int v14; // [rsp+40h] [rbp-31h] BYREF
  int v15; // [rsp+44h] [rbp-2Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  LPINIT_ONCE v17; // [rsp+50h] [rbp-21h] BYREF
  int v18; // [rsp+58h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+68h] [rbp-9h] BYREF
  char *v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+94h] [rbp+23h]
  int *v23; // [rsp+98h] [rbp+27h]
  int v24; // [rsp+A0h] [rbp+2Fh]
  int v25; // [rsp+A4h] [rbp+33h]
  int *v26; // [rsp+A8h] [rbp+37h]
  int v27; // [rsp+B0h] [rbp+3Fh]
  int v28; // [rsp+B4h] [rbp+43h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v17 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v18 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v17, v6, v7);
  }
  result = (char)Context;
  v9 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v9 > 5u )
  {
    result = tlgKeywordOn((__int64)v9, 0x200000000000LL);
    if ( result )
    {
      v11 = *a3;
      v28 = 0;
      v25 = 0;
      v22 = 0;
      v14 = v11;
      v15 = *a2;
      v12 = *a1;
      v26 = &v14;
      v23 = &v15;
      v20 = &v12;
      v27 = 4;
      v24 = 4;
      v21 = 1;
      return tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1806A0740, 0LL, 0LL, 5u, &v19);
    }
  }
  return result;
}
