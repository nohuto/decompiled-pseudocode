/*
 * XREFs of ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z @ 0x18019B98C
 * Callers:
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x18019B7F8 (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x1800B2BE8 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 */

void __fastcall InputETW::UIAHitTest::RequestUIAHitTest(int a1, int a2, unsigned __int8 a3, struct _GUID *a4)
{
  int v5; // edi
  __int64 v8; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-59h] BYREF
  int v10; // [rsp+3Ch] [rbp-55h] BYREF
  int v11; // [rsp+40h] [rbp-51h] BYREF
  int v12; // [rsp+44h] [rbp-4Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-49h] BYREF
  LPINIT_ONCE v14; // [rsp+50h] [rbp-41h] BYREF
  int v15; // [rsp+58h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+68h] [rbp-29h] BYREF
  int *v17; // [rsp+88h] [rbp-9h]
  int v18; // [rsp+90h] [rbp-1h]
  int v19; // [rsp+94h] [rbp+3h]
  int *v20; // [rsp+98h] [rbp+7h]
  int v21; // [rsp+A0h] [rbp+Fh]
  int v22; // [rsp+A4h] [rbp+13h]
  int *v23; // [rsp+A8h] [rbp+17h]
  int v24; // [rsp+B0h] [rbp+1Fh]
  int v25; // [rsp+B4h] [rbp+23h]
  struct _GUID *v26; // [rsp+B8h] [rbp+27h]
  int v27; // [rsp+C0h] [rbp+2Fh]
  int v28; // [rsp+C4h] [rbp+33h]

  v5 = a3;
  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v14 = &`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v15 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v14);
    }
    v8 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 5u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
    {
      v28 = 0;
      v25 = 0;
      v22 = 0;
      v19 = 0;
      v23 = &v10;
      v20 = &v11;
      v17 = &v12;
      v24 = 4;
      v21 = 4;
      v18 = 4;
      v10 = v5;
      v11 = a2;
      v12 = a1;
      v26 = a4;
      v27 = 16;
      tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_180206514, 0LL, 0LL, 6u, &v16);
    }
  }
}
