/*
 * XREFs of ?StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z @ 0x18001FC64
 * Callers:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180020CC0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800231C8 (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD744 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CFramePresentationTelemetry::PresentWindow::StartActivity(
        CFramePresentationTelemetry::PresentWindow *this,
        int a2,
        HWND a3,
        HWND a4)
{
  _DWORD *v8; // rdi
  DWORD CurrentThreadId; // eax
  int v10; // eax
  __int64 v11; // r8
  WINBOOL fPending; // [rsp+38h] [rbp-79h] BYREF
  int v13; // [rsp+3Ch] [rbp-75h] BYREF
  DWORD v14; // [rsp+40h] [rbp-71h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-69h] BYREF
  union _RTL_RUN_ONCE *v16; // [rsp+50h] [rbp-61h] BYREF
  int v17; // [rsp+58h] [rbp-59h]
  HWND v18; // [rsp+60h] [rbp-51h] BYREF
  HWND v19; // [rsp+68h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+78h] [rbp-39h] BYREF
  union _RTL_RUN_ONCE **v21; // [rsp+98h] [rbp-19h]
  int v22; // [rsp+A0h] [rbp-11h]
  int v23; // [rsp+A4h] [rbp-Dh]
  DWORD *v24; // [rsp+A8h] [rbp-9h]
  int v25; // [rsp+B0h] [rbp-1h]
  int v26; // [rsp+B4h] [rbp+3h]
  int *v27; // [rsp+B8h] [rbp+7h]
  int v28; // [rsp+C0h] [rbp+Fh]
  int v29; // [rsp+C4h] [rbp+13h]
  HWND *v30; // [rsp+C8h] [rbp+17h]
  int v31; // [rsp+D0h] [rbp+1Fh]
  int v32; // [rsp+D4h] [rbp+23h]
  HWND *v33; // [rsp+D8h] [rbp+27h]
  int v34; // [rsp+E0h] [rbp+2Fh]
  int v35; // [rsp+E4h] [rbp+33h]

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v16 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_18098DB60;
    qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v17 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v16);
  }
  v8 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v8 > 5u )
  {
    v18 = a4;
    v19 = a3;
    v13 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v16 = 0LL;
    v14 = CurrentThreadId;
    v10 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v11 = *((_QWORD *)this + 6);
    v35 = 0;
    v32 = 0;
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v33 = &v18;
    v30 = &v19;
    v27 = &v13;
    v24 = &v14;
    v21 = &v16;
    v34 = 8;
    v31 = 8;
    v28 = 4;
    v25 = 4;
    v22 = 8;
    tlgWriteTransfer_EventWriteTransfer((int)v8, (int)&dword_180846235, v11 + 8, v10, 7u, &v20);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(this);
}
