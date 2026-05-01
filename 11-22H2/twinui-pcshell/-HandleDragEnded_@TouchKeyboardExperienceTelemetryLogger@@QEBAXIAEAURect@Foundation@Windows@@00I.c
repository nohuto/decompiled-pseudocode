/*
 * XREFs of ?HandleDragEnded_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEAURect@Foundation@Windows@@00II@Z @ 0x180532B1C
 * Callers:
 *     ??$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAURect@Foundation@Windows@@11$$QEAI2@Z @ 0x180530664 (--$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTe.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444444@Z @ 0x18053178C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_18053178C.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::HandleDragEnded_(
        TouchKeyboardExperienceTelemetryLogger *this,
        int a2,
        struct Windows::Foundation::Rect *a3,
        struct Windows::Foundation::Rect *a4,
        struct Windows::Foundation::Rect *a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned int v14; // [rsp+A8h] [rbp-1h] BYREF
  int v15; // [rsp+ACh] [rbp+3h] BYREF
  int v16; // [rsp+B0h] [rbp+7h] BYREF
  int v17; // [rsp+B4h] [rbp+Bh] BYREF
  int v18; // [rsp+B8h] [rbp+Fh] BYREF
  int v19; // [rsp+BCh] [rbp+13h] BYREF
  int v20; // [rsp+C0h] [rbp+17h] BYREF
  int v21; // [rsp+C4h] [rbp+1Bh] BYREF
  int v22; // [rsp+C8h] [rbp+1Fh] BYREF
  int v23; // [rsp+CCh] [rbp+23h] BYREF
  int v24; // [rsp+D0h] [rbp+27h] BYREF
  int v25; // [rsp+D4h] [rbp+2Bh] BYREF
  int v26; // [rsp+D8h] [rbp+2Fh] BYREF
  int v27; // [rsp+DCh] [rbp+33h] BYREF
  __int64 v28; // [rsp+E0h] [rbp+37h] BYREF
  TouchKeyboardExperienceTelemetryLogger *v29; // [rsp+F8h] [rbp+4Fh] BYREF

  v29 = this;
  v10 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
          (__int64)this,
          _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v10[1] > 5u )
  {
    if ( tlgKeywordOn(v10[1], 0x400000000000LL) )
    {
      LODWORD(v29) = a7;
      v14 = a6;
      v15 = *((_DWORD *)a5 + 3);
      v16 = *((_DWORD *)a5 + 2);
      v17 = *((_DWORD *)a5 + 1);
      v18 = *(_DWORD *)a5;
      v19 = *((_DWORD *)a4 + 3);
      v20 = *((_DWORD *)a4 + 2);
      v21 = *((_DWORD *)a4 + 1);
      v22 = *(_DWORD *)a4;
      v23 = *((_DWORD *)a3 + 3);
      v24 = *((_DWORD *)a3 + 2);
      v25 = *((_DWORD *)a3 + 1);
      v26 = *(_DWORD *)a3;
      v27 = a2;
      v28 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v13,
        byte_180865271,
        v11,
        v12,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v29);
    }
  }
}
