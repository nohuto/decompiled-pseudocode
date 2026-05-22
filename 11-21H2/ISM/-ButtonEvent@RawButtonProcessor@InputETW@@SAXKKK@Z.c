/*
 * XREFs of ?ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z @ 0x1801B4380
 * Callers:
 *     ?OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B4970 (-OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800E02A0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::RawButtonProcessor::ButtonEvent(int a1, int a2, unsigned int a3)
{
  union _RTL_RUN_ONCE *v3; // rbx
  __int64 v6; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-39h] BYREF
  int v8; // [rsp+3Ch] [rbp-35h] BYREF
  int v9; // [rsp+40h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  LPINIT_ONCE v11; // [rsp+50h] [rbp-21h] BYREF
  int v12; // [rsp+58h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+68h] [rbp-9h] BYREF
  int *v14; // [rsp+88h] [rbp+17h]
  int v15; // [rsp+90h] [rbp+1Fh]
  int v16; // [rsp+94h] [rbp+23h]
  int *v17; // [rsp+98h] [rbp+27h]
  int v18; // [rsp+A0h] [rbp+2Fh]
  int v19; // [rsp+A4h] [rbp+33h]
  LPINIT_ONCE *v20; // [rsp+A8h] [rbp+37h]
  int v21; // [rsp+B0h] [rbp+3Fh]
  int v22; // [rsp+B4h] [rbp+43h]

  v3 = (union _RTL_RUN_ONCE *)a3;
  if ( InputETW::IsEnabled(a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v11 = &`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v12 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v11);
    }
    v6 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
    {
      v22 = 0;
      v19 = 0;
      v16 = 0;
      v20 = &v11;
      v18 = 4;
      v17 = &v8;
      v14 = &v9;
      v15 = 4;
      v11 = v3;
      v8 = a2;
      v9 = a1;
      v21 = 8;
      tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1802069EA, 0LL, 0LL, 5u, &v13);
    }
  }
}
