/*
 * XREFs of ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x1800B6758
 * Callers:
 *     ??$MPCHolographicInputManager_RequestForegroundChange@AEA_KAEA_KAEAIAEAKAEA_N@ISMTracing@@SAXAEA_K0AEAIAEAKAEA_N@Z @ 0x1800B3434 (--$MPCHolographicInputManager_RequestForegroundChange@AEA_KAEA_KAEAIAEAKAEA_N@ISMTracing@@SAXAEA.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(
        ISMTracing *this,
        union _RTL_RUN_ONCE *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        bool a6)
{
  __int64 v9; // rcx
  bool v10; // [rsp+38h] [rbp-69h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-65h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-61h] BYREF
  int v13; // [rsp+44h] [rbp-5Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-59h] BYREF
  union _RTL_RUN_ONCE *v15; // [rsp+50h] [rbp-51h] BYREF
  int v16; // [rsp+58h] [rbp-49h]
  __int64 v17; // [rsp+60h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+68h] [rbp-39h] BYREF
  union _RTL_RUN_ONCE **v19; // [rsp+88h] [rbp-19h]
  int v20; // [rsp+90h] [rbp-11h]
  int v21; // [rsp+94h] [rbp-Dh]
  __int64 *v22; // [rsp+98h] [rbp-9h]
  int v23; // [rsp+A0h] [rbp-1h]
  int v24; // [rsp+A4h] [rbp+3h]
  int *v25; // [rsp+A8h] [rbp+7h]
  int v26; // [rsp+B0h] [rbp+Fh]
  int v27; // [rsp+B4h] [rbp+13h]
  unsigned int *v28; // [rsp+B8h] [rbp+17h]
  int v29; // [rsp+C0h] [rbp+1Fh]
  int v30; // [rsp+C4h] [rbp+23h]
  bool *v31; // [rsp+C8h] [rbp+27h]
  int v32; // [rsp+D0h] [rbp+2Fh]
  int v33; // [rsp+D4h] [rbp+33h]

  if ( ISMTracing::IsEnabled((char)this) )
  {
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
    v9 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 1) != 0 && (*(_QWORD *)(v9 + 24) & 1LL) == *(_QWORD *)(v9 + 24) )
    {
      v33 = 0;
      v30 = 0;
      v27 = 0;
      v24 = 0;
      v21 = 0;
      v10 = a6;
      v12 = a5;
      v31 = &v10;
      v28 = &v12;
      v25 = &v13;
      v22 = &v17;
      v29 = 4;
      v26 = 4;
      v19 = &v15;
      v23 = 8;
      v20 = 8;
      v13 = a4;
      v17 = a3;
      v15 = a2;
      v32 = 1;
      tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_180221656, 0LL, 0LL, 7u, &v18);
    }
  }
}
