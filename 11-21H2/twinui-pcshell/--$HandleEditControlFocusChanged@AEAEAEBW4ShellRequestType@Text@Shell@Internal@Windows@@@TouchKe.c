/*
 * XREFs of ??$HandleEditControlFocusChanged@AEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18022F7DA
 * Callers:
 *     ?HandleEditControlFocusChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804816C0 (-HandleEditControlFocusChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18005A314 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::HandleEditControlFocusChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType const &>(
        _BYTE *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  _DWORD *v4; // rcx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // zf
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  bool v11; // [rsp+50h] [rbp+18h] BYREF

  v10 = a2;
  v3 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v4 = (_DWORD *)v3[1];
  if ( *v4 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)v4, 16LL);
    if ( (_BYTE)v3 )
    {
      v8 = *a1 == 0;
      LOBYTE(v10) = 0;
      v11 = !v8;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                     v5,
                     (int)&unk_1806BCC47,
                     v6,
                     v7,
                     (__int64)&v11,
                     (__int64)&v10);
    }
  }
  return (char)v3;
}
