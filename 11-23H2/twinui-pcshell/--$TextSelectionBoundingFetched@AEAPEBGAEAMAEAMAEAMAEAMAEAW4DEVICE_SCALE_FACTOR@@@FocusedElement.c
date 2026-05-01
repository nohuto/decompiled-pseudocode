/*
 * XREFs of ??$TextSelectionBoundingFetched@AEAPEBGAEAMAEAMAEAMAEAMAEAW4DEVICE_SCALE_FACTOR@@@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBGAEAM111AEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1805361EC
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180536860 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180536300 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgW.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::TextSelectionBoundingFetched<unsigned short const * &,float &,float &,float &,float &,enum DEVICE_SCALE_FACTOR &>(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6)
{
  __int64 *v10; // rax
  int v11; // r10d
  int v12; // xmm0_4
  int v14; // [rsp+68h] [rbp+17h] BYREF
  int v15; // [rsp+6Ch] [rbp+1Bh] BYREF
  int v16; // [rsp+70h] [rbp+1Fh] BYREF
  int v17; // [rsp+74h] [rbp+23h] BYREF
  int v18; // [rsp+78h] [rbp+27h] BYREF
  __int64 v19; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+88h] [rbp+37h] BYREF

  v10 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
          (__int64)a1,
          _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v10[1] > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn(v10[1], 0x200000000000LL);
    if ( (_BYTE)v10 )
    {
      v16 = *a4;
      v18 = *a2;
      v14 = *a6;
      v19 = 0x2000000LL;
      v12 = *a5;
      v20 = *a1;
      v15 = v12;
      v17 = *a3;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                      v11,
                      (int)&dword_180865409,
                      (__int64)&v20,
                      (__int64)&v18,
                      (__int64)&v17,
                      (__int64)&v16,
                      (__int64)&v15,
                      (__int64)&v14,
                      (__int64)&v19);
    }
  }
  return (char)v10;
}
