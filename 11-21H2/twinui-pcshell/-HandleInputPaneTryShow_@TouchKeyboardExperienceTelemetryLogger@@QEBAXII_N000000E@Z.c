/*
 * XREFs of ?HandleInputPaneTryShow_@TouchKeyboardExperienceTelemetryLogger@@QEBAXII_N000000E@Z @ 0x180481A98
 * Callers:
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481930 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@4444444@Z @ 0x18047FD04 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteT.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::HandleInputPaneTryShow_(
        TouchKeyboardExperienceTelemetryLogger *this,
        int a2,
        int a3,
        char a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8,
        bool a9,
        bool a10,
        char a11)
{
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // [rsp+70h] [rbp-10h] BYREF
  bool v19; // [rsp+71h] [rbp-Fh] BYREF
  bool v20; // [rsp+72h] [rbp-Eh] BYREF
  bool v21; // [rsp+73h] [rbp-Dh] BYREF
  bool v22; // [rsp+74h] [rbp-Ch] BYREF
  bool v23; // [rsp+75h] [rbp-Bh] BYREF
  _BYTE v24[2]; // [rsp+76h] [rbp-Ah] BYREF
  int v25; // [rsp+78h] [rbp-8h] BYREF
  int v26; // [rsp+7Ch] [rbp-4h] BYREF
  TouchKeyboardExperienceTelemetryLogger *v27; // [rsp+90h] [rbp+10h] BYREF

  v27 = this;
  v14 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                    (__int64)this,
                    _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v14 > 5u )
  {
    if ( tlgKeywordOn((__int64)v14, 16LL) )
    {
      LOBYTE(v27) = a11;
      v18 = a10;
      v19 = a9;
      v20 = a8;
      v21 = a7;
      v22 = a6;
      v23 = a5;
      v24[0] = a4;
      v25 = a3;
      v26 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v15,
        byte_1806BD7FD,
        v16,
        v17,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v27);
    }
  }
}
