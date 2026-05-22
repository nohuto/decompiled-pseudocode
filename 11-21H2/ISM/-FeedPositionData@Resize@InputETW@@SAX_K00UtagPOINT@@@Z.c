/*
 * XREFs of ?FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x180145458
 * Callers:
 *     ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x18014525C (-FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800E02A0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x180143E70 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

void __fastcall InputETW::Resize::FeedPositionData(union _RTL_RUN_ONCE *a1, __int64 a2, __int64 a3, struct tagPOINT a4)
{
  LONG x; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  WINBOOL fPending; // [rsp+58h] [rbp+7h] BYREF
  LPVOID Context; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+68h] [rbp+17h] BYREF
  __int64 v14; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+78h] [rbp+27h] BYREF
  __int64 v16; // [rsp+80h] [rbp+2Fh] BYREF
  LPINIT_ONCE v17; // [rsp+88h] [rbp+37h] BYREF
  int v18; // [rsp+90h] [rbp+3Fh]
  LONG y; // [rsp+D4h] [rbp+83h]

  y = a4.y;
  x = a4.x;
  if ( InputETW::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v17 = &`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v18 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v17);
    }
    v10 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v10 > 5u
      && (*(_BYTE *)(v10 + 16) & 1) != 0
      && (*(_QWORD *)(v10 + 24) & 1LL) == *(_QWORD *)(v10 + 24) )
    {
      v13 = y;
      v14 = x;
      v15 = a3;
      v16 = a2;
      v17 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v10,
        byte_180204FC6,
        v8,
        v9,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13);
    }
  }
}
