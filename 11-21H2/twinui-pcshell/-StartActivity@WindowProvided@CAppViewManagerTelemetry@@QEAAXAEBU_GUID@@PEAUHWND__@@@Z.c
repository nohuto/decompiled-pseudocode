/*
 * XREFs of ?StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z @ 0x1802F8AB4
 * Callers:
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z @ 0x1802FB2B0 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007A358 (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

void __fastcall CAppViewManagerTelemetry::WindowProvided::StartActivity(
        CAppViewManagerTelemetry::WindowProvided *this,
        const struct _GUID *a2,
        HWND a3)
{
  int v3; // esi
  __int64 v6; // rdx
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v8; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v10; // rax
  __int64 v11; // r8
  WINBOOL fPending; // [rsp+30h] [rbp-59h] BYREF
  int v13; // [rsp+34h] [rbp-55h] BYREF
  DWORD v14; // [rsp+38h] [rbp-51h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-49h] BYREF
  LPINIT_ONCE v16; // [rsp+48h] [rbp-41h] BYREF
  int v17; // [rsp+50h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-29h] BYREF
  LPINIT_ONCE *v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+8Ch] [rbp+3h]
  DWORD *v22; // [rsp+90h] [rbp+7h]
  int v23; // [rsp+98h] [rbp+Fh]
  int v24; // [rsp+9Ch] [rbp+13h]
  const struct _GUID *v25; // [rsp+A0h] [rbp+17h]
  int v26; // [rsp+A8h] [rbp+1Fh]
  int v27; // [rsp+ACh] [rbp+23h]
  int *v28; // [rsp+B0h] [rbp+27h]
  int v29; // [rsp+B8h] [rbp+2Fh]
  int v30; // [rsp+BCh] [rbp+33h]

  v3 = (int)a3;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v16 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v17 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v16, v6, v7);
  }
  v8 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v8 > 5u )
  {
    v13 = v3;
    CurrentThreadId = GetCurrentThreadId();
    v16 = 0LL;
    v14 = CurrentThreadId;
    v10 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v11 = *((_QWORD *)this + 6);
    v30 = 0;
    v27 = 0;
    v24 = 0;
    v21 = 0;
    v28 = &v13;
    v22 = &v14;
    v19 = &v16;
    v29 = 4;
    v23 = 4;
    v25 = a2;
    v26 = 16;
    v20 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v8,
      (unsigned __int8 *)dword_18069DAE0,
      (const GUID *)(v11 + 8),
      v10,
      6u,
      &v18);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CAppViewManagerTelemetry::WindowProvided *)((char *)this + 8));
}
