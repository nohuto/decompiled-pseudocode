/*
 * XREFs of ?DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z @ 0x18013E53C
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180140220 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180141668 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800E02A0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333333@Z @ 0x18013B6C4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPE.c)
 */

char __fastcall InputETW::DragNDrop::DragStarted(
        unsigned int a1,
        int *a2,
        int *a3,
        int *a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  union _RTL_RUN_ONCE *v10; // r14
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  WINBOOL fPending; // [rsp+88h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+90h] [rbp-59h] BYREF
  LPINIT_ONCE v20; // [rsp+98h] [rbp-51h] BYREF
  int v21; // [rsp+A0h] [rbp-49h]
  __int64 v22; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-31h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-29h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-21h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-11h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-9h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-1h] BYREF
  __int64 v31; // [rsp+F0h] [rbp+7h] BYREF
  __int64 v32; // [rsp+F8h] [rbp+Fh] BYREF

  v10 = (union _RTL_RUN_ONCE *)a1;
  LOBYTE(v13) = InputETW::IsEnabled(a1);
  if ( (_BYTE)v13 )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v20 = &`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v21 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v20);
    }
    LOBYTE(v13) = (_BYTE)Context;
    v16 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v16 > 5u && (*(_BYTE *)(v16 + 16) & 1) != 0 )
    {
      v13 = *(_QWORD *)(v16 + 24) & 1LL;
      if ( v13 == *(_QWORD *)(v16 + 24) )
      {
        v22 = a9;
        v23 = a8;
        v24 = a7;
        v25 = a6;
        v26 = a5;
        v27 = a4[1];
        v28 = *a4;
        v29 = a3[1];
        v30 = *a3;
        v31 = a2[1];
        v32 = *a2;
        v20 = v10;
        LOBYTE(v13) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v16,
                        byte_180204A3C,
                        v14,
                        v15,
                        (__int64)&v20,
                        (__int64)&v32,
                        (__int64)&v31,
                        (__int64)&v30,
                        (__int64)&v29,
                        (__int64)&v28,
                        (__int64)&v27,
                        (__int64)&v26,
                        (__int64)&v25,
                        (__int64)&v24,
                        (__int64)&v23,
                        (__int64)&v22);
      }
    }
  }
  return v13;
}
