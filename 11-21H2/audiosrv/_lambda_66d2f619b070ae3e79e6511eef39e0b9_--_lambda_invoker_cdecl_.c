/*
 * XREFs of _lambda_66d2f619b070ae3e79e6511eef39e0b9_::_lambda_invoker_cdecl_ @ 0x18000DF70
 * Callers:
 *     <none>
 * Callees:
 *     PubSebLevelEvent @ 0x18000E064 (PubSebLevelEvent.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 */

void __fastcall lambda_66d2f619b070ae3e79e6511eef39e0b9_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  int v3; // esi
  struct _Mtx_internal_imp_t *v4; // rbx
  union _RTL_RUN_ONCE *v5; // rdi
  int v6; // eax
  __int64 v7; // rcx
  char v8; // [rsp+38h] [rbp-29h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-25h] BYREF
  int v10; // [rsp+40h] [rbp-21h] BYREF
  LPVOID Contexta; // [rsp+48h] [rbp-19h] BYREF
  union _RTL_RUN_ONCE *v12; // [rsp+50h] [rbp-11h] BYREF
  int v13; // [rsp+58h] [rbp-9h]
  char v14[32]; // [rsp+68h] [rbp+7h] BYREF
  char *v15; // [rsp+88h] [rbp+27h]
  int v16; // [rsp+90h] [rbp+2Fh]
  int v17; // [rsp+94h] [rbp+33h]
  int *v18; // [rsp+98h] [rbp+37h]
  int v19; // [rsp+A0h] [rbp+3Fh]
  int v20; // [rsp+A4h] [rbp+43h]

  v4 = (struct _Mtx_internal_imp_t *)(Context + 8);
  v5 = (union _RTL_RUN_ONCE *)Context;
  v6 = _Mtx_lock((_Mtx_t)(Context + 8));
  if ( v6 )
  {
    std::_Throw_C_error(v6);
    __debugbreak();
LABEL_12:
    v12 = v5;
    Contexta = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v13 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v12);
    goto LABEL_8;
  }
  if ( LODWORD(v5->Ptr) || !LOBYTE(v5[11].Ptr) )
    goto LABEL_10;
  v3 = PubSebLevelEvent(WNF_SEB_AUDIO_ACTIVITY, 0LL);
  if ( v3 >= 0 )
    LOBYTE(v5[11].Ptr) = 0;
  Contexta = 0LL;
  v5 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Contexta)
    && fPending )
  {
    goto LABEL_12;
  }
LABEL_8:
  v7 = *((_QWORD *)Contexta + 1);
  if ( *(_DWORD *)v7 > 4u
    && (*(_BYTE *)(v7 + 16) & 0x40) != 0
    && (*(_QWORD *)(v7 + 24) & 0x40LL) == *(_QWORD *)(v7 + 24) )
  {
    v20 = 0;
    v17 = 0;
    v18 = &v10;
    v19 = 4;
    v15 = &v8;
    v10 = v3;
    v8 = 0;
    v16 = 1;
    tlgWriteTransfer_EtwEventWriteTransfer(v7, (unsigned int)&unk_18018AF4B, 0, 0, 4, (__int64)v14);
  }
LABEL_10:
  _Mtx_unlock(v4);
}
