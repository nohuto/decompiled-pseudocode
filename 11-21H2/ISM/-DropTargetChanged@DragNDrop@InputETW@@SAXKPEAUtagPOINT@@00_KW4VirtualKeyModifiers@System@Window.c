/*
 * XREFs of ?DropTargetChanged@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K1@Z @ 0x18013E708
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180140220 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800E02A0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333333333@Z @ 0x18013B5B0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 */

char __fastcall InputETW::DragNDrop::DropTargetChanged(
        unsigned int a1,
        int *a2,
        int *a3,
        int *a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  union _RTL_RUN_ONCE *v9; // r14
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  WINBOOL fPending; // [rsp+88h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+90h] [rbp-41h] BYREF
  LPINIT_ONCE v19; // [rsp+98h] [rbp-39h] BYREF
  int v20; // [rsp+A0h] [rbp-31h]
  __int64 v21; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-11h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-9h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-1h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+7h] BYREF
  __int64 v28; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v29; // [rsp+E8h] [rbp+17h] BYREF
  __int64 v30; // [rsp+F0h] [rbp+1Fh] BYREF

  v9 = (union _RTL_RUN_ONCE *)a1;
  LOBYTE(v12) = InputETW::IsEnabled(a1);
  if ( (_BYTE)v12 )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v19 = &`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v20 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v19);
    }
    LOBYTE(v12) = (_BYTE)Context;
    v15 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v15 > 5u && (*(_BYTE *)(v15 + 16) & 1) != 0 )
    {
      v12 = *(_QWORD *)(v15 + 24) & 1LL;
      if ( v12 == *(_QWORD *)(v15 + 24) )
      {
        v21 = a8;
        v22 = a7;
        v23 = a6;
        v24 = a5;
        v25 = a4[1];
        v26 = *a4;
        v27 = a3[1];
        v28 = *a3;
        v29 = a2[1];
        v30 = *a2;
        v19 = v9;
        LOBYTE(v12) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v15,
                        byte_180204D42,
                        v13,
                        v14,
                        (__int64)&v19,
                        (__int64)&v30,
                        (__int64)&v29,
                        (__int64)&v28,
                        (__int64)&v27,
                        (__int64)&v26,
                        (__int64)&v25,
                        (__int64)&v24,
                        (__int64)&v23,
                        (__int64)&v22,
                        (__int64)&v21);
      }
    }
  }
  return v12;
}
