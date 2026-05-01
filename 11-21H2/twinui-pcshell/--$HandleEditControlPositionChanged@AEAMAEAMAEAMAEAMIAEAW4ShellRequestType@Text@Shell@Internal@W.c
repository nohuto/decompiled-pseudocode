/*
 * XREFs of ??$HandleEditControlPositionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAM000$$QEAIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18022F844
 * Callers:
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18022FDD0 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x180061928 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::HandleEditControlPositionChanged<float &,float &,float &,float &,unsigned int,enum Windows::Internal::Shell::Text::ShellRequestType &>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6)
{
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r10d
  int v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // xmm1_4
  int v18; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+54h] [rbp-1Ch] BYREF
  int v20; // [rsp+58h] [rbp-18h] BYREF
  int v21; // [rsp+5Ch] [rbp-14h] BYREF
  int v22; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v23[3]; // [rsp+64h] [rbp-Ch] BYREF

  v10 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
          (__int64)a1,
          _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v10[1] > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn(v10[1], 16LL);
    if ( (_BYTE)v10 )
    {
      v14 = *a3;
      v20 = *a4;
      v15 = *a2;
      v21 = v14;
      v16 = *a1;
      v18 = *a6;
      v22 = v15;
      v19 = *a5;
      v23[0] = v16;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      v13,
                      (int)&unk_1806BCCFD,
                      v11,
                      v12,
                      (__int64)v23,
                      (__int64)&v22,
                      (__int64)&v21,
                      (__int64)&v20,
                      (__int64)&v19,
                      (__int64)&v18);
    }
  }
  return (char)v10;
}
