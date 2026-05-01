/*
 * XREFs of ??$ShowRequestReceived@AEAIAEAIIAEAU?$atomic@_N@std@@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI0$$QEAIAEAU?$atomic@_N@std@@AEA_N3@Z @ 0x18051EA1C
 * Callers:
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x180528520 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@44AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180002044 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U2@U2@U-$_tlgWrapperByVal@$07@@.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::ShowRequestReceived<unsigned int &,unsigned int &,unsigned int,std::atomic<bool> &,bool &,bool &>(
        int *a1,
        int *a2,
        int *a3,
        char *a4,
        char *a5,
        char *a6)
{
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r10d
  char v14; // al
  char v16; // [rsp+60h] [rbp-20h] BYREF
  char v17; // [rsp+61h] [rbp-1Fh] BYREF
  _BYTE v18[2]; // [rsp+62h] [rbp-1Eh] BYREF
  int v19; // [rsp+64h] [rbp-1Ch] BYREF
  int v20; // [rsp+68h] [rbp-18h] BYREF
  int v21; // [rsp+6Ch] [rbp-14h] BYREF
  __int64 v22; // [rsp+70h] [rbp-10h] BYREF

  v10 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
          (__int64)a1,
          _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v10[1] > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn(v10[1], 16LL);
    if ( (_BYTE)v10 )
    {
      v22 = 0x1000000LL;
      v16 = *a6;
      v14 = *a4;
      v17 = *a5;
      v18[0] = v14;
      v19 = *a3;
      v20 = *a2;
      v21 = *a1;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                      v13,
                      (int)&unk_1808617D9,
                      v11,
                      v12,
                      (__int64)&v21,
                      (__int64)&v20,
                      (__int64)&v19,
                      (__int64)v18,
                      (__int64)&v17,
                      (__int64)&v16,
                      (__int64)&v22);
    }
  }
  return (char)v10;
}
