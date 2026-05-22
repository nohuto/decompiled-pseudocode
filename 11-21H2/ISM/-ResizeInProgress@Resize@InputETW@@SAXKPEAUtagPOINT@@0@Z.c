/*
 * XREFs of ?ResizeInProgress@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z @ 0x180146868
 * Callers:
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180146060 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800E02A0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x180143E70 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

void __fastcall InputETW::Resize::ResizeInProgress(unsigned int a1, struct tagPOINT *a2, struct tagPOINT *a3)
{
  union _RTL_RUN_ONCE *v4; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  LPVOID Context; // [rsp+50h] [rbp+7h] BYREF
  __int64 y; // [rsp+58h] [rbp+Fh] BYREF
  __int64 x; // [rsp+60h] [rbp+17h] BYREF
  __int64 v12; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+70h] [rbp+27h] BYREF
  LPINIT_ONCE v14; // [rsp+78h] [rbp+2Fh] BYREF
  int v15; // [rsp+80h] [rbp+37h]
  WINBOOL fPending; // [rsp+C8h] [rbp+7Fh] BYREF

  v4 = (union _RTL_RUN_ONCE *)a1;
  if ( InputETW::IsEnabled(a1) )
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
      y = a3->y;
      x = a3->x;
      v12 = a2->y;
      v13 = a2->x;
      v14 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v8,
        byte_180204F50,
        v6,
        v7,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&x,
        (__int64)&y);
    }
  }
}
