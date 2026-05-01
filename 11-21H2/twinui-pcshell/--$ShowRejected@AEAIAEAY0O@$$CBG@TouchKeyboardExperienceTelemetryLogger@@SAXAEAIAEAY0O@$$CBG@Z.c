/*
 * XREFs of ??$ShowRejected@AEAIAEAY0O@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAY0O@$$CBG@Z @ 0x180458300
 * Callers:
 *     _lambda_41fdec79629b933043b6dd44cc33a98f_::operator() @ 0x1801AFDF8 (_lambda_41fdec79629b933043b6dd44cc33a98f_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1804589CC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::ShowRejected<unsigned int &,unsigned short const (&)[14]>(
        _DWORD *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  _DWORD *v4; // rcx
  int v5; // ecx
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v7 = a2;
  v3 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v4 = (_DWORD *)v3[1];
  if ( *v4 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v3 )
    {
      v8 = 0x1000000LL;
      v9 = (__int64)L"AppNotRunning";
      LODWORD(v7) = *a1;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v5,
                     (int)&dword_1806B625E,
                     (__int64)&v7,
                     (__int64)&v9,
                     (__int64)&v8);
    }
  }
  return (char)v3;
}
