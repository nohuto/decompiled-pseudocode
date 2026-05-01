/*
 * XREFs of ?HostedPosSet_@TouchKeyboardExperienceTelemetryLogger@@QEBAXURect@Foundation@Windows@@@Z @ 0x180511884
 * Callers:
 *     ??$HostedPosSet@URect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAURect@Foundation@Windows@@@Z @ 0x1802DA056 (--$HostedPosSet@URect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAURect.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18001C4D0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::HostedPosSet_(__int64 a1, int *a2)
{
  __int64 *v3; // rax
  _DWORD *v4; // rcx
  int v5; // ecx
  int v7; // [rsp+50h] [rbp-18h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF
  int v11; // [rsp+88h] [rbp+20h] BYREF

  v9 = a1;
  v3 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v4 = (_DWORD *)v3[1];
  if ( *v4 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)v4, 16LL);
    if ( (_BYTE)v3 )
    {
      LODWORD(v9) = a2[3];
      v10 = a2[2];
      v11 = a2[1];
      v7 = *a2;
      v8 = 0x1000000LL;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v5,
                     (int)&unk_18085DD3B,
                     0,
                     0,
                     (__int64)&v8,
                     (__int64)&v7,
                     (__int64)&v11,
                     (__int64)&v10,
                     (__int64)&v9);
    }
  }
  return (char)v3;
}
