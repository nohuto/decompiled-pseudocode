/*
 * XREFs of ?HandleInputPaneTryShow_@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBD0_NH11110@Z @ 0x18053307C
 * Callers:
 *     ??$HandleInputPaneTryShow@PEBDPEBDAEAU?$atomic@_N@std@@HAEAU12@AEA_NAEAU12@AEAU12@PEBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBD0AEAU?$atomic@_N@std@@$$QEAH1AEA_N110@Z @ 0x1805306E4 (--$HandleInputPaneTryShow@PEBDPEBDAEAU-$atomic@_N@std@@HAEAU12@AEA_NAEAU12@AEAU12@PEBD@TouchKeyb.c)
 *     ??$HandleInputPaneTryShow@PEBDPEBD_NH_NAEA_NAEAU?$atomic@_N@std@@AEAU12@PEBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBD0$$QEA_N$$QEAH1AEA_NAEAU?$atomic@_N@std@@40@Z @ 0x18053079C (--$HandleInputPaneTryShow@PEBDPEBD_NH_NAEA_NAEAU-$atomic@_N@std@@AEAU12@PEBD@TouchKeyboardExperi.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@44443AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800022D0 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U-.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::HandleInputPaneTryShow_(
        TouchKeyboardExperienceTelemetryLogger *this,
        const char *a2,
        const char *a3,
        char a4,
        int a5,
        bool a6,
        bool a7,
        bool a8,
        bool a9,
        const char *a10)
{
  _DWORD *v13; // rcx
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // [rsp+78h] [rbp-9h] BYREF
  bool v18; // [rsp+79h] [rbp-8h] BYREF
  bool v19; // [rsp+7Ah] [rbp-7h] BYREF
  char v20; // [rsp+7Bh] [rbp-6h] BYREF
  int v21; // [rsp+7Ch] [rbp-5h] BYREF
  __int64 v22; // [rsp+80h] [rbp-1h] BYREF
  __int64 v23; // [rsp+88h] [rbp+7h] BYREF
  __int64 v24; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+98h] [rbp+17h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+37h] BYREF

  v26 = (__int64)this;
  v13 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                    (__int64)this,
                    _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v13 > 5u )
  {
    if ( tlgKeywordOn((__int64)v13, 16LL) )
    {
      v23 = (__int64)a10;
      LOBYTE(v26) = a9;
      v17 = a8;
      v18 = a7;
      v19 = a6;
      v21 = a5;
      v22 = 0x1000000LL;
      v20 = a4;
      v24 = (__int64)a3;
      v25 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
        v14,
        (int)&dword_18086517A,
        v15,
        v16,
        (const wchar_t **)&v25,
        (const wchar_t **)&v24,
        (__int64)&v20,
        (__int64)&v21,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v26,
        (const wchar_t **)&v23,
        (__int64)&v22);
    }
  }
}
