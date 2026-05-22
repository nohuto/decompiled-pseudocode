/*
 * XREFs of ?MPCManager_SendHomeGesture_@ISMTracing@@QEAAXKK_KII@Z @ 0x1800AFB00
 * Callers:
 *     ??$MPCManager_SendHomeGesture@AEAKAEAKAEA_KAEAIAEAI@ISMTracing@@SAXAEAK0AEA_KAEAI2@Z @ 0x1800ADC9C (--$MPCManager_SendHomeGesture@AEAKAEAKAEA_KAEAIAEAI@ISMTracing@@SAXAEAK0AEA_KAEAI2@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCManager_SendHomeGesture_(
        ISMTracing *this,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v9; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v11; // [rsp+3Ch] [rbp-85h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-81h] BYREF
  int v13; // [rsp+44h] [rbp-7Dh] BYREF
  int v14; // [rsp+48h] [rbp-79h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-71h] BYREF
  __int64 v16; // [rsp+58h] [rbp-69h] BYREF
  int v17; // [rsp+60h] [rbp-61h]
  __int64 v18; // [rsp+68h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+78h] [rbp-49h] BYREF
  __int64 *v20; // [rsp+98h] [rbp-29h]
  int v21; // [rsp+A0h] [rbp-21h]
  int v22; // [rsp+A4h] [rbp-1Dh]
  int *v23; // [rsp+A8h] [rbp-19h]
  int v24; // [rsp+B0h] [rbp-11h]
  int v25; // [rsp+B4h] [rbp-Dh]
  int *v26; // [rsp+B8h] [rbp-9h]
  int v27; // [rsp+C0h] [rbp-1h]
  int v28; // [rsp+C4h] [rbp+3h]
  __int64 *v29; // [rsp+C8h] [rbp+7h]
  int v30; // [rsp+D0h] [rbp+Fh]
  int v31; // [rsp+D4h] [rbp+13h]
  unsigned int *v32; // [rsp+D8h] [rbp+17h]
  int v33; // [rsp+E0h] [rbp+1Fh]
  int v34; // [rsp+E4h] [rbp+23h]
  unsigned int *v35; // [rsp+E8h] [rbp+27h]
  int v36; // [rsp+F0h] [rbp+2Fh]
  int v37; // [rsp+F4h] [rbp+33h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v16 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v17 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v16);
  }
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 4u
    && (*(_QWORD *)(v9 + 16) & 0x400000000001LL) != 0
    && (*(_QWORD *)(v9 + 24) & 0x400000000001LL) == *(_QWORD *)(v9 + 24) )
  {
    v37 = 0;
    v34 = 0;
    v31 = 0;
    v28 = 0;
    v25 = 0;
    v22 = 0;
    v11 = a6;
    v12 = a5;
    v35 = &v11;
    v32 = &v12;
    v29 = &v18;
    v26 = &v13;
    v23 = &v14;
    v20 = &v16;
    v36 = 4;
    v33 = 4;
    v30 = 8;
    v27 = 4;
    v24 = 4;
    v21 = 8;
    v18 = a4;
    v13 = a3;
    v14 = a2;
    v16 = 50331648LL;
    tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_180221358, 0LL, 0LL, 8u, &v19);
  }
}
