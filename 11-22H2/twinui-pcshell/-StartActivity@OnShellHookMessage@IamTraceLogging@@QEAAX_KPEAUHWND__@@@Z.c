/*
 * XREFs of ?StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z @ 0x1801D6528
 * Callers:
 *     ??$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA?AV01@AEA_KAEAPEAUHWND__@@@Z @ 0x1801D02BC (--$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA-AV01@AEA_KAEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800231C8 (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD744 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall IamTraceLogging::OnShellHookMessage::StartActivity(
        IamTraceLogging::OnShellHookMessage *this,
        __int64 a2,
        HWND a3)
{
  __int64 v6; // rdx
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v8; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v10; // rax
  __int64 v11; // r8
  WINBOOL fPending; // [rsp+30h] [rbp-59h] BYREF
  DWORD v13; // [rsp+34h] [rbp-55h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-51h] BYREF
  union _RTL_RUN_ONCE *v15; // [rsp+40h] [rbp-49h] BYREF
  int v16; // [rsp+48h] [rbp-41h]
  HWND v17; // [rsp+50h] [rbp-39h] BYREF
  __int64 v18; // [rsp+58h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+60h] [rbp-29h] BYREF
  union _RTL_RUN_ONCE **v20; // [rsp+80h] [rbp-9h]
  int v21; // [rsp+88h] [rbp-1h]
  int v22; // [rsp+8Ch] [rbp+3h]
  DWORD *v23; // [rsp+90h] [rbp+7h]
  int v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+9Ch] [rbp+13h]
  __int64 *v26; // [rsp+A0h] [rbp+17h]
  int v27; // [rsp+A8h] [rbp+1Fh]
  int v28; // [rsp+ACh] [rbp+23h]
  HWND *v29; // [rsp+B0h] [rbp+27h]
  int v30; // [rsp+B8h] [rbp+2Fh]
  int v31; // [rsp+BCh] [rbp+33h]

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v15 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_18098DB60;
    qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v16 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v15, v6, v7);
  }
  v8 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v8 > 5u )
  {
    v17 = a3;
    v18 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v15 = 0LL;
    v13 = CurrentThreadId;
    v10 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v11 = *((_QWORD *)this + 6);
    v31 = 0;
    v28 = 0;
    v25 = 0;
    v22 = 0;
    v29 = &v17;
    v26 = &v18;
    v23 = &v13;
    v20 = &v15;
    v30 = 8;
    v27 = 8;
    v21 = 8;
    v24 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v8,
      (unsigned __int8 *)dword_1808421D5,
      (const GUID *)(v11 + 8),
      v10,
      6u,
      &v19);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
