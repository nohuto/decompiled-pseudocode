/*
 * XREFs of ?FeedAnimationData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z @ 0x18013E8C4
 * Callers:
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x18013EA54 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800E02A0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18013B7F4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplat.c)
 */

char __fastcall InputETW::DragNDrop::FeedAnimationData(
        union _RTL_RUN_ONCE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  int v6; // ebx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  WINBOOL fPending; // [rsp+68h] [rbp-19h] BYREF
  int v16; // [rsp+6Ch] [rbp-15h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-11h] BYREF
  LPINIT_ONCE v18; // [rsp+78h] [rbp-9h] BYREF
  int v19; // [rsp+80h] [rbp-1h]
  double v20; // [rsp+88h] [rbp+7h] BYREF
  double v21; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+98h] [rbp+17h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+A8h] [rbp+27h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+2Fh] BYREF
  int v26; // [rsp+F4h] [rbp+73h]

  v26 = HIDWORD(a4);
  v6 = a4;
  LOBYTE(v10) = InputETW::IsEnabled((char)a1);
  if ( (_BYTE)v10 )
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
    LOBYTE(v10) = (_BYTE)Context;
    v13 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v13 > 5u && (*(_BYTE *)(v13 + 16) & 1) != 0 )
    {
      v10 = *(_QWORD *)(v13 + 24) & 1LL;
      if ( v10 == *(_QWORD *)(v13 + 24) )
      {
        v16 = a6;
        v22 = v26;
        v23 = v6;
        v24 = a3;
        v25 = a2;
        v18 = a1;
        v20 = *((float *)&a5 + 1);
        v21 = *(float *)&a5;
        LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                        v13,
                        byte_180204C32,
                        v11,
                        v12,
                        (__int64)&v18,
                        (__int64)&v25,
                        (__int64)&v24,
                        (__int64)&v23,
                        (__int64)&v22,
                        (__int64)&v21,
                        (__int64)&v20,
                        (__int64)&v16);
      }
    }
  }
  return v10;
}
