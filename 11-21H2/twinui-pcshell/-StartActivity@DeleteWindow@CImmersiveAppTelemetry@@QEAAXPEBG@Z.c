/*
 * XREFs of ?StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1800C6B48
 * Callers:
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x1800C6984 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007A358 (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

void __fastcall CImmersiveAppTelemetry::DeleteWindow::StartActivity(
        CImmersiveAppTelemetry::DeleteWindow *this,
        const unsigned __int16 *a2)
{
  _DWORD *v4; // rsi
  DWORD CurrentThreadId; // eax
  const GUID *v6; // r9
  const GUID *v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-39h] BYREF
  DWORD v13; // [rsp+34h] [rbp-35h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-31h] BYREF
  LPINIT_ONCE v15; // [rsp+40h] [rbp-29h] BYREF
  int v16; // [rsp+48h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+50h] [rbp-19h] BYREF
  LPINIT_ONCE *v18; // [rsp+70h] [rbp+7h]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  DWORD *v20; // [rsp+80h] [rbp+17h]
  __int64 v21; // [rsp+88h] [rbp+1Fh]
  const unsigned __int16 *v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+98h] [rbp+2Fh]
  int v24; // [rsp+9Ch] [rbp+33h]

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v15 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v16 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v15, v10, v11);
  }
  v4 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v4 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v15 = 0LL;
    v13 = CurrentThreadId;
    v6 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v7 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    if ( a2 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a2[v8] );
      v9 = 2 * v8 + 2;
    }
    else
    {
      a2 = &LocaleName;
      v9 = 2;
    }
    v23 = v9;
    v22 = a2;
    v20 = &v13;
    v24 = 0;
    v18 = &v15;
    v21 = 4LL;
    v19 = 8LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_18069F8CF, v7, v6, 5u, &v17);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CImmersiveAppTelemetry::DeleteWindow *)((char *)this + 8));
}
