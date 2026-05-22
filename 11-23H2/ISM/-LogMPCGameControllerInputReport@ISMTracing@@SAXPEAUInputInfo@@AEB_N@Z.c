/*
 * XREFs of ?LogMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C6858
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800C6FB0 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::LogMPCGameControllerInputReport(struct InputInfo *a1, const bool *a2)
{
  __int64 v4; // rcx
  char v5; // al
  char v6; // [rsp+38h] [rbp-59h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-55h] BYREF
  int v8; // [rsp+40h] [rbp-51h] BYREF
  int v9; // [rsp+44h] [rbp-4Dh] BYREF
  int v10; // [rsp+48h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-41h] BYREF
  union _RTL_RUN_ONCE *v12; // [rsp+58h] [rbp-39h] BYREF
  int v13; // [rsp+60h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+68h] [rbp-29h] BYREF
  int *v15; // [rsp+88h] [rbp-9h]
  int v16; // [rsp+90h] [rbp-1h]
  int v17; // [rsp+94h] [rbp+3h]
  int *v18; // [rsp+98h] [rbp+7h]
  int v19; // [rsp+A0h] [rbp+Fh]
  int v20; // [rsp+A4h] [rbp+13h]
  int *v21; // [rsp+A8h] [rbp+17h]
  int v22; // [rsp+B0h] [rbp+1Fh]
  int v23; // [rsp+B4h] [rbp+23h]
  union _RTL_RUN_ONCE **v24; // [rsp+B8h] [rbp+27h]
  int v25; // [rsp+C0h] [rbp+2Fh]
  int v26; // [rsp+C4h] [rbp+33h]
  char *v27; // [rsp+C8h] [rbp+37h]
  int v28; // [rsp+D0h] [rbp+3Fh]
  int v29; // [rsp+D4h] [rbp+43h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v12 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v13 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v12);
  }
  v4 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
  {
    v5 = *a2;
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v20 = 0;
    v17 = 0;
    v6 = v5;
    v12 = (union _RTL_RUN_ONCE *)*((_QWORD *)a1 + 2);
    v8 = *((_DWORD *)a1 + 2);
    v9 = *((_DWORD *)a1 + 1);
    v10 = *(_DWORD *)a1;
    v27 = &v6;
    v24 = &v12;
    v21 = &v8;
    v18 = &v9;
    v15 = &v10;
    v22 = 4;
    v19 = 4;
    v16 = 4;
    v28 = 1;
    v25 = 8;
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_18022271B, 0LL, 0LL, 7u, &v14);
  }
}
