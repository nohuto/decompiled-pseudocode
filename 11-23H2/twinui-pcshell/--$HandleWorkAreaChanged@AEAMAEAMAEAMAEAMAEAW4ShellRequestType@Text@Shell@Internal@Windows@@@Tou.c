/*
 * XREFs of ??$HandleWorkAreaChanged@AEAMAEAMAEAMAEAMAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAM000AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18014B6EC
 * Callers:
 *     ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18014A520 (-HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800024E8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::HandleWorkAreaChanged<float &,float &,float &,float &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        _BYTE *a5)
{
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  int v13; // xmm1_4
  int v14; // xmm0_4
  int v15; // xmm1_4
  _BYTE v17[4]; // [rsp+50h] [rbp-20h] BYREF
  int v18; // [rsp+54h] [rbp-1Ch] BYREF
  int v19; // [rsp+58h] [rbp-18h] BYREF
  int v20; // [rsp+5Ch] [rbp-14h] BYREF
  int v21; // [rsp+60h] [rbp-10h] BYREF
  __int64 v22; // [rsp+68h] [rbp-8h] BYREF

  v9 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v9[1] > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn(v9[1], 16LL);
    if ( (_BYTE)v9 )
    {
      v13 = *a3;
      v18 = *a4;
      v14 = *a2;
      v19 = v13;
      v15 = *a1;
      v17[0] = *a5;
      v20 = v14;
      v21 = v15;
      v22 = 0x1000000LL;
      LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v12,
                     (int)&unk_1808647A7,
                     v10,
                     v11,
                     (__int64)&v21,
                     (__int64)&v20,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)v17,
                     (__int64)&v22);
    }
  }
  return (char)v9;
}
