/*
 * XREFs of ?DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180148E28
 * Callers:
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180148B24 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014A30C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800E02A0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333333@Z @ 0x18013B4B4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 */

char __fastcall InputETW::Edgy::DragEnded(
        unsigned int a1,
        int *a2,
        int *a3,
        int *a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  union _RTL_RUN_ONCE *v8; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  WINBOOL fPending; // [rsp+78h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+80h] [rbp-39h] BYREF
  LPINIT_ONCE v18; // [rsp+88h] [rbp-31h] BYREF
  int v19; // [rsp+90h] [rbp-29h]
  __int64 v20; // [rsp+98h] [rbp-21h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+1Fh] BYREF

  v8 = (union _RTL_RUN_ONCE *)a1;
  LOBYTE(v11) = InputETW::IsEnabled(a1);
  if ( (_BYTE)v11 )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v18 = &`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v19 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v18);
    }
    LOBYTE(v11) = (_BYTE)Context;
    v14 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v14 > 5u && (*(_BYTE *)(v14 + 16) & 1) != 0 )
    {
      v11 = *(_QWORD *)(v14 + 24) & 1LL;
      if ( v11 == *(_QWORD *)(v14 + 24) )
      {
        v20 = a7;
        v21 = a6;
        v22 = a5;
        v23 = a4[1];
        v24 = *a4;
        v25 = a3[1];
        v26 = *a3;
        v27 = a2[1];
        v28 = *a2;
        v18 = v8;
        LOBYTE(v11) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v14,
                        byte_1802055B9,
                        v12,
                        v13,
                        (__int64)&v18,
                        (__int64)&v28,
                        (__int64)&v27,
                        (__int64)&v26,
                        (__int64)&v25,
                        (__int64)&v24,
                        (__int64)&v23,
                        (__int64)&v22,
                        (__int64)&v21,
                        (__int64)&v20);
      }
    }
  }
  return v11;
}
