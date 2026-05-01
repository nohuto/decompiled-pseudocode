/*
 * XREFs of ??$ShowControlCenterWithDeepLink@_NPEBGAEAEAEAEAEAEAEAEAEA_KAEA_KAEA_K@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_N$$QEAPEBGAEAE222AEA_K33@Z @ 0x18041C5A8
 * Callers:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z @ 0x180423140 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z @ 0x180144240 (-get@-$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@3333AEBU?$_tlgWrapperByVal@$07@@555@Z @ 0x18041C96C (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U3@U3@U3.c)
 */

char __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::ShowControlCenterWithDeepLink<bool,unsigned short const *,unsigned char &,unsigned char &,unsigned char &,unsigned char &,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &>(
        char *a1,
        __int64 *a2,
        _BYTE *a3,
        _BYTE *a4,
        _BYTE *a5,
        _BYTE *a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9)
{
  __int64 *v13; // rax
  int v14; // r10d
  bool v15; // zf
  bool v17; // [rsp+78h] [rbp-1h] BYREF
  bool v18; // [rsp+79h] [rbp+0h] BYREF
  bool v19; // [rsp+7Ah] [rbp+1h] BYREF
  bool v20; // [rsp+7Bh] [rbp+2h] BYREF
  char v21; // [rsp+7Ch] [rbp+3h] BYREF
  __int64 v22; // [rsp+80h] [rbp+7h] BYREF
  __int64 v23; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+90h] [rbp+17h] BYREF
  __int64 v25; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+A0h] [rbp+27h] BYREF

  v13 = wil::details::static_lazy<ControlCenterLogging>::get(
          (__int64)a1,
          (void (__cdecl *)())_lambda_7497dc87b220aaed4d14ef0ec7d62e5e_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v13[1] > 5u )
  {
    LOBYTE(v13) = tlgKeywordOn(v13[1], 0x400000000000LL);
    if ( (_BYTE)v13 )
    {
      v22 = 0x1000000LL;
      v23 = *a9;
      v24 = *a8;
      v25 = *a7;
      v17 = *a6 != 0;
      v15 = *a5 == 0;
      v26 = *a2;
      v18 = !v15;
      v15 = *a4 == 0;
      v21 = *a1;
      v19 = !v15;
      v20 = *a3 != 0;
      LOBYTE(v13) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                      v14,
                      (int)&dword_18084AB3B,
                      (__int64)&v21,
                      (__int64)&v26,
                      (__int64)&v20,
                      (__int64)&v19,
                      (__int64)&v18,
                      (__int64)&v17,
                      (__int64)&v25,
                      (__int64)&v24,
                      (__int64)&v23,
                      (__int64)&v22);
    }
  }
  return (char)v13;
}
