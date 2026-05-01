/*
 * XREFs of ??$StartAnimatingInputView@AEAIAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N$$QEAI@Z @ 0x1804584B8
 * Callers:
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18045BD28 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180458A9C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::StartAnimatingInputView<unsigned int &,bool &,unsigned int>(
        _DWORD *a1,
        char *a2,
        int *a3)
{
  __int64 *v6; // rax
  _DWORD *v7; // rcx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v12; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v13[5]; // [rsp+44h] [rbp-14h] BYREF
  char v14; // [rsp+78h] [rbp+20h] BYREF

  v6 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v7, 16LL);
    if ( (_BYTE)v6 )
    {
      v12 = *a3;
      v14 = *a2;
      v13[0] = *a1;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
                     v8,
                     (unsigned int)&unk_1806B6408,
                     v9,
                     v10,
                     (__int64)v13,
                     (__int64)&v14,
                     (__int64)&v12);
    }
  }
  return (char)v6;
}
