/*
 * XREFs of ?EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z @ 0x180149508
 * Callers:
 *     ?OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014AD38 (-OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProce.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18008D28C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800E02A0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::Edgy::EdgyRecognized(struct tagPOINT a1)
{
  LONG x; // ebx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  LPINIT_ONCE v5; // [rsp+30h] [rbp-10h] BYREF
  int v6; // [rsp+38h] [rbp-8h]
  LONG y; // [rsp+64h] [rbp+24h]
  WINBOOL fPending; // [rsp+68h] [rbp+28h] BYREF
  LPVOID Context; // [rsp+70h] [rbp+30h] BYREF
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF

  y = a1.y;
  x = a1.x;
  if ( InputETW::IsEnabled(a1.x) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v5 = &`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v6 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v5);
    }
    v4 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
    {
      v10 = y;
      v5 = (LPINIT_ONCE)x;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v4,
        byte_180205462,
        v2,
        v3,
        (__int64)&v5,
        (__int64)&v10);
    }
  }
}
