/*
 * XREFs of ?MPCHolographicInputManager_OnKeyboardKeyPress_@ISMTracing@@QEAAXJKK_N@Z @ 0x1800B5F4C
 * Callers:
 *     ??$MPCHolographicInputManager_OnKeyboardKeyPress@AEAJAEAKW4InputType@@AEA_N@ISMTracing@@SAXAEAJAEAK$$QEAW4InputType@@AEA_N@Z @ 0x1800B3090 (--$MPCHolographicInputManager_OnKeyboardKeyPress@AEAJAEAKW4InputType@@AEA_N@ISMTracing@@SAXAEAJA.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_OnKeyboardKeyPress_(
        ISMTracing *this,
        int a2,
        int a3,
        int a4,
        bool a5)
{
  __int64 v8; // rcx
  bool v9; // [rsp+38h] [rbp-51h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v11; // [rsp+40h] [rbp-49h] BYREF
  int v12; // [rsp+44h] [rbp-45h] BYREF
  int v13; // [rsp+48h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-39h] BYREF
  union _RTL_RUN_ONCE *v15; // [rsp+58h] [rbp-31h] BYREF
  int v16; // [rsp+60h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+68h] [rbp-21h] BYREF
  int *v18; // [rsp+88h] [rbp-1h]
  int v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+94h] [rbp+Bh]
  int *v21; // [rsp+98h] [rbp+Fh]
  int v22; // [rsp+A0h] [rbp+17h]
  int v23; // [rsp+A4h] [rbp+1Bh]
  int *v24; // [rsp+A8h] [rbp+1Fh]
  int v25; // [rsp+B0h] [rbp+27h]
  int v26; // [rsp+B4h] [rbp+2Bh]
  bool *v27; // [rsp+B8h] [rbp+2Fh]
  int v28; // [rsp+C0h] [rbp+37h]
  int v29; // [rsp+C4h] [rbp+3Bh]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v15 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v16 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v15);
  }
  v8 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 5u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
  {
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v20 = 0;
    v9 = a5;
    v27 = &v9;
    v24 = &v11;
    v21 = &v12;
    v18 = &v13;
    v25 = 4;
    v22 = 4;
    v19 = 4;
    v11 = a4;
    v12 = a3;
    v13 = a2;
    v28 = 1;
    tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_180221491, 0LL, 0LL, 6u, &v17);
  }
}
