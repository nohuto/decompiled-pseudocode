/*
 * XREFs of ?HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z @ 0x18039C740
 * Callers:
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x180394634 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1803952A0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTe.c)
 */

void __fastcall CAppManagerTelemetry::HandleViewCreationFailure_(
        CAppManagerTelemetry *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        int a5)
{
  __int64 v8; // rdx
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+50h] [rbp-30h] BYREF
  int v15; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 *v16; // [rsp+58h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h] BYREF
  __int64 v18; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h] BYREF
  int v20; // [rsp+78h] [rbp-8h]
  CAppManagerTelemetry *fPending; // [rsp+A0h] [rbp+20h] BYREF

  fPending = this;
  v16 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`CAppManagerLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&fPending,
         (LPVOID *)&v16)
    && (_DWORD)fPending )
  {
    v19 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
    v16 = &qword_18098DB60;
    qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v20 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v19, v8, v9);
  }
  v10 = (_DWORD *)v16[1];
  if ( *v10 > 5u )
  {
    if ( tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    {
      v14 = a5;
      v15 = a4;
      v17 = a3;
      v18 = (__int64)a2;
      v19 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned __int8 *)dword_180842272,
        v12,
        v13,
        (__int64)&v19,
        (const WCHAR **)&v18,
        (__int64)&v17,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
}
