/*
 * XREFs of ?HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z @ 0x1802E4900
 * Callers:
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x1802DD26C (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1802DDCF4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
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
  int v14; // [rsp+40h] [rbp-30h] BYREF
  int v15; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 *v16; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+60h] [rbp-10h]
  CAppManagerTelemetry *fPending; // [rsp+90h] [rbp+20h] BYREF

  fPending = this;
  v16 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`CAppManagerLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&fPending,
         (LPVOID *)&v16)
    && (_DWORD)fPending )
  {
    v18 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
    v16 = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v19 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v18, v8, v9);
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
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned __int8 *)dword_18069C9CA,
        v12,
        v13,
        (const WCHAR **)&v18,
        (__int64)&v17,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
}
