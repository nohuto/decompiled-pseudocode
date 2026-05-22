/*
 * XREFs of ?OnFocusRequest@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x18019FDB0
 * Callers:
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18019FE88 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800A912C (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputETW::ContextualProcessing::OnFocusRequest(const unsigned __int16 *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  LPINIT_ONCE v5; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+38h] [rbp-10h]
  WINBOOL v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v5 = &`InputETW::Instance'::`2'::wrapper;
    v8 = &qword_180242E40;
    qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v6 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v5);
  }
  v4 = v8[1];
  if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
  {
    v9 = (__int64)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v4,
      (unsigned __int8 *)dword_1802066EA,
      v2,
      v3,
      (unsigned __int16 **)&v9);
  }
}
