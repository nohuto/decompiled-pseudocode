/*
 * XREFs of ??$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z @ 0x1802DA11E
 * Callers:
 *     ?HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z @ 0x1802DB392 (-HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001B3C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWr.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::OnTouchEvent<unsigned int,bool &,bool &>(
        int *a1,
        _BYTE *a2,
        char *a3)
{
  __int64 *v6; // rax
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE v12[4]; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+44h] [rbp-14h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h] BYREF
  char v15; // [rsp+78h] [rbp+20h] BYREF

  v6 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v7, 16LL);
    if ( (_BYTE)v6 )
    {
      v15 = *a3;
      v12[0] = *a2;
      v13 = *a1;
      v14 = 0x2000000LL;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v8,
                     (int)&unk_18085CCF6,
                     v9,
                     v10,
                     (__int64)&v13,
                     (__int64)v12,
                     (__int64)&v15,
                     (__int64)&v14);
    }
  }
  return (char)v6;
}
